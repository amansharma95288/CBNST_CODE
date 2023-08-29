#include<stdio.h>
#include<math.h>
#define f(x) x*x-2*x-1
int main(){
    float x0,x1,x2;
    printf("Enter the value of X0 and X1");
    scanf("%f %f %f",&x0,&x1,&x2);
    while(x1-x0>0.001){
        x2=(x0+x1)/2;
        printf("%f\n",x2);
        if(f(x2)<0){
            x0=x2;
        }
        else{
            x1=x2;
        }
    }
    return 0;
}