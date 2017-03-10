#include<iostream>
using namespace std;
int binarySearch(int array[],int l,int r,int x)
{
	int m=(l+r)/2;
	if(array[m]==x)
	{
		return m;
	}
	else if(array[m]<x)
	{
		l=m+1;
	}
	else
	{
	r=m-1;	
	}
	return -1;
}
int main()
{
	int x;
	cin>>x;
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
	cin>>array[i];	
	}
	if(binarySearch(array,0,n-1,x)==-1)
	{
		cout<<"Element not found"<<endl;
	}
	else
	{
		cout<<"Element found at index: "<<binarySearch(array,0,n-1,x)<<endl;
	}
}
