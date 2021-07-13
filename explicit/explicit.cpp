#include<iostream>
#include<string>
using namespace std;

class P
{
	public:
		P(int a,int b)
		{
			cout<<"P (int a ,int b)"<<endl;
		}
	//	P(initializer_list<int>)
	//	{
	//		cout<<"initializer_list"<<endl;
	//	}
		P(double a,double b,double c)
		{
			cout<<"explicit"<<endl;
		}
};

class H
{
	public:
	H(int a){cout<<"hello"<<endl;}	

};
int main(){
	P p1 {77,2};
	P p2 (77,5);
	P p3 {11,22,33};
//	P p4 {11,22,"33"};
	P p5 = {11,22,33};
//	H h1{"11"};
	return 0;
}
