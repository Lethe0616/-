/*
题目描述
NowCoder生活在充满危险和阴谋的年代。为了生存，他首次发明了密码，用于军队的消息传递。假设你是军团中的一名军官，需要把发送来的消息破译出来、并提
供给你的将军。
消息加密的办法是：对消息原文中的每个字母，分别用该字母之后的第5个字母替换（例如：消息原文中的每个字母A 都分别替换成字母F），其他字符不 变，并且消息原文的所有字母都是大写的。密码中的字母与原文中的字母对应关系如下。
密码字母：A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
原文字母：V W X Y Z A B C D E F G H I J K L M N O P Q R S T U

输入描述:
输入包括多组数据，每组数据一行，为收到的密文。
密文仅有空格和大写字母组成。

输出描述:
对应每一组数据，输出解密后的明文。

示例
输入
HELLO WORLD
SNHJ
输出
CZGGJ RJMGY
NICE

解题思路
将原字符分两部分转化，一部分F–Z，只需要将ASCII码对应减 5；另一部分 A–E，将ASCII 码对应加21 ，遇到空格直接跳过，即可完成密码的解读。
注意：输入有空格的字符串要用 getline接收。
*/
#include <iostream>
#include <string>

using namespace std;

string Change(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		//分别转化字母
		if (s[i] >= 'F'&&s[i] <= 'Z')
			s[i] -= 5;
		else if (s[i] >= 'A'&&s[i] <= 'E')  
			s[i] += 21;
			// 遇到空格直接跳过处理
		else
			continue;
	}
	return s;
}

int main()
{
	string s;
	//有空格的字符串要用getline 接收
	while (getline(cin,s))
	{
		string s1 = Change(s);
		cout << s1<<endl;
	}
	system("pause");
	return 0;
}

