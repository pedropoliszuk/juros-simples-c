#include <stdio.h>

// definicao de constante
#define TAXA_JUROS 0.05f // 5% ao ano

int main(void)
{
    // variaveis do investimento
    float valor_inicial, valor_final;
    int anos;

    // entrada do usuario
    printf("Digite o valor inicial do investimento: ");
    scanf("%f", &valor_inicial);

    printf("Digite o numero de anos: ");
    scanf("%d", &anos);

    // calculo do valor final (juros simples)
    valor_final = valor_inicial * (1.0f + (TAXA_JUROS * anos));

    // exibicao do valor final
    printf("\nValor final do investimento apos %d anos: R$ %.2f\n", anos, valor_final);

    // vetor e matriz
    int vetor[3] = {10, 20, 30};
    int matriz[2][2] = {{1, 2}, {3, 4}};

    // ponteiro
    int *ptr = &vetor[0];
    *ptr = 99; // modifica o primeiro elemento do vetor

    // exibir valores e enderecos
    printf("\n--- Vetor ---\n");
    for (int i = 0; i < 3; i++)
    {
        printf("vetor[%d] = %d | endereco = %p\n", i, vetor[i], (void*)&vetor[i]);
    }

    printf("\n--- Matriz ---\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("matriz[%d][%d] = %d | endereco = %p\n",
                   i, j, matriz[i][j], (void*)&matriz[i][j]);
        }
    }

    return 0;
}
