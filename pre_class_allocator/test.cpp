#include<iostream>
 using namespace std;

int main()
{
	void* b;
	int* c;
	c = b;	
	int* a = new int;
	cout<<*a<<endl;
	cout<<sizeof(unsigned char*);
	return 0;
}
