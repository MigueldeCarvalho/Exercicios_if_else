#include <stdio.h>

int main(int argc, char const *argv[])
{

    int numero;

    printf("Digite um numero\n");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("Esse numero é positivo");
    }
    else
    {
        printf("Esse numero é negativo");
    }

    return 0;
}