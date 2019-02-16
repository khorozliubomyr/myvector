#pragma once
const int def_capacity = 7;
class my_Vect
{
	 size_t size;
	int capacity;
	int initial_value;
	int* arr=new int[size];

public:
	my_Vect():size(0), capacity(7) ,initial_value(0){}
	my_Vect(unsigned  int len) :size(len),capacity(7), initial_value(0) {}
	my_Vect(unsigned int len, int init_val) :size(len), initial_value(init_val),arr(new int[size+def_capacity]) {}
	void init_arr();
	void my_push_back(int val);
	void push_front(int val);
	~my_Vect();
};

