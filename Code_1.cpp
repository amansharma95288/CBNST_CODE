
// write a program to calculate absolute value ,abstract value,ralative value 
#include<iostream>
using namespace std;
int main(){
  float absvalue,absError,trueValue,relativeError,percentError;
  cout<<"Enter the True value:";
  cin>>trueValue;
  cout<<"Enter the Absolute value:";
  cin>>absvalue;
  cout<<"So the Absolute error is:"<<absError;
  relativeError=absError/trueValue;
  cout<<"Relative Error is :"<<relativeError;
  percentError=relativeError*100;
  cout<<"The percentage Error is :"<<percentError;
  return 0;
}