#include "pch.h"
#include <iostream>

bool Deque::isfull() {
	return ((front == 0 && rear == size - 1) || front == rear + 1);
}

bool Deque::isempty() {
	return (front == -1);
}

void Deque::ins_front(char data) {
	if (isInt) {
		printf("Error!\n");
	}
	else {
		if (isfull()) {
			return;
		}

		if (front == -1) {
			front = 0;
			rear = 0;
		}

		else if (front == 0) {
			front = size - 1;
		}
		else {
			front = front - 1;
		}
		array.arr_insert(&data, front);

	}
}

void Deque::ins_rear(char data) {
	if (isInt) {
		printf("Error!\n");
	}
	else {

		if (isfull()) {
			return;
		}

		if (front == -1) {

			front = 0;
			rear = 0;
		}

		else if (rear == size - 1) {
			rear = 0;
		}
		else {
			rear = rear + 1;
		}
		array.arr_insert(&data, rear);
	}
}

void Deque::ins_front(int data) {

	if (isInt) {
		if (isfull()) {
			return;
		}

		if (front == -1) {
			front = 0;
			rear = 0;
		}

		else if (front == 0) {
			front = size - 1;
		}
		else {
			front = front - 1;
		}

		array.arr_insert(&data, front);
	}
	else {
		printf("Error!\n");
	}
}

void Deque::ins_rear(int data) {
	if (isInt) {
		if (isfull()) {
			return;
		}

		if (front == -1) {
			front = 0;
			rear = 0;
		}

		else if (rear == size - 1) {
			rear = 0;
		}
		else {
			rear = rear + 1;
		}
		array.arr_insert(&data, rear);
	}
	else {
		printf("Error");
	}
}

bool Deque::operator==(const Deque& Deq) {
	if ((this->array == Deq.array) && (this->size == Deq.size) && (this->front == Deq.front) && (this->rear == Deq.rear)) { return true; }
	else { return false; }
}

bool Deque::operator!=(const Deque& Deq) {
	if ((this->array != Deq.array) || (this->size != Deq.size) || (this->front != Deq.front) || (this->rear == Deq.rear)) { return true; }
	else { return false; }
}

void Deque::del_front() {
	printf("Error!\n");
}

void Deque::del_rear() {
	printf("Error!\n");
}

void Deque::printfront() {
	printf("Error!\n");
}

void Deque::printrear() {
	printf("Error!\n");
}

bool Deque::isint() {
	if (isInt) {
		return true; 
	}
	return false;
}

