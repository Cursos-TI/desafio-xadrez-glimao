#include <stdio.h>

void movimento(int casas, char *posicao){
    if (casas > 0){
        printf("%s\n", posicao);
        movimento(casas - 1, posicao);
    }
}

void bispo(int casas){
    for (int i = 1; i <= casas; i++){      
        for (int j = 1; j <= 1; j++){      
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

int main(){

    // Torre
    printf("\n=== MOVIMENTANDO A TORRE ===\n");
    movimento(5, "Direita");

    // Bispo
    printf("\n=== MOVIMENTANDO O BISPO ===\n");
    bispo(5);

    // Rainha
    printf("\n=== MOVIMENTANDO A RAINHA ===\n");
    movimento(8, "Esquerda");

    // Cavalo

    printf("\n=== MOVIMENTANDO O CAVALO===\n");
    
    for (int i = 1; i <= 3; i++){
    if (i <= 2){
        printf("Cima\n");
        continue;
    }
    printf("Direita\n");
    break;
    }
    return 0;

}