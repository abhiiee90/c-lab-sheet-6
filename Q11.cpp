// Lab Sheet-06: Bubble Sort ascending
// Note: Binary Search requires sorted input in ascending order where applicable.
#include <iostream>
using namespace std;
int main(){int n,a[1000];cin>>n;if(n<=0||n>1000)return 0;for(int i=0;i<n;i++)cin>>a[i];for(int p=0;p<n-1;p++)for(int i=0;i<n-p-1;i++)if(a[i]>a[i+1]){int t=a[i];a[i]=a[i+1];a[i+1]=t;}for(int i=0;i<n;i++)cout<<a[i]<<" ";}
