//Find e using Taylor series expansion  

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int fact(int n);

int main(void){

    int i, order;
    double e, *a;

//Enter the order of Polynomial 
    printf("Enter the required polynomial order\n");
    if (scanf("%d", &order) !=1){
        printf("Error, no number entered");
        return 1;
    }

//Allocate space for a array
    a=malloc(order*sizeof(double));
    for (i=0; i<order; i++){
        a[i]=1.0/(double)fact(i+1);
        printf("Value of e for order %d is %1.14lf\n", order, a[i]);
    }

    e=1.0;
    for(i=0; i<order; i++){
        e=e+a[i];
    }

    free(a);

    printf("\ne is estimated as %1.14lf, with difference %1.14lf\n", e, e-exp(1.0));

    return 0;
}

int fact(int n){
    if(n<0){
        printf("Error: Invalid input, enter a positive value ");
        return(-1);
    }
    else if (n==0){
        return 1;
    }
    else{
        return(n*fact(n-1));
    }
}