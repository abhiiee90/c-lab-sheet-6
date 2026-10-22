// Lab Sheet-06: Maximum and minimum in a 1D array
// Note: Binary Search requires sorted input in ascending order where applicable.
#include <iostream>
using namespace std;
int main(){int n;if(!(cin>>n)||n<=0||n>1000)return 0;int a[1000];for(int i=0;i<n;i++)cin>>a[i];int mx=a[0],mn=a[0];for(int i=1;i<n;i++){if(a[i]>mx)mx=a[i];if(a[i]<mn)mn=a[i];}cout<<"Maximum = "<<mx<<"\nMinimum = "<<mn<<'\n';}
