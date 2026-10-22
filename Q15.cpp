// Lab Sheet-06: Binary Search
// Note: Binary Search requires sorted input in ascending order where applicable.
#include <iostream>
using namespace std;
int main(){int n,a[1000],x;cin>>n;if(n<=0||n>1000)return 0;for(int i=0;i<n;i++)cin>>a[i];cin>>x;int l=0,r=n-1;while(l<=r){int m=l+(r-l)/2;if(a[m]==x){cout<<"Found at position "<<m+1<<'\n';return 0;}if(a[m]<x)l=m+1;else r=m-1;}cout<<"Not found\n";}
