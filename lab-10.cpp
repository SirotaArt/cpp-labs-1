#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
	T data;
	Node<T> *prev, *next;

	Node(T data)
	{
		this->data = data;
		this->prev = this->next = NULL;
	}
};

template <typename T>
class List
{
public:
	Node<T> *head, *tail;
	int Size;

	List();
	~List();
	Node<T> *push_front(T data);
	Node<T> *push_back(T data);
	void pop_front();
	void pop_back();
	int GetSize() { return Size; }
};

template <typename T>
List<T>::List()
{
	head = tail = NULL;
}

template <typename T>
List<T>::~List()
{
	while (head != NULL)
	{
		pop_front();
	}
}

template <typename T>
Node<T> *List<T>::push_front(T data)
{
	Node<T> *ptr = new Node<T>(data);
	ptr->next = head;
	if (head != NULL)
		head->prev = ptr;
	if (tail == NULL)
		tail = ptr;
	head = ptr;
	Size++;
	return ptr;
}

template <typename T>
Node<T> *List<T>::push_back(T data)
{
	Node<T> *ptr = new Node<T>(data);
	ptr->prev = tail;
	if (tail != NULL)
		tail->next = ptr;
	if (head == NULL)
		head = ptr;
	tail = ptr;
	Size++;
	return ptr;
}

template <typename T>
void List<T>::pop_front()
{
	if (head == NULL)
	{
		return;
	}

	Node<T> *ptr = head->next;

	if (ptr != NULL)
	{
		ptr->prev = NULL;
	}

	else
	{
		tail = NULL;
	}
	Size--;
	delete head;
	head = ptr;
}

template <typename T>
void List<T>::pop_back()
{
	if (tail == NULL)
	{
		return;
	}

	Node<T> *ptr = tail->prev;

	if (ptr != NULL)
	{
		ptr->next = NULL;
	}

	else
	{
		head = NULL;
	}
	Size--;
	delete tail;
	tail = ptr;
}

int main()
{
	List<double> first;
	first.push_back(1.0);
	first.push_back(3.0);
	first.push_back(10.0);
	first.push_back(17.0);
	first.push_front(12.0);
	first.push_front(14.0);
	first.push_front(18.0);
	cout << first.GetSize() << endl;
	first.pop_back();
	first.pop_front();
	cout << first.GetSize() << endl;

	for (Node<double> *ptr = first.head; ptr != NULL; ptr = ptr->next)
	{
		cout << ptr->data << ' ';
		cout << endl;
	}
}
