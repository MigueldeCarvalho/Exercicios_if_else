#include <stdio.h>

int main(int argc, char const *argv[])
{

    int idade;

    printf("Digite sua idade\n");
    scanf("%d", &idade);

    if (idade < 18)
    {
        printf("Não eleitor");
    }
    else
    {
        if (idade > 65)
        {
            printf("Eleitor facultativo");
        }
        else
        {
            printf("Eleitor obrigatório");
        }
    }
}