#include<iostream>
#include "Stack_class.h"
#include "Node_class.h"
#include "drob_header.h"

int main() {
	setlocale(LC_ALL, "Russian");
	Stack<const char*> my_stack;
	my_stack.push("12", "����", "������", "+7(999)722-25-25");
	my_stack.push("1 ",  "��������", "��������", "+7(915)-15-15-286");
	my_stack.push("13", "����", "������", "+7(999)722-25-25");
	my_stack.list();

	my_stack.search("������");
	my_stack.del("������");
	my_stack.list();
	Drob a = Drob(1, 3);
	Drob b = Drob(3, 2);
	a.print_value();
	Drob c = a - b;
	c.print_value();

	return 0;
}