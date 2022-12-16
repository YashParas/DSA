#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, a;
	int r=0;
	cin>>n;
	int dup = n;
	while(n>0)
	{
		a=n%10;
		r=(r*10)+a;
		n=n/10;
	}
	if(dup==r)
	{
		cout<<"Pallindrome";
	}
	else{
		cout<<"Not Pallindrome";
	}
	cout<<"The reversed Number is"<<" "<<r;
}
