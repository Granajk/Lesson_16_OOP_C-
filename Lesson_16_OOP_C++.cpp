#include <iostream>
#include <string>
#include <map>	
#include "Diary.h"
using namespace std;
int main()
{
	/*map<string, int> words;

	string text;

	do {
		cout << "Input text: "; cin >> text;
		if (words.find(text) == words.end())
		{
			//words.insert(pair<string, int>(text, 1));
			words[text] = 1;
		}
		else
		{
			words[text]++;
		}
	} while (text != "stop");
	cout << "---------------------------------------------------+\n\n";
	words.erase("stop");
	for (auto item = words.begin(); item != words.end(); item++)
	{
		cout << item->first << " " << item->second << endl;
	}*/

	Diary Rodion;
	Rodion.addEvent(Date(2025, 1, 10), "My Birthday");
	Rodion.showList();
	cout << "other:---------------------\n";
	Rodion.findByDate(Date(2025,1,10));
	Rodion.findByEvent("New Year");
	cout << "DelEvent:---------------------\n";

	Rodion.delEvent(Date(2025,1,10),"My Birthday");
	Rodion.delEvent(Date(), "Film");
	Rodion.showList();

}
