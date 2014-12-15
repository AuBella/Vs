#include<iostream>

namespace myStuff{
	int value;
}

int main(){
	std::cout << "enter an integer: ";
	std::cin >> myStuff::value;
	bool flag = true;
	std::cout << (myStuff::value & 7) << " " << (myStuff::value % 8) << std::endl;
	for (int i = 1; i < 1000; i++){
		if ( (i & 7) != (i % 8)){
			std::cout << (i & 7) << " " << (i % 8) << std::endl;
			flag = false;
			break;
		}
	}
	if (flag)
		puts("1");
	else
		puts("0");
	return 0;
}