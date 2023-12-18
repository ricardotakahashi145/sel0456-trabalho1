#include <stdio.h>
#include <stdlib.h>

double sum_array(double* x, int n);
double highest_array(double* x, int n);
double minimum_array(double* x, int n);

int main(void){
    double* array;
    int size;
    char test;
    int test_fun;

    printf("Digite o tamanho da sua array:\n");
    scanf("%d", &size);

    printf("Agora, digite os números que compõem a array:\n");
    array = (double*) malloc(sizeof(double)*size);

    for(int i=0; i<size; i++){
        scanf("%lf", &array[i]);
    }

    printf("Teste: Você confirma que a array digitada é:\n");
    for(int i=0; i<size; i++){
        printf("%lf ", array[i]);
    }

    printf("\nDigite: (y/n?)\n");
    scanf(" %c", &test);

    if(test == 'y'){
        printf("Digite a função que deseja executar:\n");
        printf("1 - Somar todos elementos\n");
        printf("2 - Achar o maior elemento da matriz\n");
        printf("3 - Achar o menor elemento da matriz\n");
        scanf("%d", &test_fun);
        if(test_fun==1){
            sum_array(array, size);
        }
        if(test_fun==2){
            highest_array(array, size);
        }
        if(test_fun==3){
            minimum_array(array, size);
        }
        else if(test_fun!=1 && test_fun!=2&&test_fun!=3){
            printf("Nenhuma função encontrada. Erro.");
            return 1;
        }
        
    }

    return 0;


}