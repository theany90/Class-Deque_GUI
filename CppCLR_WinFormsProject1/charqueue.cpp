#include "pch.h"

#include <iostream>
using namespace std;
bool CharQue::isfull() {
	return ((front == 0 && rear == size - 1) || front == rear + 1);
}
bool CharQue::isempty() {
	return (front == -1);
}

char CharQue::returnfront() {
	return *(char*)array[front];
}

char CharQue::returnrear() {
	return *(char*)array[rear];
}

void CharQue::del_front() {
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
void CharQue::del_rear() {
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

void CharQue::printfront() {
	cout << returnfront();
}

void CharQue::printrear() {
	cout << returnrear();
}

bool CharQue::operator==(const CharQue& Deq) {
	if ((this->array == Deq.array) && (this->size == Deq.size) && (this->front == Deq.front) && (this->rear == Deq.rear)) { return true; }
	else { return false; }
}

bool CharQue::operator!=(const CharQue& Deq) {
	if ((this->array != Deq.array) || (this->size != Deq.size) || (this->front != Deq.front) || (this->rear == Deq.rear)) { return true; }
	else { return false; }
}

