#include <stdio.h>

int main(){
    int torre, bispo, rainha;
    int cavalo;

    // Torre
    printf("\n=== MOVIMENTANDO A TORRE===\n");
    for (torre = 1; torre <= 5; torre++){
        printf("Direita %dx\n", torre);
    }

    // Bispo
    bispo = 1;
    printf("\n=== MOVIMENTANDO O BISPO===\n");
    while (bispo <= 5)
    {
        printf("Cima, direita %dx\n", bispo);
        bispo++;
    }

    // Rainha
    rainha = 1;
    printf("\n=== MOVIMENTANDO A RAINHA===\n");
    do
    {
        printf("Esquerda %dx\n", rainha);
        rainha++;
    } while (rainha <= 8);

    // Cavalo
    int passos_baixo = 2;
    int passos_esquerda = 1;
    int passo_atual = 0;

    printf("\n=== MOVIMENTANDO O CAVALO===\n");
    do
    {
        for (cavalo = 1; cavalo <= passos_baixo; cavalo++)
        {
            printf("Baixo\n");
        }
        for (int e = 1; e <= passos_esquerda; e++)
        {
            printf("Esquerda\n");
        }
        passo_atual++;
    } while (passo_atual < 1);
        
        
    return 0;

}