#include<iostream>
#include<string>


std::string global_str;
int global_int;

int main() {
	int local_int=0;
	std::string local_str;

	std::cout<<global_str<<std::endl;//empty string
	std::cout<<global_int<<std::endl;//zero

	std::cout << local_str << std::endl;//uninitialized local string is a empty string
	std::cout << local_int << std::endl;//uninitialized int is warned by compiler, the value is garbage
	
}