#include<iostream>
using std::cin;
using std::cout;
int main(void)
{
	unsigned s = 555;

	int i = (s >> 4) & ~(~0 << 3);
	cout << i;
	cout << std::endl;
}