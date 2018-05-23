#include <stdio.h>
#include <stdlib.h>
#include "Operacoes.h"
#include "funcoes.h"
#include "Controle.h"
int main(void)
{
    int op;
    op=menuInicial();
    while(op!=0){
        switch(op){
        case 1: op=menuFuncoes();
        funcaoEscolhida(op);
        break;
        case 2: menuOperacoes();
        operacaoEscolhida(op);
        break;
        default:
            printf("Opção inválida!");
        }
        op=menuInicial();
    }


    return 0;
}
