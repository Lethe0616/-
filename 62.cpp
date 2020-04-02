#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
	string line;
	while (getline(cin, line)) //第一次的输入抓到line里
	{
		vector<string> names; //names里存放所有的数据
		size_t pos = 0;
		//位置如果大于等于了长度，那么证明找完了，双引号的情况从这里跳出
		while (pos < line.length())
		{
			if (line[pos] == '\"') //找到双引号要处理双引号内部
			{
				size_t end = line.find("\"", pos + 1);
				//截取出来放到names里
				names.push_back(line.substr(pos + 1, end - pos - 1));
				//substr函数主要功能是复制子字符串，要求从指定位置开始，并具有指定的长度。第一个参数是子字符串的起始位置。第二个参数是复制的字符数目。
				pos = end + 2;//跳掉后面的双引号和逗号
			}
			else
			{
				size_t end = line.find(",", pos + 1);
				//找不到逗号证明这是最后一个字符串了，直接存了这个字符串后跳出
				if (end == -1)
				{
					names.push_back(line.substr(pos, line.size() - pos));
					break;
				}
				names.push_back(line.substr(pos, end - pos));
				pos = end + 1; //跳掉后面的逗号
			}
		}
		getline(cin, line);
		if (names.end() == find(names.begin(), names.end(), line))
			//find函数是在两个迭代器中间查找，前两个参数分别是起始位置和结束位置，最后一个参数是要找的值。
			//找到了返回对应迭代器，找不到就返回区间末尾的位置。本例中是end()。
		{
			printf("Important!\n"); //没找到
		}
		else
		{
			printf("Ignore\n"); //找到了
		}
	}
	return 0;
}
