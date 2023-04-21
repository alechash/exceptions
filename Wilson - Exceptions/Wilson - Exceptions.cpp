#include "WilsonAlecPL.h"
#include <iostream>
#include <cctype>

using namespace std;

char character(char start, int offset);

int main() {
	cout << character('a', 1);
	cout << character('z', -1);
	cout << character('a', -1);
	cout << character('?', 5);
}

char character(char start, int offset) {
	if (!isalpha(start)) {
		throw "ERROR: invalid character exception";
	}
	
	char newChar = start + offset;

	if (!isalpha(newChar)) {
		throw "ERROR: invalid range exception";
	}

	return newChar;
};