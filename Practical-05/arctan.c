#include<stdio.h>
#include<math.h>

double arctanh1 (const double x, const double delta);
double arctanh2 (const double x);


int main(){

    double delta, x;
    //User input for value of delta 
    printf ("Enter the precision for Maclaurin series\n");
    scanf ("%lf", &delta) ;
    
    int length=1000;
    double tan1[length]; //Store the resuls of arctanh1 for each x 
    double tan2[length]; //Store the resuls of arctanh2 for each x

    int j=0;//array index 
    x=-0.9; 
    while (x<=0.9 && j<length){
    tan1 [j]= arctanh1 (x, delta); 
    tan2 [j]= arctanh2 (x);
    printf ("The difference at ×=%lf between them is %.10lf\n", x, fabs (tan1[j]-tan2[j])); 
    j++ ; 
    x=x+0.1;
    }

    return 0;
}

double arctanh1 (const double x, const double delta) {
    double arcTan =0; // approximated result 
    double elem, val;
    int n=0; //sum parameter

//Executes the loop contents once and then checks the condition for re-execution of loop
do {
val=2*n+1;
elem=-pow(x, val) /val; 
arcTan +=elem;
n++;
} 
//fabs(double) takes the absolute value 
while(fabs (elem) >= delta);
return arcTan;

}

double arctanh2 (const double x) { 
    return((log(1+x)-log(1-x))/2);
}