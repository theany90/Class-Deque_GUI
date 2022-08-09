#pragma once
#define MAX_SIZE 1000
class Array {
private:
	void* array;
	int size, t_size;
	void memCpy(void*, void*, unsigned long);
public:
	Array();
	Array(int, int);
	void operator()(int, int);
	~Array();
	void init_array(int, int);
	void arr_insert(void*, int);
	void* operator[](int);
	void operator=(const Array&);
	bool operator==(const Array&);
	bool operator!=(const Array&);
};

class Deque {
protected:
	int front, rear, size;
	Array array;
	bool isInt = true;
	void initqueue();
public:
	Deque();
	Deque(const Deque&);
	void ins_front(char);
	void ins_rear(char);
	void ins_front(int);
	void ins_rear(int);
	virtual void del_front();
	virtual void del_rear();
	virtual void printfront();
	virtual void printrear();
	bool isfull();
	bool isempty();
	bool isint();
	void operator=(const Deque&);
	bool operator==(const Deque&);
	bool operator!=(const Deque&);

};

class CharQue : public Deque {
public:

	CharQue(int);
	bool isfull();
	bool isempty();
	char& at(int);
	char& operator[](int);
	char returnfront();
	char returnrear();
	void insertfront(char);
	void insertrear(char);
	void printfront();
	void printrear();
	void del_front();
	void del_rear();
	bool operator==(const CharQue&);
	bool operator!=(const CharQue&);
};

class Int : public Deque {
public:

	Int(int);
	bool isfull();
	bool isempty();
	int& at(int);
	int& operator[](int);
	int returnfront();
	int returnrear();
	void insertfront(int);
	void insertrear(int);
	void printfront();
	void printrear();
	void del_front();
	void del_rear();
	bool operator==(const Int&);
	bool operator!=(const Int&);
};

