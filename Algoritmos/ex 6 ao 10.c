#include <stdio.h>
#include <math.h>

float pick_write_f(char* txt)
{
    float geral;
    printf(txt);
    scanf("%f", &geral);

    return geral;
}

#define ex7
#ifdef teste_for_no_while
int main()
{
    float notas[4];
    int i = 0;
    do
    {
        printf("Digite a nota\n");
        scanf("%f", &notas[i]);

        i++;
    }
    while(i < 4);

}



#endif // teste
#ifdef ex6

//    Elabore um programa que receba o sal�rio de um funcion�rio e calcule o reajuste desse
//    sal�rio. Considere que o funcion�rio deve receber um reajuste de 15% caso seu sal�rio
//    seja menor que 800 reais. Se o sal�rio for maior ou igual a 800 e menor ou igual a 1000,
//    seu reajuste ser� de 10 %; caso seja maior que 1000, o reajuste deve ser de 5%. Ao final
//    do programa deve apresentar o valor antigo e o novo sal�rio.

int main()
{
    float salario, reajuste;

    salario = pick_write_f("Digite o seu salario\n");
    if(salario < 800.00)
    {
        reajuste = (salario * 0.15) + salario;
        printf("o salario com reajuste de 15%% e %.2f\n\n", reajuste);
    }
    else if(salario >= 800 && salario <= 1000)
    {

        reajuste = (salario * 0.10) + salario;
        printf("o salario com reajuste de 10%% e %.2f\n\n", reajuste);
    }
    else if(salario > 1000)
    {
        reajuste = (salario * 0.05) + salario;
        printf("o salario com reajuste de 5%% e %.2f\n\n", reajuste);
    }
    printf("Salario antigo: %.2f\n\nSalario atual: %.2f\n", salario, reajuste);
}
#endif // ex6

#ifdef ex7

//Leia quatro valores referentes �s notas escolares de um aluno e exiba uma mensagem
//dizendo que ele foi aprovado se a m�dia for maior ou igual a 6. Caso contr�rio informe
//que ele est� reprovado. Apresente junto � mensagem o valor da m�dia obtida pelo aluno
//independente de ter sido aprovado ou n�o. As notas dever�o ser maiores ou iguais a zero
//e menores ou iguais a dez.


int main()
{
    float notas[4];

    for (int i = 0; i < 4; i++)
    {
        do
        {
            char* messager;
            sprintf(messager, "Digite a %d nota de 0 a 10: ", i + 1);
            notas[i] = pick_write_f(messager);

            if (notas[i] < 0 || notas[i] > 10) printf("Numero invalido\n");
        }
        while(notas[i] < 0 || notas[i] > 10);
    }

    float media = (notas[0] + notas[1] + notas[2] + notas[3]) / 4;

    if(media > 6)
    {
        printf("sua media e %g e voce esta aprovado", media);
    }
    else
    {
        printf("Sua media e %g e voce esta reprovado", media);
    }

    // printf("Sua media e %g e voce esta %s\n", media, media > 6 ? "aprovado" : "reprovado");
}

#endif // ex7


#ifdef ex8

//Receba dois números, o primeiro deve ser maior que 10 e menor que 25, o segundo deve
//ser maior ou igual a zero, o terceiro deve ser a soma dos dois primeiros e o quarto é o
//produto dos três números anteriores. Calcule e exiba a soma dos quadrados de cada um
//dos quatro números. Caso o resultado seja menor que 50000, solicite novos dados.

int main ()
{
    int num1, num2, num3, num4, quadrado;
    do
    {
        do
        {
            num1 = pick_write_f("Digite o primeiro numero\n");
        }
        while(num1 < 10 || num1 > 25);

        do
        {
            num2 = pick_write_f("Digite o segundo numero\n");
        }
        while(num2 < 0);

        num3 = num1 + num2;
        printf("Soma dos dois primeiros numeros = %d\n", num3);
        num4 = num1 * num2 * num3;
        printf("Produto dos tres ultimos numeros =  %d\n", num4);
        quadrado = (num1 ^ 2) + (num2 ^ 2) + (num3 ^ 2) + (num4 ^ 2);
        printf("Potencia dos quatro ultimos numeros = %d\n", quadrado);
    }
    while(quadrado > 50000);
}
#endif //ex8

#ifdef ex9

//Leia dois valores a e b e os escreva com a mensagem: "São múltiplos" ou "Não são
//múltiplos

int main ()
{
    int a, b, c;

    printf("Digite os numeros para saber se sao multiplos\n");
    scanf("%d %d", &a, &b);
    c = a % b;
    printf("%d\n", c);

    if(c == 0)
    {
        printf("Os numeros sao multiplos\n");
    }
    else
    {
        printf("Os numero nao sao multiplos\n");
    }
}

#endif // ex9

#ifdef ex10

//Leia o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e
//em 20% se ele for maior ou igual a 100.

int main ()
{
    float produto, inflacao;

    do
    {
        produto = pick_write_f("Digite o preco do produto\n");
    }
    while(produto <= 0);


    if(produto < 100)
    {
        inflacao = produto * 1.10;
        printf("O valor inflacionado e de: %g", inflacao);
    }
    else
    {
        inflacao = produto * 1.20;
        printf("O valor inflacionado e de: %g", inflacao);
    }
}


#endif // ex10
