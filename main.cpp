#include "FileReader.hh"
#include <string>
#include <iostream>

int main() {
	string line;
	cout << "Find anagrams for word: ";
	getline(cin, line);

	if (line.length() == 1) {
		FileReader("words_1.txt", line);
	}
	else if (line.length() == 2) {
		FileReader("words_2.txt", line);
	}
	else if (line.length() == 3) {
		FileReader("words_3.txt", line);
	}
	else if (line.length() == 4) {
		FileReader("words_4.txt", line);
	}
	else if (line.length() == 5) {
		FileReader("words_5.txt", line);
	}
	else if (line.length() == 6) {
		FileReader("words_6.txt", line);
	}
	else if (line.length() == 7) {
		FileReader("words_7.txt", line);
	}
	else if (line.length() == 8) {
		FileReader("words_8.txt", line);
	}
	else if (line.length() == 9) {
		FileReader("words_9.txt", line);
	}
	else if (line.length() == 10) {
		FileReader("words_10.txt", line);
	}
	else if (line.length() == 11) {
		FileReader("words_11.txt", line);
	}
	else if (line.length() == 12) {
		FileReader("words_12.txt", line);
	}
	else if (line.length() == 13) {
		FileReader("words_13.txt", line);
	}
	else if (line.length() == 14) {
		FileReader("words_14.txt", line);
	}
	else if (line.length() == 15) {
		FileReader("words_15.txt", line);
	}
	else if (line.length() == 16) {
		FileReader("words_16.txt", line);
	}
	else if (line.length() == 17) {
		FileReader("words_17.txt", line);
	}
	else if (line.length() == 18) {
		FileReader("words_18.txt", line);
	}
	else if (line.length() == 19) {
		FileReader("words_19.txt", line);
	}
	else if (line.length() == 20) {
		FileReader("words_20.txt", line);
	}
	else if (line.length() == 21) {
		FileReader("words_21.txt", line);
	}
	else if (line.length() == 22) {
		FileReader("words_22.txt", line);
	}
	else if (line.length() == 23) {
		FileReader("words_23.txt", line);
	}
	else if (line.length() == 24) {
		FileReader("words_24.txt", line);
	}
	else if (line.length() == 25) {
		FileReader("words_25.txt", line);
	}
	else if (line.length() == 26) {
		FileReader("words_26.txt", line);
	}
}