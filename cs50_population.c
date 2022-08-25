#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //Solicitar o valor inicial ao usuário maior que 8

    int valor_inicial;
    do
    {
        valor_inicial= get_long("Valor inicial: ");
    }
    while (valor_inicial <9);

    //Solicitar o valor final ao usuário maior que o valor inicial
    int valor_final;
    do
    {
        valor_final=get_long("valor desejado: ");
    }
    while (valor_final < valor_inicial);

    //Calcular o número de anos até o limite
    int years=0;
    do
    {
        valor_inicial=valor_inicial+((valor_inicial/3)-(valor_inicial/4));
        years++;
    }
    while (valor_inicial < valor_final );

    //Imprimir o número de anos


    {
        printf("Years: %i\n",years);
    }

}
