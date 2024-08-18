// #include <stdio.h>
struct Value{
int a, b;
};

int main() {
    printf("Hello world");
    struct Value valueOne; // this is the declaration of a valueOne struct of type Value 
    return 0;
}

// In the above example we have to define the struct keyword every where we have to create an instance of struct Value.
// To avoid this situation we can use a typedef for this.

struct a {
    int p;
};

typedef struct a val;   // typedef unsigned short uint16

struct a newVar; // the type of this is struct a (similar to unsigned short).

unsigned short us;

// so if we want to directly define the type of our struct as something specific like in the case of unsigned short we want it to call as uint16.
// we can do the same in c by using 

//another way to define it is

typedef struct {
    int q;
    int j;
}myVariableStruct;

