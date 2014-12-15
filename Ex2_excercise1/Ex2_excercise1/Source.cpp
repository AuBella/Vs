#include<iostream>

using std::cin;
using std::cout;

int main(){
	int n;
	cin >> n;
	cout << n - ((n >> 3) << 3) << std::endl;
	return 0;
}