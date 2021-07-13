#include<iostream>
using namespace std;

class Airplane
{
	private:
		struct AirplaneRep {
			unsigned long miles;
			char type;
		};
		union{
			AirplaneRep rep;
			Airplane* next;	
		};	
		static const int BLOCK_SIZE;
		static Airplane* headOfFreelist;
	public:
		unsigned long getMiles(){return rep.miles;}
		char getType(){return rep.type;}
		void set(unsigned long m,char t){rep.miles = m;rep.type=t;}
		void* operator new(size_t size);
		void operator delete(void* deadObject ,size_t size);
};

	Airplane* Airplane::headOfFreelist;
	const int Airplane::BLOCK_SIZE=512;

void* Airplane::operator new(size_t size)
{
	Airplane* p= headOfFreelist;
	if(p)
	{
		headOfFreelist = p->next;
	}
	else
	{
		//申请一大块空间
		Airplane* newBlock = static_cast<Airplane*>(::operator new(BLOCK_SIZE*sizeof(Airplane)));
		for(int i=1;i<BLOCK_SIZE-1;++i)
		{newBlock[i].next = &newBlock[i+1];}
		newBlock[BLOCK_SIZE-1].next = 0;
		p = newBlock;
		headOfFreelist = &newBlock[1];
	}
	return p;
}

void Airplane::operator delete(void* deadObject ,size_t size)
{
	if(deadObject == 0) return;
	Airplane* carcass = static_cast<Airplane*> (deadObject);

	carcass->next = headOfFreelist;
	headOfFreelist = carcass;
}

int main()
{
	cout<<sizeof(int)<<sizeof(unsigned long)<<endl;
	cout<<sizeof(Airplane)<<endl;
	size_t const N = 100;
	Airplane* p[N];
	for (int i=0;i<N;++i)
	{p[i] = new Airplane;}	
	p[1]->set(1000,'A');
	p[2]->set(3000,'B');
	for(int i=0;i<10;++i){cout<<p[i]<<endl;}
	for(int i=0;i<N;++i) delete p[i];
	return 0;
}
