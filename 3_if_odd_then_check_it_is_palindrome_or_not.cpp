#include<iostream>
using namespace std;

int main()
{
	int n,temp,rem,rev=0;

for(int i=0;i<5;i++)
	{

	n=arr[i];
	rev=0;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(arr[i]==rev)
	{
		cout<<"no is palindrome";
	}
	else
	{
		cout<<"no is not palindrome";
	}
  }
}
