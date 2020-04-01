/*
扑克牌游戏大家应该都比较熟悉了，一副牌由54张组成，含3~A，2各4张，小王1张，大王1张。牌面从小到大用如下字符和字符串表示（其中，小写joker表示小王，大写JOKER表示大王）:)

3 4 5 6 7 8 9 10 J Q K A 2 joker JOKER
输入两手牌，两手牌之间用“-”连接，每手牌的每张牌以空格分隔，“-”两边没有空格，如：4 4 4 4-joker JOKER
请比较两手牌大小，输出较大的牌，如果不存在比较关系则输出ERROR

基本规则：
输入每手牌可能是个子，对子，顺子（连续5张），三个，炸弹（四个）和对王中的一种，不存在其他情况，由输入保证两手牌都是合法的，顺子已经从小到大排列；
除了炸弹和对王可以和所有牌比较之外，其他类型的牌只能跟相同类型的存在比较关系（如，对子跟对子比较，三个跟三个比较），不考虑拆牌情况（如：将对子拆分成个子）
大小规则跟大家平时了解的常见规则相同，个子，对子，三个比较牌面大小；顺子比较最小牌大小；炸弹大于前面所有的牌，炸弹之间比较牌面大小；对王是最大的牌；
输入的两手牌不会出现相等的情况。

答案提示：
除了炸弹和对王之外，其他必须同类型比较。
输入已经保证合法性，不用检查输入是否是合法的牌。
输入的顺子已经经过从小到大排序，因此不用再排序了.

输入描述:
输入两手牌，两手牌之间用“-”连接，每手牌的每张牌以空格分隔，“-”两边没有空格，如4 4 4 4-joker JOKER。


输出描述:
输出两手牌中较大的那手，不含连接符，扑克牌顺序不变，仍以空格隔开；如果不存在比较关系则输出ERROR。

输入例子:
4 4 4 4-joker JOKER

输出例子:
joker JOKER
*/ 
#include<iostream>
#include<string>
 
using std::string;
using std::cout;
using std::endl;
using std::cin;
 
#define PrintS1 {cout<<s1<<endl;}
#define PrintS2 {cout<<s2<<endl;}
 
int count(const string &s)
{
	int n = 0, pos = 0;
	while ((pos = s.find(" ", pos)) != string::npos)
	{
		n++;
		pos += 1;
	}
	return ++n;
}
 
int main()
{
	string s;	//输入的字符串
	string s1, s2;
	getline(cin, s);
	s1 = s.substr(0, s.find('-'));	//左边的牌
	s2 = s.substr(s.find('-') + 1);	//右边的牌
	int n1 = count(s1);				//左边牌的数量
	int n2 = count(s2);				//右边牌的数量
	string POKER = "345678910JQKA2";
	string MAX = "joker JOKER";
	if (s1 == MAX) PrintS1
	else if (s2 == MAX) PrintS2
	else if (n1 == n2)
	{
		string f1, f2;
		f1 = s1.substr(0, f1.find(" "));
		cout << f1 << endl;
		f2 = s2.substr(0, f2.find(" "));
		cout << f2 << endl;
		if (POKER.find(f1) > POKER.find(f2))
			PrintS1
		else
			PrintS2
	}
	else if (4 == n1)
		PrintS1
	else if (4 == n2)
		PrintS2
	else
		printf("ERROR\n");
	system("pause");
	return 0;
}
