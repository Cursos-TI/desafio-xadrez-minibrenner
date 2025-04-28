#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void movertorre (int casas){
    if (casas > 0) {
        printf (" Torre para direita!\n");
        movertorre (casas -1);
    }
}

void moverbispo (int casas){
    if (casas > 0){
        printf (" Bispo na diagonal superior direita\n");
        moverbispo (casas -1);
    }
}
void moverrainha (int casas){
    if (casas > 0){
        printf (" Rainha para a esquerda\n");
        moverrainha (casas -1);
    }
}
    void movercavalo (int casas){
        if (casas > 0){
            printf (" cavalo para baixo \n");
            movercavalo (casas -1);
        } else if (casas == 0){
            printf (" Cavalo para a esquerda");
        }
    }


// Realizar um jogo de xadrez, onde as peças se movimentem, e use o printf para demonstrar o caminho de cada peça.
// Bispo 5 casas na diagonal superior direita (While)
// Torre 5 casas para  a direita (for)
// Rainha 8 casas para a esquerda (do while)
int main() {

int opcao;
char peca;

    //Menu interativo
    printf ("---Seja bem vindo ao Jogo de Xadrez!---\n");
    printf ("Selecione uma opção!\n");
    printf ("1. Iniciar o jogo!\n");
    printf ("2. Regras do jogo\n");
    printf ("3. Sair do jogo\n");
    scanf (" %d", &opcao);

    // Ler a opçao escolhida
    switch (opcao)
    {
        case 3:
            printf (" Jogo finalizado...\n");
         break;

         case 2:
        //Descriçao do jogo
         printf("Você irá selecionar uma opção entre Bispo, Torre e Rainha.\n");
         printf("Bispo: se movimenta 5 casas na diagonal.\n");
         printf("Torre: se movimenta 5 casas para a direita.\n");
         printf("Rainha: se movimenta 8 casas para a esquerda.\n");
         printf ("Cavalo se movimenta duas vezes para baixo e uma casa para a esquerda\n");
         break;

          case 1:
          printf (" ---Inicializando o jogo...---\n");
          // Selecao de peças 
          printf ("Por favor selecione a peça que gostaria de mexer\n");
          printf ("R. Para a rainha\n");
          printf ("B. para o bispo\n");
          printf ("T. para a Torre\n");
          printf ("C. Para o Cavalo\n");
          scanf (" %c", &peca);
            
          if (peca == 'T' || peca == 't'){
            printf ("Movendo a torre 5 casas para a direita:\n");
           movertorre (5);
           
            //for (int i = 1; i<= 5;i++) {
                //printf (" Torre para a direita\n");
            //}
          }
            else if ( peca == 'B' || peca == 'b'){
            printf ("Movendo o bispo 5 casas para a diagonal superior direita\n");
            //int i = 1;
            //while (i <=5){
                //printf ("Bispo para a diagonal superior direita\n");
                //i++;

                moverbispo (5);
          
        }
            else if (peca == 'R' || peca == 'r'){
               printf ("Movimentando rainha 8 casas a esquerda!\n");
               //int i =1;
              // do {
                //printf ("Rainha para a esquerda\n");
                //i++;
               //}while (i<= 8);
               moverrainha (8);
               }
            else if (peca == 'C' || peca == 'c') // Peça do cavlo, usando for, para repetir a funçao baixo duas x e a funçao esquerda fora da chave uma vez.
            {
               //printf ("Movimentando o cavalo duas casas para baixo e uma casa para a esquerda!\n");
               //for (int i = 0; i < 2; i++)
               //{
                //printf ("Cavalo para baixo\n");
              // }
               //printf ("Cavalo para esquerda\n");

               movercavalo (2);
               }
            else {
                printf ("Peça invalida!!\n");
            }
            break;

        default:
            printf ("Opção invalida!\n");
        break;
    }




return 0;

}