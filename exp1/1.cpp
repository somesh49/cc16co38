#include<iostream>
using namespace std;
int main(){
	string s;
	int n;
	cout<<"Enter string"<<endl;
	cin>>s;
	n=s.length();
	for(int i=0;i<=n-1;i++)
	{
		if (isdigit(s[i]) == true)
		cout<<s[i]<<" is Integer"<<endl;
		else
		cout<<s[i]<<" is Character"<<endl;
	
	}
}
