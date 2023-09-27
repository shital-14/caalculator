#include<iostream>
using namespace std;
int main()
{
    char x;
    while (true) 
	{
	float num1,num2;
	cout<<"enter no one"<<endl;
	cin>>num1;
	cout<<"enter no second"<<endl;
	cin>>num2;
	cout<<"enter a for addition"<<endl;
	cout<<"enter b for substraction"<<endl;
	cout<<"enter c for multiplicatin"<<endl;
	cout<<"enter d for division"<<endl;
	cin>>x;
	if(x=='a')
	cout<<"the sum is="<<num1+num2<<endl;
	else if(x=='b')
    cout<<"the sub is="<<num1-num2<<endl;
	else if(x=='c')	
	cout<<"the mul is="<<num1*num2<<endl;
	else if(x=='d')
	cout<<"the div is="<<num1/num2<<endl;
	else
	cout<<"invalid operation"<<endl;
}
}
