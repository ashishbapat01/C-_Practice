#include<iostream>
using namespace std;
int main()
{
   int i_num=5;

   cout<<"Enter Any Number:- ";
  // cin>>i_num;

   for(int i=0;i<=i_num;i++)
   {
       for(int j=0;j<=(i_num-i);j++)
       {
           cout<<" ";
       }
       for(int k=1;k<(2*i);k++)
       {
           cout<<"*";

       }
       cout<<endl;
   }

	for(int i=0;i<=i_num;i++)
	{
		for(int j=0;j<=i_num-i;j++)
		{
			if(i<j)
			{
				cout<<"*";
			}
			else
            {
                cout<<" ";
            }

		}
		cout<<endl;
	}

	return 0;
}
