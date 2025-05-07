#include <stdio.h>

int main(int argc, char const *argv[])
{

    int numero;

    printf("Digite um número\n");
    scanf("%d", &numero);

    if ((numero % 2) == 0)
    {
        printf("Esse numero é par\n");
    }
    else
    {
        printf("Esse numero é impar\n");
    }
    return 0;
}
