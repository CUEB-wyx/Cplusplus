#include<iostream>

using namespace std;

class fa
{
	public :
	fa(){cout<<"父类构造函数"<<endl;}

};

class zi:fa
{
	public:
	zi():fa(){cout<<"子类构造函数"<<endl;}
};

int main()
{
	zi h;
	return 0;
}
