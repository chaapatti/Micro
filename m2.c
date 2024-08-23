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
// function poiiinters
// return type (*function name) parameters
void (*fp) (int);

void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));

qsort(inventory, num_parts, sizeof(structpart) compare_parts);

int compare_parts(const void*p, const void *q) {
    const struct part *p1 = p;
    const struct part *q1 = q;
    
    if(p1->number < q1->number) 
        return -1;
    else if (p1->number == q1->number) 
    return 0;
    else    
        return 1;
}