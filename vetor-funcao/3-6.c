#include "stdbrendha.h"
#include <locale.h>



//Crie o programa dividido em funções:
//a)Função Armazena: é utilizada para guardar 7 números positivos no vetor A.
//b)Função MED_5: calcule a média dos números que são múltiplos de cinco. Exiba está média no interior da função main.
//c)Função INVERTE: armazene no vetor inverte_A os números armazenados no vetor A em ordem inversa. Exiba separadamente o conteúdo de cada vetor.
//d)Função Menor_Num: verifique o menor número encontrado no vetor A e exiba no interior da função main

int vetorA[7];

void armazena(int *vet)
{
    alimentArray(vet, 7, "Insira 7 números inteiros", "%d");
}


void med_5(int *vet)
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

    int media = 0; 

    forzao(contM)
    {
        media += multiplos[i];
    }

    media /= contM;
}


int main ()
{
    armazena(vetorA);
}