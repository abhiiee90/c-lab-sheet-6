// Lab Sheet-06: Sum of all elements in a 1D array
// Note: Binary Search requires sorted input in ascending order where applicable.
#include <iostream>
using namespace std;
int main(){ int n; long long sum=0; cout<<"Enter array size (max 1000): ";cin>>n;if(n<=0||n>1000)return 0;int a[1000];for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}cout<<"Sum = "<<sum<<'\n';}
