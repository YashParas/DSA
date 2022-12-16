#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int sum=0;
	cin>>n;
	cout<<"The Number of elements in array"<<" "<<n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{
		a[i]=pow(a[i],3);
	}
	for(int i=0; i<n; i++)
	{
		sum= sum+a[i];
	}
	cout<<sum;
}
