#include <stdio.h>
#include <stdlib.h>

struct fracao
{
    int num, den;
};
void leitura1(struct fracao *);
struct fracao leitura2();

void exibe1(char *, struct fracao);
void exibe2(char *,struct fracao *);

void inverte1(struct fracao *);
struct fracao inverte2 (struct fracao);

int main()
{
    struct fracao f1, *pf2;
    struct fracao f3, *pf4;

    pf2 = (struct fracao *)malloc(sizeof(struct fracao));

    leitura1(&f1);
    leitura1(pf2);

    exibe1("f1 ",f1);
    exibe1("*pf2 ", *pf2);

    pf4 = (struct fracao *)malloc(sizeof(struct fracao));
    f3 = leitura2();
    *pf4 = leitura2();

    exibe2("f3 ", &f3);
    exibe2("*pf4", pf4);

    inverte1(&f1);
    inverte1(pf2);

    exibe1("f1 invertida",f1);
    exibe1("*pf2 invertida", *pf2);

    f3 = inverte2(f3);
    *pf4 = inverte2(*pf4);

    exibe2("f3 invertida", &f3);
    exibe2("*pf4 invertida", pf4);


    return 0;
}

void leitura1(struct fracao *pf)
{
    printf("Digite um numerador: ");
    scanf("%d", &pf->num);
    printf("Digite um denominador: ");
    scanf("%d", &pf->den);
}
struct fracao leitura2()
{
    struct fracao f;
    printf("Digite um numerador: ");
    scanf("%d", &f.num);
    printf("Digite um denominador: ");
    scanf("%d", &f.den);
    return f;
};

void exibe1(char * msg,struct fracao f){
    printf("\n %s: %d/%d\n", msg, f.num, f.den);
}
void exibe2(char * msg, struct fracao *pf){
    printf("\n %s: %d/%d\n", msg, pf->num, pf->den);
}

void inverte1(struct fracao * pf){
    int aux = pf->num;
    pf->num = pf->den;
    pf->den = aux;
}
struct fracao inverte2 (struct fracao f){
    struct  fracao local;
    local.num = f.den;
    local.den = f.num;
    return local;
};


