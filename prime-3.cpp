//prime number program (approach-3)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n ;
	cout<< "Enter a number :"<<endl;
	cin>>n;
	for(int i=2;i<sqrt(n);i++)
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
