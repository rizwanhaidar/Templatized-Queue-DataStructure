#include "pch.h"

#include<string>
using namespace std;

#include"../Lab_7/Header.h"
TEST(Queue,TASK1) {
	Queue<char> test;
	EXPECT_EQ(0, test.NumItems);
	test.enqueue('R');
	test.enqueue('i');
	test.enqueue('z');
	test.enqueue('w');

	EXPECT_FALSE(test.isEmpty());
	EXPECT_EQ(4, test.NumItems);
	EXPECT_EQ('R', test.dequeue());
	EXPECT_EQ('i',test.dequeue());
	test.clear();
	EXPECT_EQ(0, test.NumItems);
	EXPECT_TRUE(test.isEmpty());
//	EXPECT_, test.clear();)


}
TEST(Queue1, TASK2) {
	Queue<char> test;
	EXPECT_EQ(0, test.getlength());
	test.enqueue('R');
	test.enqueue('i');
	test.enqueue('z');
	test.enqueue('w');

	EXPECT_EQ(4, test.getlength());
	//EXPECT_FALSE(test.isEmpty());
	EXPECT_EQ('R', test.dequeue());
	EXPECT_EQ('i', test.dequeue());
	test.clear();
	EXPECT_EQ(0, test.getlength());
	EXPECT_TRUE(test.isEmpty());
	//	EXPECT_, test.clear();)


}
TEST(QUEUE2, TASK3) {
	
	string x = "DATA STRUCTURES AND ALOG";
		Queue<char> a;
		Queue<char> b;
		Queue<char> c;
		Queue<char> d;
		int i = 0;
		while (x[i] != ' ') {
			a.enqueue(x[i]);

			i++;
		}
		i++;
		while (x[i] != ' ') {
			b.enqueue(x[i]);
			i++;
		}
		i++;
		while (x[i] != ' ') {
			c.enqueue(x[i]);
			i++;
		}
		i++;
		while (x[i] != '\0') {
			d.enqueue(x[i]);
			i++;
		}
		a.rear->next = b.front;
		a.rear = b.rear;
		a.rear->next = c.front;
		a.rear = c.rear;
		a.rear->next = d.front;
		a.rear = d.rear;
		for (int k = 0; k < 4; k++) {
			if (x[k] != ' ') {
				char p = a.dequeue();
				cout << p;
				EXPECT_EQ(x[k], p);
			}
		}

		//return 0;


}