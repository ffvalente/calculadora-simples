#include <stdio.h>
#include <stdlib.h>

int main()


{   int calculo;
    float num1,num2,op;

    printf("Digite o valor 1:");
    scanf("%f",&num1);
    printf("Digite o valor 2:");
    scanf("%f",&num2);
    printf("\nEscolhas: \n 1 para somar\n 2 para subtrair\n 3 para multiplicar\n 4 para dividir\n");
     printf("\nDigite o numero da sua escolha:");
    scanf("%d",&calculo);

    switch(calculo)
    {
        case 1:
            op = num1 + num2;
            printf("\nResultado da soma: %.2f\n",op);
        break;

        case 2:
            op = num1 - num2;
            printf("\nResultado da subtração: %.2f\n",op);
        break;

        case 3:
            op = num1 * num2;
            printf("\nResultado da multiplicacao: %.2f\n",op);
        break;

        case 4:
            op = num1 / num2;
            printf("\nResultado da divisao: %.2f\n",op);
        break;
    }

    return 0;
}
