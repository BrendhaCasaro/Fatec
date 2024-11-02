#include <stdio.h>

float pick_write_f(char* txt, float a)
{
    float geral;
    printf(txt, a);
    scanf("%f", &geral);

    return geral;
}

int pick_write_i(int a, char* format)
{
    int geral;
    if(format != NULL)
    {
        printf(format, a);
    }
        scanf("%f", &geral);

        return geral;
}

#define ex14
#ifdef ex11

//Leia dois números inteiros e mostre o maior deles.
    int main()
    {
        int a, b, maior;

        a = pick_write_f("Digite o primeiro numero\n");
        b = pick_write_f("Digite o segundo numero\n");

//if(a > b) {
//    printf("o maior numero e %d", a);
//} else {
//    printf("O maior numero e: %d", b);
//}
        maior = a > b ? a : b;
        printf("O maior numero e: %d", maior);
    }
#endif // ex11

#ifdef ex12
//Leia o número de identificação, as 3 notas obtidas por
//um aluno nas 3 verificações e a média dos exercícios que fazem parte da avaliação.
//Calcular a média de aproveitamento, usando a fórmula:
//MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME)/7
//9,0 >> A
//7,5 e < 9,0 >> B
//6,0 e < 7,5 >> C
//4,0 e < 6,0 >> D
//< 4,0 >> E
//O algoritmo deve escrever o número do aluno, suas notas, a média dos exercícios,
//a média de aproveitamento, o conceito correspondente e a
//mensagem: APROVADO se o conceito for A, B ou C e REPROVADO se o conceito for D ou E.

    int main()
    {
        float notas[3], media, mediaaproveitamento, num_ident;
        int i;
        char conceito;

        num_ident = pick_write_f("Digite o numero de identificacao do aluno\n");

        for(i = 0; i < 3; i ++)
        {
            do
            {
                notas[i] = pick_write_f("Digite a nota do aluno: \n");
                if (notas[i] < 0 || notas[i] > 10)
                    printf("Nota invalida, por favor digite um numero de 0 a 10\n\n");
            }
            while(notas[i] < 0 || notas[i] > 10);
        }
        media = (notas[0] + notas[1] + notas[2]) / 3;
        printf("Media: %.1f\n", media);

        mediaaproveitamento = (notas[0] + (notas[1] * 2) + (notas[2] * 3) + media) / 7;
        printf("Media aproveitamento: %.1f\n", mediaaproveitamento);

        if(mediaaproveitamento >= 9.0)
        {
            conceito = 'A';
        }
        else if(mediaaproveitamento >= 7.5 && mediaaproveitamento < 9)
        {
            conceito = 'B';
        }
        else if(mediaaproveitamento >= 6 && mediaaproveitamento < 7.5)
        {
            conceito = 'C';
        }
        else if(mediaaproveitamento >= 4 && mediaaproveitamento < 6)
        {
            conceito = 'D';
        }
        else if(mediaaproveitamento < 4)
        {
            conceito = 'E';
        }

        printf("A media dos exercicios do aluno %d e: %g; \nA media de aproveitamento do aluno e: %g; \n", num_ident, media, mediaaproveitamento);

        if(conceito == 'A' || conceito == 'B' || conceito == 'C')
        {

            printf("Ele esta: Aprovado;\nSe encaixa no conceito: %c", conceito);
        }
        else if(conceito == 'D' || conceito =='E')
        {
            printf("Ele esta: Reprovado;\nSe encaixa no conceito: %c", conceito);
        }
        return 0;
    }
#endif // ex12

#ifdef ex13
//Receba via teclado um número inteiro qualquer e exiba se ele é positivo ou negativo ou zero.
    int main ()
    {
        int n1 = pick_write_f("Digite o numero");
        int result;

        result = n1 < 0 ? puts("negativo") : puts("positivo");

        printf("%d", result);

//    (int)pick_write_f("Digite o numero") >> (sizeof(int) * 8 - 1) & 1 ? puts("negativo") : puts("positivo");
    }
#endif // ex13

#ifdef ex14
//Calcule a média aritmética das quatro notas de um aluno e mostre, além do valor da
//média, uma mensagem de "Aprovado", caso a média seja igual ou superior a 6, ou a
//mensagem "reprovado", caso contrário.
    int main()
    {
        float notas[4], somaNotas, media;
        int i;

        for(i = 0; i < 4; i++)
        {
            //printf("Digite a %g nota: ", i++);

            notas[i] = pick_write_f("Digite a %g nota: ", i+1);
            somaNotas = somaNotas + notas[i];
            media = somaNotas / 4;
        }

        printf("A media aritmetica deste aluno e %g", media);
    }
#endif // ex14



#ifdef ex15
    /*Leia dois valores a e b e os escreve com a mensagem: "São múltiplos" ou "Não são
    múltiplos".
    */

    int main ()
    {

        int a, b;

        a = pick_write_i("Digite o primeiro numero: \n", a, "");
        b = pick_write_i("Digite o segundo numero: \n", b, "");


        if(a % b == 0)
        {
            printf("Os numeros sao multiplos\n");
        }
        else
        {
            printf("Os numeros nao sao multiplos\n");
        }
    return 0;


    }

#endif // ex15
