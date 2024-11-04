#include "stdbrendha.h"
#include <locale.h>

#define ex13

#ifdef ex13

//Receba o peso via teclado e o n�mero de identifica��o gerado pelo programador contendo no
//m�ximo de 15 pessoas. A quantidade de indiv�duos ser� definida pelo usu�rio. Armazene esses
//dados em dois vetores, o primeiro contendo os pesos e o segundo contendo os n�meros de
//identifica��o. Calcule e mostre:
//a) Quantas pessoas apresentaram peso superior ao menor peso. Armazene os n�meros de
//identifica��o das pessoas que satisfazem essa condi��o. Mostre o conte�do desse vetor.
//b) Armazene num outro vetor os pesos superiores a 55 quilos e menores ou igual a 80 quilos
//das pessoas. Mostre o conte�do desse vetor.
int main ()
{
    int users;
    setlocale(LC_ALL, "");

    do
    {
        pick(&users, "%d", "Digite a quantidade de usu�rios: ");
    }
    while(users < 0 || users > 15);

    int pesos[users], id[users];

    alimentArray(pesos, users, "Digite o peso do usu�rio em quilos: ", "%d");
    printArray_i(pesos, users, "Pesos: ", "%d, ");

    teste(id, users);
    printArray_i(id, users, "ID: ", "%d ");

    int menorP = pesos[0];

    forzao(users)
    {
        if(pesos[i] < menorP)
        {
            menorP = pesos[i];
        }
    }
    printf("Menor peso atual %d\n", menorP);

    int Cont_menorP = 0;
    int Id_maiorP[users];
    forzao(users)
    {
     if(pesos[i] > menorP)
     {
        Id_maiorP[i] = id[i];
        Cont_menorP++;
     }
    }
    printf("Quantidade de pessoas que apresentaram peso maior que o menor peso: %d\n", Cont_menorP);
    printArray_i(Id_maiorP, users, "IDs de usu�rios que apresentaram os maiores pesos", "%d, ");


    int MaiorPeso[users];
    forzao(users)
    {
        if(pesos[i] > 55 && pesos[i] < 80)
        {
            MaiorPeso[i] = pesos[i];
        }

    }
    printArray_i(MaiorPeso, users, "Pesos entre 55 e 80", "%d ");
}
#endif // ex13

#ifdef ex14
/*Receba a nota de dez alunos e armazene essas notas em um vetor. Calcule e mostre:
a) A m�dia da classe;
b) A quantidade de alunos aprovados, isto �, com nota >=7;
c) A quantidade de alunos reprovados, isto �, com nota <7.
*/

int main ()
{
    float notas[10];

    //alimentArray(notas, 10, "Adicione as notas dos alunos: ", "%d ");
    teste(notas, 10);
    printArray_i(notas, 10, "", "%g ");

    float media;

    forzao(10)
    {
        media = notas[i] + notas[i + 1];

    }

    media = media / 10;
    printf("%g", media);







}



#endif // ex14

