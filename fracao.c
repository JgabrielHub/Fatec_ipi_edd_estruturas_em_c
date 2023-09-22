#include <stdio.h>
#include <stdlib.h>

struct fracao
{
    int num, den;
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

    printf("\nf1: %d/%d\n", f1.num, f1.den);
    printf("\nf2: %d/%d\n", f2->num,f2->den);
    return 0;
}
