// count the no of digit after the (.) ..
#include<iostream>
using namespace std;
int main(){
    float trueVal;
    int count=0;
    cout<<"Enter the true value:";
    cin>>trueVal;
    while(trueVal-floor(trueVal)!=0){
        trueVal=trueVal*10;
        count++;
    }
    cout<<"The value of count is :";
    cout<<count;
    return 0;
}