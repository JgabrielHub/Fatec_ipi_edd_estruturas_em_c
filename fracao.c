#include <stdio.h>
#include <stdlib.h>

struct fracao
{
    int num, den;
};
struct teste
{
    int numero;
    char letra1, letra2;
    short int pequeno;
};

int main()
{
    struct fracao f1, *f2;
    printf("Digite o numerador de f1: ");
    scanf("%d", &f1.num);
    printf("Digite o denominador de f1: ");
    scanf("%d", &f1.den);

    f2 = (struct fracao*) malloc(sizeof(struct fracao));

    printf("\nDigite o numerador de f2: ");
    scanf("%d", &f2->num);
    printf("\nDigite o denominador de f2: ");
    scanf("%d", &f2->den);

    printf("tamanho da variavel f1: %d\n", sizeof(f1));
    printf("tamanho da variavel f2: %d\n", sizeof(f2));
    printf("tamanho do short int: %d\n", sizeof(short int));
    printf("tamanho da struct teste: %d\n", sizeof(struct teste));

    printf("\nf1: %d/%d\n", f1.num, f1.den);
    printf("\nf2: %d/%d\n", f2->num,f2->den);
    return 0;
}
