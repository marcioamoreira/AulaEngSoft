int menuOperacoes()
{
    int opcao;
    printf("******************************************************\n");
    printf("********************CalcPersonal**********************\n");
    printf("******************************************************\n");
    printf("******************Escolha uma Op��o*******************\n");
    printf("**                                                  **\n");
    printf("**          0 - Menu Principal                      **\n");
    printf("**          1 -           Soma                      **\n");
    printf("**          2 -      Subtra��o                      **\n");
    printf("**          3 -  Multiplica��o                      **\n");
    printf("**          4 -        Divis�o                      **\n");
    printf("**                                                  **\n");
    printf("******************************************************\n");
    printf("******************************************************\n");
    scanf("%d",&opcao);
    system("cls");
    return (opcao);
}

void operacaoEscolhida(int o)
{
    while(o!=0)
    {
        switch(o)
        {
        case 1:
            soma();
            break;
        case 2:
            subtracao();
            break;
        case 3:
            multiplicacao();
            break;
        case 4:
            divisao();
            break;
        default:
            printf("Opera��o inv�lida!\n");
        }
        system("pause");
        system("cls");
        o=menuOperacoes();

    }
}

void soma()
{
    float n1,n2;
        printf("Insira o primeiro n�mero:\n");
        scanf("%f",&n1);
        printf("Insira o primeiro n�mero:\n");
        scanf("%f",&n2);
        printf("Resultado: %.2f\n",n1+n2);
}

void subtracao()
{
}

void multiplicacao(){
}

void divisao(){
}
