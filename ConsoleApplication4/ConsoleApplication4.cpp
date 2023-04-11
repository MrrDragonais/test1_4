#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class TBook {
public:
	string name;
	string author;
	string count;
};

int main() {
	setlocale(LC_ALL, "ru");

	TBook book1;

	book1.name = "I want to sleep";
	book1.author = "PUSHKIN";
	book1.count = "648";

	cout << "\nFirst book: \n";
	cout << "Name: " << book1.name << endl;
	cout << "Author: " << book1.author << endl;
	cout << "Count: " << book1.count << endl;

	return 0;
}
