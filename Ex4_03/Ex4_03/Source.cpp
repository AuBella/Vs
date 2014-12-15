#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
	/*
	const int MAX(80);
	char buffer[MAX];
	int count(0);

	cin.getline(buffer, MAX, '\n');
	while (buffer[count] != '\0')
	count++;
	cout << buffer << " " << count << endl;
	*/

	char test[] = "Exit sings are on the way out.";
	int count = 0;
	cout << "The string contain the following characters:" << endl;
	for (auto ch : test ){
		++count;
		cout << ch << endl;
	}
	cout << endl << " The string contains " << (count - 1) << endl;
	return 0;
}