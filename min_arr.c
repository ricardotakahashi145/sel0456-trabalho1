#include <stdio.h>

double minimum_array(double* x, int n){
    double minimum = x[0];
    for(int i=0; i<n; i++){
        if(x[i]<minimum){
            minimum = x[i];
        }
    }
    printf("O menor elemento é: %lf\n", minimum);
    return minimum; 
}