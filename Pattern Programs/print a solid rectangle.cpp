#include<iostream>
using namespace std;
int main(){
	int rows,columns;
	cout<<"Enter the no. of rows:\n";
	cin>>rows;
	cout<<"Enter no. of columns:\n";
	cin>>columns;
	
	for(int i=1;i<=rows;i++)
	{
		for(j=1;j<=columns;){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
