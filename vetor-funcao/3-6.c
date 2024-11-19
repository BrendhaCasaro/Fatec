#include "stdbrendha.h"

#define ex4

#ifdef ex3
//Crie o programa dividido em funções:
//a)Função Armazena: é utilizada para guardar 7 números positivos no vetor A.
//b)Função MED_5: calcule a média dos números que são múltiplos de cinco. 
//Exiba está média no interior da função main.
//c)Função INVERTE: armazene no vetor inverte_A os números armazenados 
//no vetor A em ordem inversa. Exiba separadamente o conteúdo de cada vetor.
//d)Função Menor_Num: verifique o menor número encontrado no vetor A e exiba no interior da função main

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
        if(vet[i] %5 == 0)
        {
           multiplos[j] = vet[i];
           j++;
           contM++;
        }
    }

    if(contM <= 0)
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
        if(vet[i] < menorNum)
        {
            menorNum = vet[i];
        }
    }

    return menorNum;
}


int main ()
{
    armazena(vetorA);

    int media = med_5(vetorA);
    
    if(media == -1)
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
#endif //ex3


#ifdef ex4
// Crie o programa dividido em funções:
// a)Função Armazena: é utilizada para guardar no mínimo 3 e no máximo 12 números quaisquer no vetor X. 
// Essa quantidade é   determinada pelo usuário e definida como uma variável local à função main chamada de quant.
// b)Função Soma_7: calcule a soma apenas dos números contidos no vetor X que são divisíveis por 7. 
// Exiba esta soma no interior desta função.
// c)Função Menor_Par: verifique o menor número par contido no vetor X. 
// Exiba no interior da função main. Caso não tenha nenhum número par no interior do vetor X, 
// informe ao usuário no interior da função main.
// d)Função ExibaMenor_Par: exiba em que posições o menor número par apareceu no veotr X.
// Leia a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral. 
// As notas devem ser maiores ou iguais a zero e menores ou iguais a 10.

int vetorX[12];


void armazena(int* vet, int *t)
{
    alimentArray(vet, t, "Insira os números", "%d");
}


int main()
{
    int quant;

    while (quant < 3 && quant > 12)
    {
    pick(&quant, "%d", "Insira quantos números o vetor terá, de 3 a 12"); 
    }

    armazena(vetorX, quant);
    

}

#endif //ex4