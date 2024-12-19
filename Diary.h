#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Date.h"
using namespace std;
class Diary
{
	map<Date, vector<string>> book;
public:
	Diary(){
		book[Date()].push_back("C++");
		book[Date(2025,1,1)].push_back("New Year");
		book[Date(2024,12,16)].push_back("C#");
		book[Date()].push_back("Film");
		book[Date(2025,1,1)].push_back("Sleep");
		book[Date(2025,1,1)].push_back("Eat");
	}
	void showList()const{
		for (auto item : book) {
			cout << item.first << endl;
			for (int i = 0; i < item.second.size(); i++)
			{
				cout << "\t" << item.second[i] << endl;
			}
		}
	}
	void addEvent(Date d, string event){
		book[d].push_back(event);
	}
	void findByDate(Date d)const{
		auto it = book.find(d);
		if (it != book.end())
		{
			cout << "Date: " << d << ":" << endl;
			for (auto event : it->second) {
				cout << "\t" << event << endl;
			}
		}
		else
		{
			cout << "Not Founded !\n";
		}
	}
	void findByEvent(string Event)const {
		for (auto item : book) {
			for (auto items : item.second) {
				if (items == Event)
				{
					cout << "Date of Event: " << Event << " is " << item.first << endl;
				}
			}
		}
	}
	void delEvent(Date d, string event){
		auto it = book.find(d);
		if (it != book.end())
		{
			for (auto item = it->second.begin(); item != it->second.end();item++) {
				if (*item == event)
				{
					it->second.erase(item);
					break;
				}
			}
			if (it->second.size() == 0)
			{
				book.erase(d);
			}
		}
	}
};

