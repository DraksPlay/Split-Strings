#include <iostream>

using namespace std;


string* Split(string text, char sep) {

	int k = 0;  // Position in array
	int n = 1;  // Numbers split strings

	// Counting numbers of strings
	for (int i = 0; i < text.length(); i++) if (text[i] == sep) n++;

	// Split strings
	string* p = new string[n];

	// Splitting string
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == sep) k++;
		else p[k] += text[i];
	}

	return p;
}

void main() {
	string text = "__";
    string* p = Split(text, '_');
	delete[] p;
}