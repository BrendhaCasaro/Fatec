#include "stdio.h"
#include <stdlib.h>
#include <string.h>

struct User {
    int idade;
    char* nome;
    int t_penis;
};

void printUser(struct User* user) {
    printf("Nome: %s\nIdade: %d\nPenis: %d\n", (*user).nome, user->idade, user->t_penis);
}

int* array_de_zeros(unsigned int t) {
    int* zeros = (int*)calloc(t, sizeof(int));
    return zeros;
}

int main() {

    struct User brendha;
    brendha.nome = "Brendha";
    brendha.idade = 50;
    brendha.t_penis = 4;

    int* zeros = array_de_zeros(5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", zeros[i]);
    }
    puts("");
    free(zeros);
}