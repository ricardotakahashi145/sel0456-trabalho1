double sum_array(double* x, int n){
    double sum = 0;
    for(int i=0; i<n; i++){
        sum += x[i];
    }
    printf("A soma dos elementos é: %lf\n", sum);
    return sum;
}

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