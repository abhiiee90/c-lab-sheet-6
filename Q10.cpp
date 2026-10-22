// Lab Sheet-06: Multiply two matrices
// Note: Binary Search requires sorted input in ascending order where applicable.
#include <iostream>
using namespace std;
int main(){int r1,c1,r2,c2,a[100][100],b[100][100],p[100][100]={};cin>>r1>>c1>>r2>>c2;if(r1<=0||c1<=0||r2<=0||c2<=0||r1>100||c1>100||r2>100||c2>100||c1!=r2){cout<<"Invalid dimensions\n";return 0;}for(int i=0;i<r1;i++)for(int j=0;j<c1;j++)cin>>a[i][j];for(int i=0;i<r2;i++)for(int j=0;j<c2;j++)cin>>b[i][j];for(int i=0;i<r1;i++)for(int j=0;j<c2;j++)for(int k=0;k<c1;k++)p[i][j]+=a[i][k]*b[k][j];for(int i=0;i<r1;i++){for(int j=0;j<c2;j++)cout<<p[i][j]<<" ";cout<<'\n';}}
