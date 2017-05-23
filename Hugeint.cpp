#include<iostream>
#include<string>
#include <cstdlib>
using namespace std;

class HugeInt
{
	public:
	HugeInt();
	HugeInt(int a);
	HugeInt(string z);
	
	friend ostream & operator(ostream & out , HugeInt s);
	friend istream & operator(istream & in  , HugeInt &s);  
	HugeInt operator+(HugeInt &);
	HugeInt operator-(HugeInt &);
	
	private:
	int b;
	int number;
	int Array[1000000];
};

	HugeInt()::HugeInt()
 { 

 };

	HugeInt :: HugeInt(int a)
 {
	b=a;
 }

	HugeInt :: HugeInt(string z) //acsll save into array
 {
	int l=21;
	for(int i=0;i<l;i++)
  {
	Array[i]=z[i]-48;
  }
}

	ostream & operator(ostream & out , HugeInt s)
{
	out << s.number;
	return out;
}

friend istream & operator<<(istream & in, HugeInt &s)
{
	in>>s.number;
	return in;
}

	HugeInt operator + (HugeInt & aa)
 {
	return(b+s.number);
}

	HugeInt operator - (HugeInt & aa )
{

}
	
