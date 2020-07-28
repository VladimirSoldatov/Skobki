#include<iostream>
#include "Stack_class.h"
#include "Node_class.h"
#include "drob_header.h"

int main() {
	setlocale(LC_ALL, "Russian");
	Stack<const char*> my_stack;
	my_stack.push("12", "Петр", "Петров", "+7(999)722-25-25");
	my_stack.push("1 ",  "Владимир", "Солдатов", "+7(915)-15-15-286");
	my_stack.push("13", "Иван", "Иванов", "+7(999)722-25-25");
	my_stack.list();

	my_stack.search("Петров");
	my_stack.del("Иванов");
	my_stack.list();
	Drob a = Drob(1, 3);
	Drob b = Drob(3, 2);
	a.print_value();
	Drob c = a - b;
	c.print_value();

	return 0;
}