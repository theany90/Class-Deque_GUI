#include "pch.h"


void Array::memCpy(void* dest, void* src, unsigned long index) {
	char* csrc = (char*)src;
	char* cdest = (char*)dest;
	for (int i = 0; i < index; i++) {
		cdest[i] = csrc[i];
	}
}

void Array::arr_insert(void* data, int index) {
	if (t_size == sizeof(int)) {
		memCpy(((int*) array) + (index * t_size), data, t_size);
	}
	else if (t_size == sizeof(char)) {
		memCpy(((char*)array) + (index * t_size), data, t_size);
	}
}

void* Array::operator[](int index) {
	if (t_size == sizeof(int)) {
		return (((int*) array) + (index * t_size));
	}
	else if (t_size == sizeof(char)) {
		return (((char*)array) + (index * t_size));
	}
	
}

bool Array::operator==(const Array& Arr) {
	if ((this->array == Arr.array) && (this->size == Arr.size) && (this->size == Arr.t_size)) { return true; }
	else { return false; }
}

bool Array::operator!=(const Array& Arr) {
	if ((this->array != Arr.array) || (this->size != Arr.size) || (this->size != Arr.t_size)) { return true; }
	else { return false; }
}


