#include<math.h>
int menuFuncoes()
{
    int opcao;
    printf("******************************************************\n");
    printf("********************CalcPersonal**********************\n");
    printf("******************************************************\n");
    printf("******************Escolha uma Opção*******************\n");
    printf("**                                                  **\n");
    printf("**          0 - Menu Principal                      **\n");
    printf("**          1 -           Raiz                      **\n");
    printf("**          2 -  Exponenciação                      **\n");
    printf("**          3 -       Fatorial                      **\n");
    printf("**                                                  **\n");
    printf("******************************************************\n");
    printf("******************************************************\n");
    scanf("%d",&opcao);
    system("cls");
    return (opcao);
}

void funcaoEscolhida(int o)
{
    while(o!=0)
    {
        switch(o)
        {
        case 1:
            raiz();
            break;
        case 2:
            exponenciacao();
            break;
        case 3:
            fatorial();
            break;
        default:
            printf("Função inválida!\n");
        }
        system("pause");
        system("cls");
        o=menuFuncoes();

    }
}

void raiz()
{
    float i,n;
    printf("Informe o indice da raiz.\n");
    scanf("%f", &i);
    printf("Informe um número.\n");
    scanf("%f", &n);
    printf("A raiz %f do número %f é: %.2f.\n", i,n,pow(n,(1.0/i)));

}

void exponenciacao()
{
    float e,n;
    printf("Informe o expoente.\n");
    scanf("%f", &e);
    printf("Informe um número base.\n");
    scanf("%f", &n);
    printf("%.2f elevado a %.2f é: %.2f.\n",n,e,pow(n,e));

}

void fatorial()
{
    int fat, i,n;
    printf("Insira um valor para fatorar:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i = i + 1) {
        fat = fat * i;
    }
    printf("%d\n", fat);
}
