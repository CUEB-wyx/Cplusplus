#include <iostream>

using namespace std;

void printX()
{

}

template <typename T,typename... Types>
void printX(const T& firstArg ,const Types&... args)
{
	cout<<firstArg<<endl;
	printX(args...);
}
int main()
{
	printX(5,1.7,"hello world");
	return 0;
}
