#include "stdbrendha.h"
#include <locale.h>

#define ex2

#ifdef ex1
/*Crie o programa dividido em funções:
a)	Função Armazena: é utilizada para guardar dez números quaisquer no vetor A.
b)	Função Vetor_B: construa o vetor B de mesma dimensão com os elementos do vetor
A baseado nas seguintes condições: se o índice for par soma dois ao conteúdo do vetor,
caso o índice seja ímpar some três ao conteúdo do vetor A.
c)	Exiba: exiba no interior desta função o conteúdo dos dois vetores.
*/

    void armazena(int vet[10]) {
       for(int i = 0; i < 10; i++)
       {
            printf("Digite um número qualquer");
            scanf("%d", &vet[i]);
       } 
    }

    int Vetor_B(int vetB[10], int vetA[10])
    {
        forzao(10)
        {
            if(i %2 != 0)
            {
                vetB[i] = vetA[i] + 3; 
            }

            else
            {
                vetB[i] = vetA[i] + 2;   
            }
        }
    }

    void Exiba(int vet[10])
    {
        printArray_i(vet, 10, "", "%d ");
    }

    int main ()
    {
        int vetorA[10];
        armazena(vetorA);

        printArray_i(vetorA, 10, "print", "%d ");    

        int vetorB[10];
        Vetor_B(vetorB, vetorA);

        Exiba(vetorB);
    } 
    #endif //ex1

    #ifdef ex2
    /*2.Crie o programa dividido em funções:
a)	Função Armazena: é utilizada para guardar doze números quaisquer no vetor A.
b)	Função Quant_Positivos: calcule a quantidade de números positivos contidos no vetor A.
c)	Exiba: mostre nesta função em que posições aparecem os números maiores que 121 que estão armazenados no vetor A.
d)	Negativos: calcule e exiba no interior desta função a média dos números negativos. 
*/

int vetorA[12];

void Armazena()
{
    forzao(12)
    {
        printf("Insira um número qualquer: ");
        scanf("%d", &vetorA[i]);
    }
}

void Quant_Positivos()
{
    int cont[12] = {0};

    forzao(12)
    {
       if(vetorA[i] > 0)
       {
        cont[i] = cont[i - 1] + 1;
       }
       else
       {
        cont[i] = 0;    
        printf("Valor negativo\n");
       }
    printf("Contador de números positivos: %d \n", cont[i]);
    }
}
void Exiba ()
    {
        int cont121[12] = {0};

        forzao(12)
        {
            if(vetorA[i] > 121)
            {
                cont121[i] = i + 1;
                printf("Posições em que houveram números maiores que 121: %d \n", cont121[i]);
            }
        }
    }

    void Negativos()
    {
        int media[12];

        forzao(12)
        {
        if(vetorA[i] < 0)
        {
            media[i] = vetorA[i];
        }
        }   

       int mediaNeg = 0;

        forzao(12)
        {
        mediaNeg += media[i];
        }

        printArray_i(media, 12, "", "%d ");

        mediaNeg = mediaNeg / 12;

        printf("Média dos negativos presentes: %d\n", mediaNeg);
    }
    

 int main ()   
{
    Armazena();

    Quant_Positivos();

    Exiba();

    Negativos();
}
#endif //ex2