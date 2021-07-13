#include<iostream>
#include<string>

template<typename... Values> class tuple;
template <> 
class tuple<>{};
template <typename Head,typename...Tail>
class tuple<Head,Tail...>
	:private tuple<Tail...>
{
	protected:
		Head m_head;
	typedef tuple<Tail...> inherited;
	public:
	tuple(){}
	tuple(Head v,Tail... vtail)
	:m_head(v),inherited(vtail...){}		
	
	Head head(){return m_head;}
	inherited& tail(){return *this;}	
};


int main()
{
	tuple<int,float,std::string> t(2,6.3,"syui");
	std::cout<<sizeof(t)<<std::endl;
	std::cout<<t.head()<<std::endl;
	//t.head();
	std::cout<<t.tail().head()<<std::endl;
	std::cout<<t.tail().tail().head()<<std::endl;	
	return 0;
}
