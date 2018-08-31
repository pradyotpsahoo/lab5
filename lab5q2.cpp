#include<iostream>
using namespace std;
int main()
{
//declare variables
float n1,n2,n3;
//enter three numbers
cout<<"enter three numbers";
cin>>n1>>n2>>n3;
//comparision
if(n1>n2 && n1>n3)
     {
	cout<< "the largest number" << n1;
     }
else if(n2>n1 && n2>n3)
     {
	cout<< "the largest number" << n2;

     }

else
     {
        cout<< "the largest number"<<n3;
     }	
return 0;
}
