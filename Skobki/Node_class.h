#pragma once
template <class T>
class Node {

	Node* next;
	T value;
public:

	Node(T value) {
		this->value = value;
		this->next = NULL;
	}
	T get_value();
	void set_value(T value_temp);
	Node<T>* get_next();
	void set_next(Node* next);

};
template <class T>
T Node<T>::get_value() {
	return value;
}
template <class T>
void Node<T>::set_value(T t_value) {
	value = t_value;
}
template <class T>
Node<T>* Node<T>::get_next() {
	return  next;

}
template <class T>
void Node<T>::set_next(Node* next) {
	this->next = next;

}
