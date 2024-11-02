#include <stdio.h>
#include <locale.h>

#define ex2


#ifdef ex1
/*Receba oito números positivos. Exiba a média desses números.
*/

int main ()
{
    setlocale(LC_ALL, "");
    int somaNotas = 0, i;
    float media, notas[8];

    for(i = 0; i < 8; i++)
    {
        printf("Digite o %dº número\n", i + 1);
        scanf("%f", &notas[i]);

        do
        {
            if(notas[i] < 0 && notas[i] > 10)
            {
                printf("numero invalido\n");
            }
        }
        while(notas[i] < 0 && notas[i > 10]);

        somaNotas = somaNotas + notas[i];
        media = somaNotas / 8;
    }

    printf("Soma das notas informadas: %d\n", somaNotas);
    printf("A média dos números é: %g\n", media);

    return 0;
}
#endif //ex1


#ifdef ex2
//Receba sete números pares. Exiba a quantidade de números pares maiores que 10

int main ()
{
    setlocale(LC_ALL, "");
    int num[10], i, vet, num10 = 0;

    printf("Digite a quantidade de números que deseja adicionar, de 1 a 10 espaços disponíveis: ");
    scanf("%d", &vet);

    while(vet < 1 || vet > 10)
    {
        if(vet < 1 || vet > 10)
        {
            printf("Quantidade inválida, digite um valor de 1 a 10\n");
        }
    }

    for(i = 0; i < vet; i++)
    {
        do
        {
            printf("Digite o %dº número: ", i + 1);
            scanf("%d", &num[i]);
            if(num[i] %2 != 0)
            {
                printf("O número não é par!\n");
            }
            else if(num[i] > 10)
            {
                num10 = num10 + 1;
            }
        }
        while(num[i] %2 != 0);
    }
    printf("A quantidade de números pares maiores que 10 é: %d", num10);
}


#endif // ex2
