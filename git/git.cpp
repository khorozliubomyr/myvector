#include<iostream>
using namespace std;
#include"my_Vect.h"
int main() {
	my_Vect a(5,11);
	a.init_arr();
	a.my_push_back(5);
	a.push_front(1);
	system("pause");
}