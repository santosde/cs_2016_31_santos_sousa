#include <stdio.h>

#define NLines 10
#define NColumns 5

void ImprimeVet(int Vet[NColumns])
{
    int i;
    for(i = 0; i < NColumns; i++) {
    printf("%d ", Vet[i]);
    }
}
void InitializesVet(int Vet[NColumns], int n)
{
    int i;
    for(i = 0; i < NColumns; i++) {
    Vet[i] = i * n;
    }
}

int main()
{
    int Matriz[NLines][NColumns];

    int i;
    for(i = 0; i < NLines; i++) {
        InitializesVet(Matriz[i], i);
        printf("\n");
    }

    for(i = 0; i < NLines; i++) {
        ImprimeVet(Matriz[i]);
        printf("\n");
    }
    return 0;
}
