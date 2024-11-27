#include "stdbrendha.h"
#include <stdlib.h>

#define ex5

#ifdef ex3
// Crie o programa dividido em funções:
// a)Função Armazena: é utilizada para guardar 7 números positivos no vetor A.
// b)Função MED_5: calcule a média dos números que são múltiplos de cinco.
// Exiba está média no interior da função main.
// c)Função INVERTE: armazene no vetor inverte_A os números armazenados
// no vetor A em ordem inversa. Exiba separadamente o conteúdo de cada vetor.
// d)Função Menor_Num: verifique o menor número encontrado no vetor A e exiba no interior da função main

int vetorA[7];

void armazena(int *vet)
{
    alimentArray(vet, 7, "Insira 7 números inteiros\n", "%d");
}

int med_5(int *vet)
{
    int multiplos[7];
    int j = 0;
    int contM = 0;

    forzao(7)
    {
        if (vet[i] % 5 == 0)
        {
            multiplos[j] = vet[i];
            j++;
            contM++;
        }
    }

    if (contM <= 0)
    {
        return -1;
    }

    int media = 0;

    forzao(contM)
    {
        media += multiplos[i];
    }

    media /= contM;

    return media;
}

int inverte_A[7];

void inverte(int *vet)
{
    int j = 6;

    forzao(7)
    {
        inverte_A[j] = vet[i];
        j--;
    }

    printArray_i(vet, 7, "Valores do vetor A", "%d ");
    printArray_i(inverte_A, 7, "Valores invertidos do Vetor A no vetor inverte_A", "%d ");
}

int menor_num(int *vet)
{
    int menorNum = vet[0];
    forzao(7)
    {
        if (vet[i] < menorNum)
        {
            menorNum = vet[i];
        }
    }

    return menorNum;
}

int main()
{
    armazena(vetorA);

    int media = med_5(vetorA);

    if (media == -1)
    {
        puts("Número múltiplo de 5 não encontrado");
    }
    else
    {
        printf("%d\n", media);
    }

    inverte(vetorA);

    int menorNumero = menor_num(vetorA);
    printf("O menor número do vetor A é: %d\n", menorNumero);

    return 0;
}
#endif // ex3

#ifdef ex4
// crie o programa dividido em funções:
//  a)função armazena: é utilizada para guardar no mínimo 3 e no
//  máximo 12 números quaisquer no vetor x. essa quantidade é
//  determinada pelo usuário e definida como uma variável local à função main chamada de quant.
//  b)	Função Soma_7: calcule a soma apenas dos números contidos no
//  vetor X que são divisíveis por 7. Exiba esta soma no interior desta função.
//  c)	Função Menor_Par: verifique o menor número par contido
//  no vetor X. Exiba no interior da função main.
//  Caso não tenha nenhum número par no interior do vetor X, informe ao usuário no interior da função main.
//  d)	Função ExibaMenor_Par: exiba em que posições
//  o menor número par apareceu no veotr X.
//  e)Leia a nota da prova de 15 alunos e armazene num
//  vetor, calcule e imprima a média geral.
//  As notas devem ser maiores ou iguais a zero e menores ou iguais a 10.

void armazena(int *vet, int *t)
{
    alimentArray(vet, *t, "Insira de 3 a 12 números quaisquers\n", "%d");
}

void soma_7(int *vet, int t)
{
    int soma = 0;
    forzao(t)
    {
        if (vet[i] % 7 == 0)
        {
            soma += vet[i];
        }
    }

    printf("Soma entre os números divisíveis por 7: %d\n", soma);
}

int menor_par(int *vet, int t)
{
    int cont = 0, menor = 0;
    forzao(t)
    {
        if (vet[i] % 2 == 0)
        {
            cont++;

            if (cont == 1 || menor > vet[i])
            {
                menor = vet[i];
            }
        }
    }

    if (cont == 0)
    {
        printf("Não existem números pares\n");
        return -1;
    }

    return menor;
}

void exibaMenor_par(int *vet, int menorNum, int t)
{
    forzao(t)
    {
        if (vet[i] == menorNum)
        {
            printf("Posição em que o menor número par (%d) aparece no vetor: %d\n", menorNum, i);
        }
    }
}

void NotasAlunos()
{
    int notas[15];

    forzao(15)
    {
        do
        {
            printf("Digite as notas dos alunos\n");
            scanf("%d", &notas[i]);

            if (notas[i] < 0 || notas[i] > 10)
            {
                printf("A nota deve estar entre 0 e 10\n");
            }
        } while (notas[i] < 0 || notas[i] > 10);
    }

    int media = 0;
    forzao(15)
    {
        media += notas[i];
    }

    media /= 15;
    printf("Média das notas dos 15 alunos: %d\n", media);
}

int main()
{
    int vetorX[12];
    int quant;

    pick(&quant, "%d", "Digite quantos espaços você quer que o vetor tenha: ");

    armazena(vetorX, &quant);

    soma_7(vetorX, quant);

    int menor = menor_par(vetorX, quant);
    printf("Menor número par do vetor: %d\n", menor);

    exibaMenor_par(vetorX, menor, quant);

    NotasAlunos();

    return 0;
}
#endif // ex4

#ifdef ex5
// 5.	Crie o programa dividido em funções:
// a.	Função Armazenas :armazena no vetor A  no mínimo 7 e no máximo 18 números quaisquer.
// Essa quantidade é determinada pelo usuário e definida
// como uma variável local à função main chamada de quant.
// b.	Função VetPositivos: armazene neste vetor apenas os
// números maiores ou iguais azero contidos no vetor A.
// Caso não tenha sido encontrado no vetorA  nenhum número que satisfaça essas condições
// informe ao usuário no interior da função main.
// c.	Função Fatorial:crie uma função que calcule o fatorial de
// cada número do VetPositivos e o  seu fatorial no vetor FatorialVetPositivos.

void armazenas(int *vet, int *t)
{
    alimentArray(vet, *t, "Preencha o vetor", "%d");
}

int *VetPositivos(int *vet, int *t)
{
    int cont = 0, j = 0;
    forzao(*t)
    {
        if (vet[i] >= 0)
        {
            cont++;
        }
    }

    if (cont == 0)
    {
        return NULL;
    }

    int *vetorPositivos = (int *)malloc(sizeof(int) * cont);

    forzao(cont)
    {
        if (vet[i] >= 0)
        {
            vetorPositivos[j] = vet[i];
            j++;
        }
    }

    return vetorPositivos;
}

unsigned long fatorial(unsigned long n)
{
    if (n == 1) {
        return n;
    }

    return n * fatorial(n - 1);
}

int main()
{
    // int quant;

    // do
    // {
    //     pick(&quant, "%d", "Digite o tamanho que você quer que o vetor tenha: ");
    // } while (quant < 7 || quant > 18);

    // int vetorA[quant];

    // armazenas(vetorA, &quant);

    // if (VetPositivos(vetorA, &quant) == NULL)
    // {
    //     printf("Não há números maiores ou iguais a zero\n");
    // }

    printf("%ld\n", fatorial(420));

    return 0;
}

#endif // ex5