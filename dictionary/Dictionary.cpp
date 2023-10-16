#include "Dictionary.h"

void Dictionary::add(string w1, string w2)
{
	words.emplace(make_pair(w1, w2));
}

void Dictionary::print()
{
	for (auto p = words.begin(); p != words.end();)
	{
		cout << p->first << " => " << p->second << '\n';
		p++;
	}
}

void Dictionary::remove(string er)
{
	for (auto p = words.begin(); p != words.end();)
	{
		if (p->first == er || p->second == er)
		{
			words.erase(p);
			return;
		}
		p++;
	}
}

void Dictionary::search(string s)
{
	for (auto p = words.begin(); p != words.end();)
	{
		if (p->first == s || p->second == s)
		{
			cout << p->first << " => " << p->second << '\n';
		}
		p++;
	}
}

void Dictionary::inputAdd()
{
	string s, p;
	cout << "Word 1: ";
	cin >> s;
	cout << "Word 2: ";
	cin >> p;
	add(s, p);
}

void Dictionary::inputRemove()
{
	string er;
	cout << "Enter word/pair to remove: ";
	cin >> er;
	remove(er);
}

void Dictionary::inputSearch()
{
	string s;
	cout << "Enter word: ";
	cin >> s;
	search(s);
}

