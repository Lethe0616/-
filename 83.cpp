#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool is_brother(string word1, string word2)
{
	if (word1.size() == word2.size())
	{
		if (word1 == word2)
			return false;

		sort(word1.begin(), word1.end());//¶ÔÊý×éÔªËØ½øÐÐÅÅÐò£¬Ä¬ÈÏÉýÐòÅÅÐò
		sort(word2.begin(), word2.end());
        
		if (word1 == word2)
			return true;
	}
	return false;
}

int main()
{
	int num;
	
	while (cin >> num)
	{
		string word;
		string brother_word,word_end;
		int brother_num;
		vector<string> d;
		for(int i=0;i<num;i++)
		{
			cin >> word;
			d.push_back(word);
		}
		sort(d.begin(), d.end());//×ÖµäÅÅÐò£¬Ä¬ÈÏÉýÐòÅÅÐò
		
		
		cin >> brother_word;
		cin >> brother_num;
		int flag = 0;
		
		for (int i = 0; i < num; i++)
		{
			if (is_brother(brother_word, d[i]))
			{
				flag++;
				if (flag == brother_num)
				{
					word_end = d[i];
				}
			}
		}
		if(!d.empty())
		cout << flag<<endl;
		if(brother_num <= flag)
		cout << word_end<<endl;
	}
	return 0;
}

