// Lab Sheet-06: Input and display a 2D matrix
// Note: Binary Search requires sorted input in ascending order where applicable.
#include <iostream>
using namespace std;
int main(){int r,c,a[100][100];cin>>r>>c;if(r<=0||c<=0||r>100||c>100)return 0;for(int i=0;i<r;i++)for(int j=0;j<c;j++)cin>>a[i][j];for(int i=0;i<r;i++){for(int j=0;j<c;j++)cout<<a[i][j]<<" ";cout<<'\n';}}
