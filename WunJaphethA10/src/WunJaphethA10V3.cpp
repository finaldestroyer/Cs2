//============================================================================
// Name        : WunJaphethA10V3.cpp
// Author      : Japheth
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <iterator>
#include <cstdlib>
#include <vector>
using namespace std;

void translateC(map<string, string> & characters) {
	string chinese[15] = { "nihao","woaigao","wobuxihuankafei",
								"zijan","woxiangkele","hepiaobiji",
								"woxiangheshui","yi","er","san","si",
								"liu","qi","ba","jiu"};
		string english[15] = { "Hello",
							"I luv dogs",
							"I dont like coffee",
							"bye",
							"I want coke",
							"Drinking bleach",
							"I want water",
							"1",
							"2",
							"3",
							"4",
							"5",
							"6",
							"7",
							"8"};

	vector<int> done;
	bool found = false;

	int size;
	cout << "Pick the number of terms between 1 and 15, would you like to translate?" << endl;
	try {
		string error = "Only pick between 1 and 15.";
		cin >> size;
		if (size < 1 || size > 15)
			throw error;
	}
	catch (string & errorMessage) {
		cout << errorMessage << endl;
		translateC(characters);
	}

	for (int i = 0; i < size; i++) {
		int j = rand() % 15;
		for (auto term : done) {
			if (j == term) {
				i--;
				found == true;
				break;
			}
		}

		if (!found) {
			characters.insert(pair<string, string>(chinese[j], english[j]));
			done.push_back(j);
		}

	}
}


int main() {
	string key;
	map<string, string> translator;
	cout << "Chinese translator!" << endl;
	translateC(translator);
	map<string, string> :: iterator itr;
	cout << endl;
	for (itr = translator.begin(); itr != translator.end(); itr++)
		cout << itr->first << endl;
	cout << endl;

	cout << "Enter 'stop' to exit" << endl;
	cout << "What term would you like to translate? Please type exactly what you see" << endl;
	cin >> key;
	cout << endl;

	while (key != "stop") {
		bool found = false;
		for (itr = translator.begin(); itr != translator.end(); ++itr)
			if (key == itr->first) {
				cout << key << ": " << itr->second << endl;
				found = true; }

		if (!found)
			cout << "That term is misspelled incorrect or not in our current library" << endl;

		cout << "What term would you like to next?" << endl;
		cin >> key;
		cout << endl;
	}
	cout << "Good Bye" << endl;
}

