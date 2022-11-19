#include <stdio.h>
#include <math.h>

int main(void){

  //initializing the variables
  int N=12, i;
  float a=0.0;
  float b, total_area;

  //setting b=pi/3 rads
  b=(M_PI*60.0)/180.0;
  printf("b=%f rads\n", b);

  //adding tan a and tan b
  total_area=tan(a)+tan(b);
  
  //loop to calculate the area
  for(i=5; i<60; i+=5){
    total_area+=2*tan((M_PI*i/180.0));
  }
  
  //multiplying by the prefactor
  total_area*=(b-a)/(2*N);
  

  printf("Approx=%f, Exact=%f\n", total_area, log(2.0));


  return 0;
}