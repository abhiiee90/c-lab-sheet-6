// Lab Sheet-06: Find largest element in sorted array using Binary Search
// Note: Binary Search requires sorted input in ascending order where applicable.
#include <iostream>
using namespace std;
int main(){int n,a[1000];cin>>n;if(n<=0||n>1000)return 0;for(int i=0;i<n;i++)cin>>a[i]; // Input must be sorted in ascending order.
int l=0,r=n-1;while(l<r){int m=l+(r-l)/2;if(a[m]<a[r])l=m+1;else r=m;}cout<<"Largest element = "<<a[n-1]<<'\n';}
