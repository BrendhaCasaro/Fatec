#include <stdio.h>
#include <locale.h>
#define ex14
#define forzao(t) for(int i = 0; i < t; i++)

float pick_write_f(char* txt)
{
    float geral;
    printf(txt);
    scanf("%f", &geral);

    return geral;
}
int pick_write_i(char* txt)
{
    int geral;
    printf(txt);
    scanf("%d", &geral);

    return geral;
}

#define alimentArray(tipo, vet, t, txt, format)\
{\
    for(int i = 0; i < t; i++)\
    {\
        printf(txt);\
        scanf(format, &vet[i]);\
    }\
}\

void teste(int *vet, int t)
{
    for(int i = 0; i < t; i++)
    {
        vet[i] = i;
    }
    return vet;
}

#define printArray_i(vet, t, txt, format)\
{\
    puts(txt);\
    for(int i = 0; i < t; i++)\
    {\
        printf(format, vet[i]);\
    }\
    puts("");\
}

//void printArray_f(float *vet, int t, char *txt)
//{
//    puts(txt);
//    for(int i = 0; i < t; i++)
//    {
//        printf("%g ", vet[i]);
//    }
//    puts("");
//}

//void TipoVar(void *tipo){
//    return tipo;
//}

#ifdef teste
int main ()
{
    int vetT[2];
    alimentArray(vetT, 2, "teste", "%d");

    for(int i = 0; i < 2; i++)
    {
        printf("%d\n", vetT[i]);
    }

//    teste = TipoVar(int);
//    teste = 10;
//    printf("%d", teste);
}
#endif //teste


#ifdef ex14
//Efetue a leitura de dez elementos para o vetor A. Construa o vetor B, observando a seguinte lei
//de formação: se o valor do índice do vetor for par, o valor do elemento deve ser multiplicado pelo
//valor 5; sendo o índice ímpar, deverá ser somado ao valor existente o valor 5. Mostre o conteúdo
//dos dois vetores

int main ()
{
    int vetA[10], vetB[10];

    //teste(vetA, 10);
    alimentArray(int, vetA, , "teste", "%d");

    forzao(10)
    {
        vetB[i] = i %2 == 0 ? vetA[i] * 5 : vetA[i] + 5;
    }
    printArray_i(vetA, 10, "", "%d ");
    printArray_i(vetB, 10, "", "%d ");
}
#endif // ex14
