#include <stdio.h>

//Constantes para as direções
#define CIMA "Cima\n"
#define BAIXO "Baixo\n"
#define ESQUERDA "Esquerda\n"
#define DIREITA "Direita\n"

//Mover o Bispo cima/direita
void moverBispo(){
    printf("Movendo Bispo 5 casas na diagonal cima/ direita: \n");
    for(int i = 1; i <= 5; i++){
        printf(CIMA);
        printf(DIREITA);
    }
}

    //Mover a Torre para direita
    void moverTorre(){
        printf("Mover torre 5 casas para direita: \n");
        for( int i = 1; i <= 5; i++){
            printf(DIREITA);
        }
    }

    //Mover Rainha para a Esquerda
    void moverRainha(){
        printf("Mover rainha 8 casas para a esquerda: \n");
        for(int i = 1; i <= 8; i++){
            printf(ESQUERDA);
        }
    }

    int main(){
        //variáveis de controle de peças
        int bispo_movimento = 1;
        int torre_movimento = 1;
        int rainha_movimento = 1;

        if(bispo_movimento){
            moverBispo();
        }

        if(torre_movimento){
            moverTorre();
        }

        if(rainha_movimento){
            moverRainha();
        }

        return 0;
    }
