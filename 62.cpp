#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
	string line;
	while (getline(cin, line)) //��һ�ε�����ץ��line��
	{
		vector<string> names; //names�������е�����
		size_t pos = 0;
		//λ��������ڵ����˳��ȣ���ô֤�������ˣ�˫���ŵ��������������
		while (pos < line.length())
		{
			if (line[pos] == '\"') //�ҵ�˫����Ҫ����˫�����ڲ�
			{
				size_t end = line.find("\"", pos + 1);
				//��ȡ�����ŵ�names��
				names.push_back(line.substr(pos + 1, end - pos - 1));
				//substr������Ҫ�����Ǹ������ַ�����Ҫ���ָ��λ�ÿ�ʼ��������ָ���ĳ��ȡ���һ�����������ַ�������ʼλ�á��ڶ��������Ǹ��Ƶ��ַ���Ŀ��
				pos = end + 2;//���������˫���źͶ���
			}
			else
			{
				size_t end = line.find(",", pos + 1);
				//�Ҳ�������֤���������һ���ַ����ˣ�ֱ�Ӵ�������ַ���������
				if (end == -1)
				{
					names.push_back(line.substr(pos, line.size() - pos));
					break;
				}
				names.push_back(line.substr(pos, end - pos));
				pos = end + 1; //��������Ķ���
			}
		}
		getline(cin, line);
		if (names.end() == find(names.begin(), names.end(), line))
			//find�������������������м���ң�ǰ���������ֱ�����ʼλ�úͽ���λ�ã����һ��������Ҫ�ҵ�ֵ��
			//�ҵ��˷��ض�Ӧ���������Ҳ����ͷ�������ĩβ��λ�á���������end()��
		{
			printf("Important!\n"); //û�ҵ�
		}
		else
		{
			printf("Ignore\n"); //�ҵ���
		}
	}
	return 0;
}
