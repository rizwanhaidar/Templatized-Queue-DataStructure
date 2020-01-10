#pragma once

#include<iostream>
using namespace std;


template <typename T>
struct Node {
public:
	T data;
	Node *next;
	Node() {
		data = '.';
		next = NULL;
		}
	~Node() {
		//nklo
	}
};

template<typename Q>
class Queue {
public:
	Node<Q>* front;
	Node<Q>* rear;
	int NumItems;

	Queue() {
		front = NULL;
		rear = NULL;
		NumItems = 0;
	}
	void enqueue(Q x)
	{
		Node<Q> *np = new Node<Q>;
		np->data = x;
		np->next = NULL;
		if (rear == NULL)
		{
			front = np;
			rear = np;
			NumItems++;
		}
		else {
			rear->next = np;
			rear = np;

			NumItems++;
		}
	}
	char dequeue()
	{
		if (front == NULL)
		{
			cout << "Queue is empty";
			return 0;
		}
		else
		{
			Q x = front->data;
			Node<Q>* d = front;
			front = front->next;
			delete(d);

			NumItems--;
			return x;
		}
	}
	~Queue() {
		while (NumItems) {
			Node<Q>* d = front;
			front = front->next;
			delete d;
			NumItems--;
		}
		rear = NULL;
	}
	bool isEmpty() {
		if (front == NULL) {
			return true;
		}
		return false;
	}
	void clear() {
		while (NumItems ) {
			Node<Q>* d = front;
			front = front->next;
			delete d;
			NumItems--;
		}
		rear = NULL;
	}
	int getlength() {
		return NumItems;
	}


};