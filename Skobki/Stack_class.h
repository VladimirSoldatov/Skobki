#include<iostream>
#include"Node_class.h"

template <class T>
class Stack {
	Node<T>* head;
public:
	Stack<T>() {
		head = NULL;
	}
	~Stack<T>() {
		clear();
	}
	T pop();
	void push(T value);
	T peek();
	void list();
	bool empty();
	void clear();
	void clone(Stack& old_obj);

};
template <class T>
T Stack <T>::pop() {
	T temp_pop = head->get_value();
	Node<T>* pop_node = head;
	head = head->get_next();
	delete pop_node;
	return temp_pop;

}
template <class T>
void Stack <T>::push(T value_temp) {
	Node<T>* newnode = new Node<T>(value_temp);

	newnode->set_next(head);
   head = newnode;
}
template <class T>
void Stack <T>::list() {
	Node<T>* listnode = head;
	while (listnode != 0) {
		std::cout << listnode->get_value() << " ";
		listnode = listnode->get_next();
	}


}
template <class T>
bool Stack <T>::empty() {
	return head == NULL;

}
template <class T>
void Stack <T>::clear() {
	Node<T>* delnote;

	while (empty()!=0) {
		delnote = head;
		head = delnote->get_next();
		delete delnote;
	}

}
template <class T>
T Stack<T>::peek() {
	return head->get_value();

}
template <class T>
void Stack<T>::clone(Stack<T>& old_obj) {

	*this = old_obj;
}