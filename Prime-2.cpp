//prime number program (approach-2)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n ;
	cout<< "Enter a number :"<<endl;
	cin>>n;
	for(int i=2;i<n/2+1;i++)
	{
	     if(n%i==0)
	     {
	     	cout<<"IT IS NOT A PRIME NUMBER"<<endl;
	     	break;
		 }
		 else
		 {
		 	cout<<"PRIME NUMBER";
		 	break;
		 }
	}
}
