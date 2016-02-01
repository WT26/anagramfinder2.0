#include "FileReader.hh"
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

void FileReader(string name_of_the_file, string anag_me){
	ifstream the_file(name_of_the_file);
	string line;
	map<char, int> lettercount_word;
	map<char, int> lettercount;
	vector<string> matching_words;
	cout << name_of_the_file;

	vector < map<char, int> > all_words;
	vector<char> letters{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z'};

	lettercount_word = lettercount_for_the_word(letters, anag_me);

	while (!the_file.eof()){
		the_file >> line;
		search_phase(line);

		lettercount = lettercount_for_the_word(letters, line);
		
		map<char, int>::iterator iter_randomword = lettercount.begin();
		map<char, int>::iterator iter_theword = lettercount_word.begin();
		bool same{ true };

		while (iter_randomword != lettercount.end()) {
			if (iter_randomword->second != iter_theword->second) {
				same = false;
			}
			iter_randomword++;
			iter_theword++;
		}
		if (same) {
			matching_words.push_back(line);
		}
		
	}
	search_done(matching_words);
}

void search_phase(string line) {
	if (line == "crawls") {
		cout << "25% of search done\n";
	}

	else if (line == "labyrinth") {
		cout << "50% of search done\n";
	}

	else if (line == "seceding") {
		cout << "75% of search done\n";
	}
}

map<char, int> lettercount_for_the_word(vector<char> letters, string line) {
	map<char, int> lettercount;
	for (char c : letters) {
		int temp = count(line.begin(), line.end(), c);
		lettercount[c] = temp;
	}
	return lettercount;
}

void search_done(vector<string> matching_words) {
	string line;
	cout << "\nSearch done!\nMatching words are:\n\n";
	for (auto word : matching_words) {
		cout << "1. " <<word << "\n";
	}

	cout << "\nPress enter to exit." << endl;

	getline(cin, line);
}

