#include < iostream >
#include<cstdio>

using namespace std;

enum class Jewls{
	Diamonds, hello
};
enum class Suit {
	Clubs, Diamonds, Hearts, Spades
};

int main(){
	Suit suit = Suit:: Clubs;
	Suit another = Suit::Diamonds;
	cout << "suit value: " << static_cast<int >(suit) << endl;
	cout << "Add 10 to another: " << static_cast<int>(another) + 10L << endl;

	enum class Color :char{
		Red, Orange, Yellow, Green, Blue, Indigo, Violet
	};

	Color skyColor(Color::Blue);

	cout << endl
		<< "Sky color value: "
		<< static_cast<long>(skyColor);

	cout << endl
		<< "Icreamented sky color: "
		<< static_cast<long>(skyColor)+10L
		<< endl;
	return 0;
}