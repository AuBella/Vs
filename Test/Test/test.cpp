#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	char movie_star[14] = "Marilyn Monroe";
	double tempratures[] = { 65.5, 68.0, 75.0, 76.4, 73.8, 80.1 };
	double sum = 0.0;
	int count = 0;
	for (double t : tempratures){
		sum += t;
		++count;
	}
	double average = sum / count;
	cout << average << endl;
	return 0;
}