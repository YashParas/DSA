#include<bits/stdc++.h>
using namespace std;

int main()
{
	int target,n;
	cout<<"Enter the Number to be Found: "<<endl;
	cin>>target;
	cout<<"Enter the Size of Array: "<<endl;
	//Here n defines the size of the array
	cin>>n;
	int arr[n];
	
	//Enter the Elements of the array
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<"The array is: --->"<<endl;
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<endl;
	}
	
	
	// To find the element in the array
	for(int i=0; i<n; i++)
	{
		if(arr[i]==target)
		{
			cout<<"The position of the element: "<<i<<endl;
		}
	}
}
