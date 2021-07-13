#include<iostream>
#include<vector>

using namespace std;

template <typename T ,template <class> class Container>
class XCLs
{
	private:
		Container<T> c;
	public:	
		XCLs()
		{
		cout<<"yes"<<endl; 
		}
};

template<typename T>
using vec = vector<T,allocator<T>>;
int main()
{
	XCLs<int,vec> c1;
	return 0;
}
