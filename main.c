#include <stdio.h>
#include <stdlib.h>
typedef struct Value {
    float data;
    float grad;
    struct Value **prev; // this stores the address of the array.
    char operator;
// void pointers cannot be dereferenced

}Value;

Value *add(Value *a, Value *b) {
    Value *newValue = (Value *)malloc(sizeof(Value));
    printf("a: %p, b: %p", a, b);
    newValue->data = a->data + b->data;
    newValue->grad = 0.0;
    Value **children = (Value**)malloc(sizeof(Value*)*2);
    children[0] = a; // children is a array of valueStruct pointers. That is it is an array containing pointers to the value struct.
    children[1] = b;
    newValue->operator = '+';
    newValue->prev = children;
    printf("\nvalue inside function: %p, |  %p\n", newValue->prev, &children);
    printf("\nvalue inside function: %p, |  %p\n", children[0], children[1]);
    return newValue;


}

Value *mul(Value*self, Value*other) {

    Value*newMultiply = (Value*)malloc(sizeof(Value));
    newMultiply->data = self->data * other->data;
    Value **children = (Value**)malloc(sizeof(Value*)*2);
    children[0] = self;
    children[1] = other;
    newMultiply->operator = '*';
    newMultiply->prev = children;
    return newMultiply;


}

Value* power(Value* self, Value * other) {

}



int main() {
    Value a = {2.0, 0.0, NULL};
    Value b = {3.0, 0.0, NULL};
    Value *newValue = add(&a, &b);
    printf("%p, |  %p", &a, &b);
    printf("\ndata: %f", newValue->data);
    printf("\n%f\n", newValue->prev[1]->data);
    free(newValue->prev);
    free(newValue);
    return 0;
}


