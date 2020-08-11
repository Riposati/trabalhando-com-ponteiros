#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void mostrarSomaValoresPonteiros(int *p, int *p2, int *p3){

    int c = *p;
    int d = *p2;
    int e = *p3;

    // *p3 = 10;
    // e = *p3;
    // printf("Novo p3 -> %d\n",*p3);

    puts("usando primeira funcao");
    printf("%d\n", c+d+e);
}

int sum(int *a, int *b,int *c){
    puts("usando segunda funcao");
    return (*a+*b+*c);
}

int main(){

    int a = 20;
    int *p = &a;

    printf("p -> %d\n",*p);

    int **p2 = p;
    int ***p3 = p;
    
    printf("p2 -> %d\n",*p2);
    printf("p3 -> %d\n",*p3);

    mostrarSomaValoresPonteiros(p, p2, p3); // mostra 50

    a = 10;

    mostrarSomaValoresPonteiros(p, p2, p3);  // mostra 30

    a = 5;

    mostrarSomaValoresPonteiros(p, p2, p3);

    a = 1;

    mostrarSomaValoresPonteiros(p, p2, p3);

    printf("%d\n", sum(&a,&a,&a));

    system("pause");

    return 0;
}