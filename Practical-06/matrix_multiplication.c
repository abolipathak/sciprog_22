#include <stdio.h>

int main()
{
    int n=5,p=3,q=4,i,j,k;
    double a[n][p],b[p][q],c[n][q] ;
    
    //The number of rows in A matrix
    for(i=0;i<n;i++)                           
    {
        //The number of columns in A matrix
        for(j=0;j<p;j++)                       
        {
            //Every element in A is the sum of row and column number
            a[i][j] = i+j;                     
        }
    }
    //The number of rows in B matrix
    for(i=0;i<p;i++)                           
    {
        //The number of columns in B matrix
        for(j=0;j<q;j++)                       
        {
            //Every element in B is the difference between row and column number
            b[i][j] = i-j;                     
        }
    }
    
    printf("Matrix A : \n");
    //Printing A matrix
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%3.0f ",a[i][j]);          
        }
        
        printf("\n");
    }
    
    printf("Matrix B : \n");
    //Printing B matrix
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%3.0f ",b[i][j]);          
        }
        
        printf("\n");
    }
    
    for(i=0;i<n;i++)                                     //The number of rows in C matrix
    {
        for(j=0;j<q;j++)                               //The number of columns in C matrix
        {   
            c[i][j] = 0;                               //Initializing all values of C matrix to zero
            for(k=0;k<p;k++)                           //The number of columns in A and number of rows in B(Should be same for matrix multiplication)
            {
              c[i][j] += a[i][k] * b[k][j] ;  
            }
                
        }
        
    }
    
    printf("Matrix C = \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%3.0f ",c[i][j]);          //Printing every element of matrix C
        } 
        
        printf("\n");
    }
    
    
    
    
}