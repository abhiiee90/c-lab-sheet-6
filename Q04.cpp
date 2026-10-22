// Lab Sheet-06: Reverse a 1D array
// Note: Binary Search requires sorted input in ascending order where applicable.
#include <iostream>
using namespace std;
int main(){int n;if(!(cin>>n)||n<=0||n>1000)return 0;int a[1000];for(int i=0;i<n;i++)cin>>a[i];for(int i=0;i<n/2;i++){int t=a[i];a[i]=a[n-1-i];a[n-1-i]=t;}for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<'\n';}
