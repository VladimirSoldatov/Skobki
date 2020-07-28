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
	void push(T value, T name = "", T surname = "", T mob_tel = "");
	T peek();
	void list();
	void search(T surname);
	bool empty();
	void clear();
	void del (T surname);

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
void Stack <T>::push(T value, T name, T surname, T mob_tel) {
	Node<T>* newnode = new Node<T>(value, name, surname, mob_tel);

	newnode->set_next(head);
   head = newnode;
}
template <class T>
void Stack <T>::list() {
	Node<T>* listnode = head;
	while (listnode != 0) {
		std::cout << listnode->get_value();
		listnode = listnode->get_next();
	}

	std::cout << "\n";
}
template <class T>
void Stack <T>::search(T surname) {
	Node<T>* listnode = head;
	while (listnode != 0) {
		if (listnode->get_surname()==surname)
		std::cout << listnode->get_value() << " найден";
		listnode = listnode->get_next();
	}


}
template <class T>
void Stack <T>::del(T surname) {
	Node<T>* listnode = head;
	Node<T>* temp = NULL;

	while (listnode) {
		if (listnode->get_surname() == surname) {
			if (temp) {
	
				temp->set_next(NULL);
				std::cout << listnode->get_value() << " удален\n";

				listnode = listnode->get_next();

				temp->set_next(listnode);



			}
			else {
				temp = head;
				head = head->get_next();
				std::cout << listnode->get_value() << " удален\n";
				listnode = listnode->get_next();
				delete temp;
				
			}

		


			
			
		}
		else {
			temp = listnode;
			listnode = listnode->get_next();
			
		}
	
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
