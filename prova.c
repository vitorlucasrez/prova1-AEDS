#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Inicializa a semente para números aleatórios baseados no tempo

    int portaPremiada = rand() % 3 + 1; // Escolhe aleatoriamente a porta premiada (entre 1 e 3)
    int portaEscolhida, portaVazia;

    printf("Bem-vindo ao jogo Monty Hall!\n");
    printf("Escolha uma porta (1, 2 ou 3): ");
    scanf("%d", &portaEscolhida);

    // O apresentador deve abrir uma porta vazia que não seja a porta escolhida nem a premiada
    do {
        portaVazia = rand() % 3 + 1;
    } while (portaVazia == portaEscolhida || portaVazia == portaPremiada);

    printf("O apresentador abriu a porta %d que está vazia.\n", portaVazia);

    char opcao;
    printf("Você deseja trocar para a outra porta? (s/n): ");
    
    scanf(" %c", &opcao);

int trocar = (opcao == 's' || opcao == 'S');

    
    printf("Você trocou para a porta %d.\n", portaEscolhida);

    // Verifica se o jogador ganhou o prêmio
    if (portaEscolhida == portaPremiada) {
        printf("Parabéns! Você ganhou o carro!\n");
    } else {
        printf("Que pena! Errrrrrouuuu!.\n");
    }

    return 0;
}