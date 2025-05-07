#include <stdio.h>

int main(int argc, char const *argv[])
{

    float numero;

    printf("Digite o numero de maças\n");
    scanf("%f", &numero);

    if (numero < 12)
    {
        printf("%f", numero * 2.30);
    }
    else
    {
        printf("%f", numero * 1.95);
    }

    return 0;
}