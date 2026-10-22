// Lab Sheet-06: Sort student names using Bubble Sort
// Note: Binary Search requires sorted input in ascending order where applicable.
#include <iostream>
#include <string>
using namespace std;
int main(){int n;string names[200];cin>>n;if(n<=0||n>200)return 0;for(int i=0;i<n;i++)cin>>names[i];for(int p=0;p<n-1;p++)for(int i=0;i<n-p-1;i++)if(names[i]>names[i+1]){string t=names[i];names[i]=names[i+1];names[i+1]=t;}for(int i=0;i<n;i++)cout<<names[i]<<'\n';}
