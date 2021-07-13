#include<iostream>
#include<cstdlib>
#include<malloc.h>

using namespace std;

void malloc_test()
{
	malloc(16);
	malloc(16);
	cout<<"size"<<malloc_usable_size(malloc(16))<<endl;
	cout<<"size"<<malloc_usable_size(malloc(8))<<endl;
}

void malloc_true()
{
	void* p = malloc(1024*1024);
	cout<<"size"<<malloc_usable_size(p)<<endl;
	free(p);
	
}
int main()
{
	cout<<"start"<<endl;

	malloc_true();	
	malloc_test();
	return 0;
}
