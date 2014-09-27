#include <iostream>
#include <string>

class Sales_item
{
public:
	Sales_item(): name(""), num("") {}
	Sales_item(std::string na, std::string nu):
		name(na), num(nu) {}
	friend Sales_item& plus(Sales_item &obj1, Sales_item &obj2, Sales_item &obj3);
	friend void input(std::istream &in, Sales_item &object);

private:
	std::string name;
	std::string num;
};

Sales_item& plus (Sales_item &obj1, Sales_item &obj2, Sales_item &obj3)
{
	obj1.name = obj2.name + obj3.name;
	obj1.num = obj2.num + obj3.num;
}

void input(std::istream &in, Sales_item &object)
{
	in >> object.name >> object.num;
}

int main(int argc, char const *argv[])
{
	Sales_item A;
	Sales_item B("book B", "one");
	Sales_item C("book C", "two");
	plus(A, B, C);

	Sales_item obj;
	input(std::cin, obj);
	return 0;
}