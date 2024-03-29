#include <stdio.h>
#include <string.h>
#include <time.h>
#define N 10
/*Ojetivo del programa: Metodo de Ordenacion InsertionSort(Baraja)*/

void Rellena (int Arr[N]);
void InsertionSort(int Arr[N]);
void Imprime(int Arr[N]);

int main(){
    int Arr[N];

    srand(time(0));
    Rellena(Arr);
    InsertionSort(Arr);
    Imprime(Arr);

    printf("\n\nHecho por Emanuel Rico Martinez\n");

    return 0;
}

void Rellena (int Arr[N]){  //Rellena el arreglo con numeros aleatorios
    int i;

    for(i=0;i<N;i++){
        Arr[i]=rand()%31;
    }

    printf("Arreglo original: \n");
    for(i=0;i<N;i++){
        printf("%d ",Arr[i]);
    }
}

void swap(int *a, int *b){
    int aux=0;

    aux=*a;
    *a=*b;
    *b=aux;
}

void InsertionSort(int Arr[N]){
    int i,j,aux;

    for(i=1;i<N;i++){
        for(j=i;j>0&&Arr[j]<Arr[j-1];j--){
            swap(&Arr[j],&Arr[j-1]);
        }
    }
}

void Imprime(int Arr[N]){
    int i;

    printf("\nArreglo ordenado: \n");
    for(i=0;i<N;i++){
    printf("%d ",Arr[i]);
    }

}
