#include <stdio.h>
// Movimento da torre
void torre(int numero)
{
    if (numero > 0)
    {
        torre(numero - 1);
        printf(" direita \n");
    }
}
// Movimento da rainha
void rainha(int numero)
{
    if (numero > 0)
    {
        rainha(numero - 1);
        printf(" esquerda \n");
    }
}

int main()
{

    // movimnetação de peças de xadrez
    printf("***Movimentação de peças de xadrez***\n\n");
    printf("Movimentação da torre em  5 casas a direita\n\n");

    // movimentação da torre.
    int movimentoTorre = 5; // quantidade de movimentos
    torre(movimentoTorre);

    printf("\nMovimentação da rainha em  8 casas a esquerda\n\n");
    // movimentação da rainha.
    int movimentoRainha = 8; // quantidade de movimentos
    rainha(movimentoRainha);

    printf("\nMovimentação do bispo se movendo cinco casas na diagonal para cima e à direita\n\n");
    // movimentação do bispo.
    for (int i = 1; i <= 5; i++)
    {
        // O loop externo (i) percorre os valores de 1 a 5, então ele roda 5 vezes.

        for (int j = 1; j <= 1; j++)
        // O loop interno (j) percorre os valores de 4 a 5, então ele roda 2 vezes para cada valor de i.

        {
            printf("direita \n");
        }

        printf("cima \n");
    }

    printf("\nMovimentação do cavalo se movendo duas casas a cima e uma a direita\n\n");
    // movimentação do cavalo.
    for (int i = 1; i <= 2; i++)
    {
        // O loop externo (i) percorre os valores de 1 a 2, então ele roda 2 vezes.

        for (int j = 1; j <= 1; j++)
        // O loop interno (j) percorre os valores de 1 a 1, então ele roda 1 vezes para cada valor de i.

        {
            if (j % 2 != 0)
            { // foi acrescentadoa  condição de que quando o valor de j for impar ele imprima direita, quando for par ele imprima cima.
                printf("cima \n");
            }
        }
    }

    printf("direita \n");
}
