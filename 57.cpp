/*
��Ŀ����
NowCoder�����ڳ���Σ�պ���ı�������Ϊ�����棬���״η��������룬���ھ��ӵ���Ϣ���ݡ��������Ǿ����е�һ�����٣���Ҫ�ѷ���������Ϣ�������������
������Ľ�����
��Ϣ���ܵİ취�ǣ�����Ϣԭ���е�ÿ����ĸ���ֱ��ø���ĸ֮��ĵ�5����ĸ�滻�����磺��Ϣԭ���е�ÿ����ĸA ���ֱ��滻����ĸF���������ַ��� �䣬������Ϣԭ�ĵ�������ĸ���Ǵ�д�ġ������е���ĸ��ԭ���е���ĸ��Ӧ��ϵ���¡�
������ĸ��A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
ԭ����ĸ��V W X Y Z A B C D E F G H I J K L M N O P Q R S T U

��������:
��������������ݣ�ÿ������һ�У�Ϊ�յ������ġ�
���Ľ��пո�ʹ�д��ĸ��ɡ�

�������:
��Ӧÿһ�����ݣ�������ܺ�����ġ�

ʾ��
����
HELLO WORLD
SNHJ
���
CZGGJ RJMGY
NICE

����˼·
��ԭ�ַ���������ת����һ����F�CZ��ֻ��Ҫ��ASCII���Ӧ�� 5����һ���� A�CE����ASCII ���Ӧ��21 �������ո�ֱ�������������������Ľ����
ע�⣺�����пո���ַ���Ҫ�� getline���ա�
*/
#include <iostream>
#include <string>

using namespace std;

string Change(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		//�ֱ�ת����ĸ
		if (s[i] >= 'F'&&s[i] <= 'Z')
			s[i] -= 5;
		else if (s[i] >= 'A'&&s[i] <= 'E')  
			s[i] += 21;
			// �����ո�ֱ����������
		else
			continue;
	}
	return s;
}

int main()
{
	string s;
	//�пո���ַ���Ҫ��getline ����
	while (getline(cin,s))
	{
		string s1 = Change(s);
		cout << s1<<endl;
	}
	system("pause");
	return 0;
}

