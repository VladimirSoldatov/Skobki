#include<iostream>
#include "Stack_class.h"
#include "Node_class.h"

int main() {
	Stack<int> my_stack;
	my_stack.push(12);
	my_stack.push(13);

	Stack <int > clone;
	clone.clone(my_stack);
	clone.list();

	return 0;
}