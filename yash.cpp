#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"Matrix will be of Order\n";
	int n;
	cin>>n;
	int a[n][n];
	cout<<"The matrix will be\n";
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<i; j++)
		{
			swap(a[i][j],a[j][i]);
		}
	}
	cout<<"The transpose of the matrix will be\n";
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<a[i][j] << " ";
		
			
		}
		cout<<"\n";
	}
	cout<<"The reverse of the matrix will be\n";
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			while(i<j)
			{
				swap(a[i][j],a[j][i]);
				i++;
				j--;
			}
		
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<a[i][j] << " ";
			
		}
		cout<<"\n";
	}
	cout<<"The output of the spiral matrix will be\n";
	for(int j=0; j<n; j++)
	{
		cout<<a[0][j]<<" ";
		
	}
	return 0;
	
}