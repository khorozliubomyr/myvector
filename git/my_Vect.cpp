#include "my_Vect.h"
#include<iostream>
using namespace std;
void my_Vect::init_arr()
{
	for (int i = 0; i < size; i++)
	{
arr[i] = initial_value;
std::cout << arr[i] << std::endl;
	}
}

void my_Vect::my_push_back(int val)
{ 
	 arr[size] = val;
	 for (int i = 0; i <= size; i++)
	 {
		 cout << arr[i] << " " << endl;
	 }
	 size ++;
}

void my_Vect::push_front(int val)
{ 
	for (int i = 1; i < size; i++)
	{
		int tmp = arr[i];
		arr[0] = val;
		cout << arr[i] << "  ";
	}
}

my_Vect::~my_Vect()
{
}
