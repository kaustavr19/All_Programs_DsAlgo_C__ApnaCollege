#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the three numbers:\n";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"Max is "<<a;
		}
		else
		{
			cout<<"Max is "<<c;
		}
	}
	else
	{
		if(b>c)
		{
			cout<<"Max is "<<b;
		}
		else
		{
			cout<<"Max is "<<c;
		}
	}
	return 0;
}
