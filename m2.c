#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int **k;

} Node;
Node *val(int*a, int*b) {
   
    Node *para = malloc(sizeof(para));
    int *varibale[2] = {a, b};
    para->k = varibale;
    return para;
}


int main() {
    int a= 10;
    int b = 20;
    
    
    Node *j;
    j = val(&a, &b);
    printf("%d, %d", j->k[0][0], j->k[0][1]);
}