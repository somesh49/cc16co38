#include<iostream>
using namespace std;
int main(){
	char a[10];
	int b,n;
	cout<<"Enter a size of string"<<endl;
	cin>>n;
	cout<<"Enter string"<<endl;
	//comment
	for(int i=0;i<=n-1;i++)
	{
	cin>>a[i];
    }
	for(int i=0;i<=n-1;i++)
	{
		b=a[i];
		if(b==a[i])
		cout<<a[i]<<" is Integer"<<endl;
		else
		cout<<a[i]<<" is Character"<<endl;
	
	}
}
