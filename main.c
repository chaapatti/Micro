#include <stdio.h>
#include <stdlib.h>
typedef struct Value {
    float data;
    float grad;
    struct Value **prev;
// void pointers cannot be dereferenced

}Value;

Value *add(Value *a, Value *b) {
    Value *newValue = (Value *)malloc(sizeof(Value));
    printf("a: %p, b: %p", a, b);
    newValue->data = a->data + b->data;
    newValue->grad = 0.0;
    Value *children[2] = {a, b};
    
    newValue->prev = children;
    printf("\nvalue inside function: %p, |  %p\n", newValue->prev, children);
    printf("\nvalue inside function: %p, |  %p\n", children[0], children[1]);
    return newValue;


}



int main() {
    Value a = {2.0, 0.0, NULL};
    Value b = {3.0, 0.0, NULL};
    Value *newValue = add(&a, &b);
    printf("%p, |  %p", &a, &b);
    printf("\ndata: %f", newValue->data);
    printf("\n%p, |  %p\n", newValue->prev, newValue->prev[1]);

    return 0;
}

