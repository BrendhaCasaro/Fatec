#include <stdio.h>

float pow(int base, int expoente)
{
    if(expoente == 0)
    {
        return 1;
    }

    if(expoente < 0)
    {
        expoente = expoente * -1;
        float resultado = 1 / pow(base, expoente);
        return resultado;
    }

    int resultado = base; //base ^ 1

    for(int i = 1; i < expoente; i++)
    {
        resultado = base * resultado;
    }
    return resultado;

}


int fatorial(int numero)
{
    int resultado = numero;
    if(resultado < 0)
    {
        printf("Um numero negativo nao pode ser fatorado!\n");
    }
    for(int i = 0; i < numero; i++)
    {
        resultado = resultado * (numero - 1);
        numero = numero - 1;
    }
    return resultado;
}

int main()
{
    printf("5 ^ 4 = %g\n", pow(5, 4));
    printf("2 ^ 3 = %g\n", pow(2, 3));
    printf("4 ^ 2 = %g\n", pow(4, 2));
    printf("1000 ^ 0 = %g\n", pow(1000, 0));
    printf("100 ^ -2 = %g\n", pow(100, -2));




    printf("5! = %i\n", fatorial(5));
    printf("-6! = %i\n", fatorial(-6));
    printf("0! = %i\n", fatorial(0));

}


