// program to implement Newton Forward formula for interpolation...
#include<stdio.h>
int main(){
    int n;
    float x,u;
    printf("Enter the value of n");
    scanf("%d",&n);
    int arr[50][50];
    printf("Enter the Year values:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i][0]);
    }
    printf("Enter the Population\n");
    for(int j=0;j<n;j++){
        scanf("%d",&arr[j][1]);
    }
    for(int j=2;j<=n;j++){
        for(int i=0;i<n-j+1;i++){
            arr[i][j]=arr[i+1][j-1]-arr[i][j-1];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter the value of x in which year you want to predict population\n");
    scanf("%f",&x);
    u=(x-arr[0][0])/10;
    printf("%f",u);
    float y=arr[0][1];
    float u1=u;
    int fact =1;
    for(int i=2;i<=n;i++){
        y=y+(u1*arr[0][i])/fact;
        fact=fact*i;
        u1=u1*(u-(i-1));
    }
    printf("\nThe population in 1895:%f",y);
    return 0;
}