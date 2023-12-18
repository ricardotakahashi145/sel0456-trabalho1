#include <stdio.h>

double sum_array(double* x, int n){
    double sum = 0;
    for(int i=0; i<n; i++){
        sum += x[i];
    }
    printf("A soma dos elementos é: %lf\n", sum);
    return sum;
}