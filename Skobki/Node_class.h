#pragma once
#pragma warning(disable : 4996) 
template <class T>
class Node {
	
	Node* next;
	T value;
	T name;
	T surname;
	T mob_tel;
public:

	Node(T value, T name = "",  T surname = "", T mob_tel = "") {
		this->value = value;
		this->name = name;
		this->surname = surname;
		this->mob_tel = mob_tel;
		this->next = NULL;
	}
	T get_name();
	T get_surname();
	T get_mob_tel();
	char * get_value();
	void set_value(T value_temp);
	Node<T>* get_next();
	void set_next(Node* next);

};
template <class T>
char * Node<T>::get_value() {
	char * temp = new char[100];
	strcpy(temp, "\n");
	strcat(temp, value);
	strcat(temp, " ");
	strcat(temp, get_surname());
	strcat(temp, " ");
	strcat(temp, get_name());
	strcat(temp, " ");
	strcat(temp, get_mob_tel());

		return temp;
}
template <class T>
T Node<T>::get_name() {
	return name;
}template <class T>
T Node<T>::get_surname() {
	return surname;
}template <class T>
T Node<T>::get_mob_tel() {
	return mob_tel;
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
