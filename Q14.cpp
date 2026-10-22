// Lab Sheet-06: Linear Search
// Note: Binary Search requires sorted input in ascending order where applicable.
#include <iostream>
using namespace std;
int main(){int n,a[1000],x;cin>>n;if(n<=0||n>1000)return 0;for(int i=0;i<n;i++)cin>>a[i];cin>>x;for(int i=0;i<n;i++)if(a[i]==x){cout<<"Found at position "<<i+1<<'\n';return 0;}cout<<"Not found\n";}
