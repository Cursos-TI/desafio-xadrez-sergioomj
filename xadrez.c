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
    // mover cavalo em formato L (baixo / esquerda)
    void moverCavalo(){
        printf("Mover cavalo em L (Baixo / Esquerda: \n");
        // Primeira parte da movimentação em L : 2 passos para baixo
        for(int i = 1; i <= 2; i++){
            printf(BAIXO);
        }
        // Segunda parte do movimento em L: 1 paso para esquerda
        int passo = 1;
        while(passo <= 1){
            printf(ESQUERDA);
            passo++;
    }
}
        
        

    int main(){
        //variáveis de controle de peças
        int bispo_movimento = 1;
        int torre_movimento = 1;
        int rainha_movimento = 1;
        int cavalo_movimento = 1;
        // movimento bispo
        if(bispo_movimento){
            moverBispo();
        }
        //movimento torre
        if(torre_movimento){
            moverTorre();
        }
        // movimento rainha
        if(rainha_movimento){
            moverRainha();
        }
        //movimento cavalo
        if(cavalo_movimento){
            moverCavalo();
        }
        

        return 0;
    }
