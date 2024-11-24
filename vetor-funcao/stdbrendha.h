#include <stdio.h>
#ifndef stdbrendha_h
#define stdbrendha_h

void pick(void *var, char *fmt, char *txt)
{
    puts(txt);
    scanf(fmt, var);
}

#define forzao(t) for (int i = 0; i < t; i++)

#define alimentArray(vet, t, txt, fmt) \
    {                                  \
        for (int i = 0; i < t; i++)    \
        {                              \
            printf(txt);               \
            scanf(fmt, &vet[i]);       \
        }                              \
    }

int *teste(int *vet, int t)
{
    for (int i = 0; i < t; i++)
    {
        vet[i] = i + 1;
    }
    return vet;
}

#define printArray_i(vet, t, txt, format) \
    {                                     \
        puts(txt);                        \
        for (int i = 0; i < t; i++)       \
        {                                 \
            if (vet[i] != 0)              \
            {                             \
                printf(format, vet[i]);   \
            }                             \
        }                                 \
        puts("");                         \
    }
#endif // stdbrendha_h
