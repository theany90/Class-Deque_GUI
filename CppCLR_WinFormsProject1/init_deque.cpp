#include "pch.h"

Deque::Deque() {
	this->rear = 0;
	this->front = -1;
}
void Deque::initqueue() {
	this->rear = 0;
	this->front = -1;
}


void Deque::operator=(const Deque& d) {
	this->array = d.array;
	this->rear = d.rear;
	this->front = d.front;
	this->size = d.size;
}

CharQue::CharQue(int size) {
	Deque::isInt = false;
	Deque::size = size;
	Deque::array(Deque::size, 1);
	initqueue();
}

Int::Int(int size) {
	Deque::isInt = true;
	Deque::size = size;
	Deque::array(Deque::size, 4);
	initqueue();
}
