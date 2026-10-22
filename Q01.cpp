// Lab Sheet-06: Input and display elements of a 1D array
// Note: Binary Search requires sorted input in ascending order where applicable.
#include <iostream>
using namespace std;
int main(){ int n; cout<<"Enter array size: "; cin>>n; if(n<=0)return 0; int a[1000]; if(n>1000)return 0; cout<<"Enter elements: "; for(int i=0;i<n;i++)cin>>a[i]; cout<<"Array: "; for(int i=0;i<n;i++)cout<<a[i]<<" "; cout<<'\n'; }
