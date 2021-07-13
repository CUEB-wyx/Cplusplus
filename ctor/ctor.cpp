#include<iostream>
#include<string>

using namespace std;

int main()
{
	string* pstr = new string("hello");
	cout<<*pstr<<endl;
	//pstr->string("ctor");	
	pstr->~string();
	cout<<*pstr<<endl;
	return 0;

}

