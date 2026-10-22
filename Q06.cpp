// Lab Sheet-06: Search an element without using functions
// Note: Binary Search requires sorted input in ascending order where applicable.
#include <iostream>
using namespace std;
int main(){int n,a[1000],x,pos=-1;cin>>n;if(n<=0||n>1000)return 0;for(int i=0;i<n;i++)cin>>a[i];cin>>x;for(int i=0;i<n;i++)if(a[i]==x){pos=i;break;}if(pos<0)cout<<"Not found\n";else cout<<"Found at position "<<pos+1<<'\n';}
