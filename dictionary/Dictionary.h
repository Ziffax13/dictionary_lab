#pragma once
#include <iostream>
#include <map>


using namespace std;

class Dictionary
{
	map<string, string> words;
public:
	void add(string, string);
	void print();
	void remove(string);
	void search(string);
	void inputAdd();
	void inputRemove();
	void inputSearch();
};

