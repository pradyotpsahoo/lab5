#include<iostream>
using namespace std;
int main()
{
//declare variables
int n;
//enter the number
cout<< "enter the number";
cin>>n;
//conditions
if(n%5==0 && n%11==0)
	{
         cout<<"the number is divisible by both 5 and 11";
        }

else
	{
 	 cout<< "the number is not divisible by 5 and 11";
	}
return 0;
}
