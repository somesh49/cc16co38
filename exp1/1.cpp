#include<iostream>
#include<string>
using namespace std;
int main(){
	string s,key,digit ;
	int n;
	cout<<"Enter string"<<endl;
	getline(cin,s);
	n=s.length();
	
	for(int i=0;i<n;i++)
	{
		key="";
		digit=""; 
		if(isdigit(s[i]))
		{
			while(isdigit(s[i]) || s[i]=='.')
			{digit+=s[i];
				i++;
			}
			cout<<digit<<" is number"<<endl;
			i--;
		}
		else if((s[i]=='+') || (s[i]=='-') || (s[i]=='*') || (s[i]=='>') || (s[i]=='<') || (s[i]=='=') || (s[i]=='%') || (s[i]=='/'))
	    cout<<s[i]<<" is a operator"<<endl;   
		else if((s[i]==';') || (s[i]=='.') || (s[i]==',') || (s[i]==' '))
	    cout<<s[i]<<" is a delimiter"<<endl;  
		else if((s[i]=='!') || (s[i]=='@') || (s[i]=='#') || (s[i]=='$') || (s[i]=='_'))
		cout<<s[i]<<" is a special character"<<endl; 
		else if(isalpha(s[i]))
		{
			while(isalpha(s[i]) || isdigit(s[i]))
			{key+=s[i];
				i++;
			}
		if((key=="int") || (key=="float") || (key=="for") || (key=="while") || (key=="if") || (key=="else") || (key=="include") || (key=="stdio.h") || (key=="printf") || (key=="scanf") || (key=="return"))
		cout<<key<<" is a keyword"<<endl;
		else if(key!="")
		cout<<key<<" is a variable"<<endl; 
		i--;
		}
	}
}
