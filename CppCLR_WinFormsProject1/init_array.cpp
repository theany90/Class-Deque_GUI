#include "pch.h"
Array::Array() {

}
Array::Array(int size, int type_size) :array(nullptr), t_size(type_size) {
	this->size = size;
	array = new unsigned char[size * type_size];
}

void Array::init_array(int size, int type_size) {
	this->array = nullptr;
	this->t_size = type_size;
	this->size = size;
	array = new unsigned char[size * type_size];
}

void Array::operator()(int size, int type_size) {
	init_array(size, type_size);
}

void Array::operator=(const Array& a) {
	this->array = a.array;
	this->size = a.size;
	this->t_size = a.t_size;
}

Array::~Array() {

}



