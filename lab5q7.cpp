#include<iostream>
using namespace std;
int main()
{
//declare variables
char ch;
//enter the alphabet
cout<< "enter the charecter";
cin>>ch;
//conditions
if((ch>= 'a'&& ch<= 'z') || (ch>= 'A'&& ch<= 'Z')) 
	{
         cout<<"the charecter is an alphabet";
        }

else
	{
 	 cout<< "the charecter is not an alphabet";
	}
return 0;
}



