#include<iostream>
#include<algorithm>
using namespace std;
void bubbleSort(int array[],int n)
{
 for(int i=0;i<n;i++)
 {
 	for(int j=0;j<n-i;j++)
 	{
 		if(array[j]>array[j+1])
 		{
 			swap(array[j],array[j+1]);
		 }
	 }
	 }	
}
int main()
{
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	bubbleSort(array,n);
	for(int j=0;j<n;j++)
	{
		cout<<array[j]<<" ";
	}
	cout<<endl;
}
