#include <stdio.h>
#include <math.h>

//function to generate the radian values

float conv_deg_rad(float angle) { 
    // convert radians to degrees
    return((M_PI * angle) / 180.0);
}

float trap_area(int N, float tan_arr[N+1])
{
    // calculating the area using trapezoid rule

    int i;

    float area = tan_arr[0] + tan_arr[N];
    
    //loop over points where the loop counter does 0, 1, 2 · · · 12.
    for(i=1; i<N; i++){
        area += 2.0 * tan_arr[i];
    }
    
    //multiply by the prefactor
    area *= conv_deg_rad(60.0 - 0.0) / (2 * N);

    return area;
}

int main(){
    
    int i, N=12;
    float degree, radian;
    float tan_arr[N+1];

    // calculate tan(x) for x in range [0,60] every 5 degrees
    for (i=0; i<=N; i++){
        degree = i * 5.0;
        radian = conv_deg_rad(degree);
        tan_arr[i] = tan(radian);
    }

    // calculate the area 
    float area = trap_area(N, tan_arr);
    printf("%f\n", area);

    return 0;
}