#include <stdio.h>
#include <stdlib.h>

//function to take an integer as an argument and return a pointer to an allocated memory block of that many integers
int *allocatearray(int n)
{
  int *p;
  p =(int *) malloc(n*sizeof(int));
  if(p==NULL) 
  {
	printf("Error in allocating memory\n");
  }
  return p;
}

// function that takes a pointer to an array of integers and fills every cell of the array with a one.
void fillwithones(int *array, int n){
  int i;
  for(i=0; i<n; i++){
    array[i]=1;
  }
}

//pointer to an array of integers to prints its elements
void printarray(int *array, int n){
  int i;
  for(i=0; i<n; i++){
    printf("a[%d]=%d\n", i , array[i]);
  }
}

//To free the allocated memory
void freearray(int *array){
  free(array);
}

int main(){
  int length, *a;
  printf("Plase enter the size of array:\n");
  scanf("%d", &length);
  a = allocatearray(length);
  fillwithones(a, length);  
  printarray(a, length);
  freearray(a);
  a = NULL;

  return 0;
}