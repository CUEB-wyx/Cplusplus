#include<iostream>

using namespace std;

class A
{
	public :
		int a,b;
};

class B 
{
	public :
		int a,b;
		static int c;
};
int main()
{
	int m[10];
	int* p;
	int* t= new int;
	cout<<t<<endl;
	*t = 5;
	p = t;
	cout<<p<<t<<endl;
	cout<<*p<<*t<<endl;
	cout <<sizeof(A)<<endl;
	cout <<sizeof(B)<<endl;
	char c = 65;
	cout<<"hello"<<c<<endl;
	cout<<'\a'<<endl;
	cout<<&m<<"split"<<m<<endl;
	int* h;
	//cout<<*h<<endl;
	cout<<h<<endl;
	int* n;
	n = (int*)malloc(sizeof(int));
	*n =55555; 
	cout<<"locate:"<<n<<endl;
	n -= 1;
	cout<<"locate:"<<n<<endl;
	cout<<*n<<"ok"<<endl;
	n -= 1;
	cout<<"locate:"<<n<<endl;
	cout<<*n<<"ok"<<endl;
	return 0;
	
}

