#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;
class HugeInt
{
public:
	HugeInt();
	HugeInt(int);
	HugeInt(string);

	friend istream & operator >> (istream &, HugeInt &);
	friend ostream & operator<<(ostream &, const HugeInt &);
	HugeInt &operator+(const HugeInt &);
	HugeInt &operator-(const HugeInt &);
	HugeInt &operator=(const HugeInt &);

	void setNumber(int);
	int getNumber( )const;

private:
	long int number;
	long int z;
};

HugeInt::HugeInt() {};

HugeInt::HugeInt(int a)
{
	long int number = a;
}

HugeInt::HugeInt(string a)
{
	number = stoi(a);
}

istream & operator >> (istream &in, HugeInt &n)
{
	in >> n.number;
	return in;
}

 ostream & operator<<(ostream &out, const HugeInt &n)
{
	out << n.number;
	return out;
}

HugeInt& HugeInt::operator+(const HugeInt &a)
{
	HugeInt temp(number + a.getNumber());
	return temp;
}

HugeInt& HugeInt::operator-(const HugeInt &n)
{
	HugeInt temp(number - n.getNumber());
	return temp;
}

HugeInt& HugeInt::operator=(const HugeInt &a)
{
	number = a.getNumber();
	return *this;
}

void HugeInt::setNumber(int a)
{
	number = a;
}

int HugeInt::getNumber ()const
{
	return number;
}
int main()
{
	HugeInt x;
	HugeInt y(28825252);
	HugeInt z("314159265358979323846");
	HugeInt result;
	cin >> x;
	result = x + y;
	cout << x << "+" << y << " = " << result << endl;
	result = z - x;
	cout << result << endl;
	return 0;
}
