#include<bits/stdc++.h>
using namespace std;

int main()
{
	//To find the elements less than the target element
	int target, n;
	cout<<"Enter the size of the array: "<<endl;
	cin>>n;
	cout<<"Enter the targeted element: ---->>"<<endl;
	cin>>target;
	int arr[n];
	
	//Enter the elements of an array
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"The array is going to be: --->>"<<endl;
	
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
	
	//Lets find the all the elements less than the targeted element
	
	for(int i=0; i<n; i++){
		if(arr[i]<=target){
			cout<<arr[i]<<endl;
		}
	}
}
