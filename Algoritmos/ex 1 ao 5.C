#include <stdio.h>

float pick_write_f(char* txt)
{
    float geral;
    printf(txt);
    scanf("%f", &geral);

    return geral;
}
#define ex4
#ifdef ex0

int main ()
{
    float n = pick_write_f("teste");
    printf("%f", n);
}
#endif
#ifdef ex1
int number, antecessor, sucessor;

int main()

printf("Insira o primeiro numero\n");
scanf("%d", &number);
antecessor = number - 1;
printf ("O antecessor de " "%d", number);
printf (" sera " "%d", antecessor);
sucessor = number + 1;
printf ("\nO sucessor de " "%d", number);
printf (" sera " "%d\n", sucessor);

//printf("O antecessor de %d sera %d e o sucessor sera %d", number, number-1, number+1);
}
#endif // ex1


#ifdef ex2
int main ()
{
    float valor1, reajuste;
    do
    {
        printf("Escreva o numero \n");
        scanf("%f", &valor1);
    }

    while (valor1<=0);
    reajuste = valor1 * 1.1;
    printf ("seu resultado e " "%f", reajuste);
}
#endif // ex2


#ifdef ex3
int main ()
{
    float num_one, desconto;
    do
    {
        printf("Escreva um numero\n");
        scanf("%f", &num_one);
    }

    while (num_one<=0);
    desconto = num_one * 0.91;
    printf("o valor reajustado e " "%f",desconto);
}
#endif //ex3

#ifdef ex4
int main()
{
    float salario, hora_aula, desc_inss;
    int num_aulas;

    do
    {
        printf("Digite o valor da sua hora por aula\n");
        scanf("%f", &hora_aula);
    }
    while(hora_aula <= 0);
    printf("Digite quantas aulas deu neste mes\n");
    scanf("%d", &num_aulas);

    do
    {
        printf("Digite quantas aulas voce deu\n");
        scanf("%f", &num_aulas);
    }
    while(num_aulas <= 0);

    printf("Digite quantas aulas deu neste mes\n");
    scanf("%d", &num_aulas);

    salario = hora_aula * num_aulas;

    if(salario <= 1412)
    {
        desc_inss = salario * 0.075 - salario;
        printf("Seu salario final e " "%.2f", desc_inss);

    }
    else if(salario > 1412 && salario <= 2666.68)
    {
        desc_inss = salario * 0.09 - salario;
        printf("Seu salario final e " "%.2f", desc_inss);
    }
    else if(salario > 2666.68 && salario <= 4000.03)
    {
        desc_inss = salario * 0.12 - salario;
        printf("Seu salario final e " "%.2f", desc_inss);
    }
    else if(salario > 4000.03 && salario <= 7786.02)
    {
        desc_inss = salario * 0.14 - salario;
        printf("Seu salario final e " "%.2f", desc_inss);
    }
    else if(salario > 7786.02)
    {
        printf("Seu salario e %.2f", salario); //sem desconto
    }
    return 0;
}
#endif // ex4

#ifdef ex5 //ex5

//    O custo ao consumidor de um carro novo, a soma do preço da fábrica com o percentual
//    de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa
//    que receba via teclado: O preço de fábrica de um veículo, o percentual de lucro do
//    distribuidor e o percentual de impostos. Calcule e mostre:
//        a. O valor correspondente ao lucro do distribuidor
//        b. O valor correspondente aos impostos
//        c. O preço final do veículo

int main()
{
    float lucro_dist, impostos, preco_final, preco_car, preco_correspondente_impostos, preco_correspondente_lucro;
    //declaração de lucro do distribuidor, impostos a serem pagos, pre�o final do veículo e preço inicial do carro

    preco_car = pick_write_f("Digite o preco de fabrica do veiculo\n");

    lucro_dist = pick_write_f("Digite o percentual de lucro\n");
    lucro_dist = lucro_dist / 100;

    impostos = pick_write_f("Digite o percentual de impostos a pagar\n");
    impostos = impostos / 100;

    preco_final = preco_car + (lucro_dist * preco_car) + (impostos * preco_car);
    printf("O preco final e %.2f\n\n", preco_final);

    preco_correspondente_impostos = preco_final * impostos;
    printf("O valor correspondente aos impostos e %.2f\n\n", preco_correspondente_impostos);

    preco_correspondente_lucro = preco_final * lucro_dist;
    printf("O valor correspondente ao lucro do distribuidor e %.2f\n\n", preco_correspondente_lucro);

    printf("Valor do carro %.2f\n\nPercentual do lucro %g%%\n\nPercentual de impostos %g%%\n\n", preco_car, lucro_dist * 100, impostos * 100);
}

#endif //ex5
