// Lab Sheet-06: Count even and odd among 10 numbers
// Note: Binary Search requires sorted input in ascending order where applicable.
#include <iostream>
using namespace std;
int main(){int a[10],even=0,odd=0;cout<<"Enter 10 numbers: ";for(int i=0;i<10;i++){cin>>a[i];if(a[i]%2==0)even++;else odd++;}cout<<"Even = "<<even<<"\nOdd = "<<odd<<'\n';}
