#include <stdio.h>

int main(int argc, char const *argv[])
{

    int numero_1, numero_2;

    printf("Digite o primeiro número\n");
    scanf("%d", &numero_1);

    printf("Digite o segundo número\n");
    scanf("%d", &numero_2);

    if (numero_1 > numero_2)
    {
        printf("O primeiro numero é maior que o segundo numero");
    }
    else if (numero_1 == numero_2)
    {
        printf("Os dois numeros são iguais");
    }
    else
    {
        printf("O segundo numero é maior que o numero primeiro");
    }

    return 0;
}