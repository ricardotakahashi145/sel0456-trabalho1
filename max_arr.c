#include <stdio.h>

double highest_array(double* x, int n){
    double highest = x[0];
    for(int i=1; i<n; i++){
        if(x[i]>highest){
            highest = x[i];
        }
    }
    printf("O maior elemento é: %lf\n", highest);
    return highest;
}