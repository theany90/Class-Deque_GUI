#include "pch.h"
#include <iostream>
using namespace std;
bool Int::isfull() {
	return ((front == 0 && rear == size - 1) || front == rear + 1);
}
bool Int::isempty() {
	return (front == -1);
}

int Int::returnfront() {
	return *(int*)array[front];
}

int Int::returnrear() {
	return *(int*)array[rear];
}

void Int::del_front() {
	if (isempty()) {
		return;
	}

	if (front == rear) {
		front = -1;
		rear = -1;
	}
	else if (front == size - 1)
		front = 0;

	else
		front = front + 1;

}
void Int::del_rear() {
	if (isempty()) {
		return;
	}

	if (front == rear) {
		front = -1;
		rear = -1;
	}
	else if (rear == 0)
		rear = size - 1;
	else
		rear = rear - 1; 
}

void Int::printfront() {
	cout << returnfront();
}

void Int::printrear() {
	cout << returnrear();
}


bool Int::operator==(const Int& Deq) {
	if ((this->array == Deq.array) && (this->size == Deq.size) && (this->front == Deq.front) && (this->rear == Deq.rear)) { return true; }
	else { return false; }
}

bool Int::operator!=(const Int& Deq) {
	if ((this->array != Deq.array) || (this->size != Deq.size) || (this->front != Deq.front) || (this->rear == Deq.rear)) { return true; }
	else { return false; }
}

