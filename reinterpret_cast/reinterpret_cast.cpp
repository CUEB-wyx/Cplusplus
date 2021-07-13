#include<iostream>
#include<string>

using namespace std;

class a
{
	public:
	a():i(2){};
		int i;
	
};
int main()
{
	a *p;
	p = reinterpret_cast<a*>(new char[100]);
	cout<<p<<endl;
	p = p+1;
	cout<<p->i<<endl;
	return 0;
}
