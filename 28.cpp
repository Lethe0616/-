/*
�˿�����Ϸ���Ӧ�ö��Ƚ���Ϥ�ˣ�һ������54����ɣ���3~A��2��4�ţ�С��1�ţ�����1�š������С�����������ַ����ַ�����ʾ�����У�Сдjoker��ʾС������дJOKER��ʾ������:)

3 4 5 6 7 8 9 10 J Q K A 2 joker JOKER
���������ƣ�������֮���á�-�����ӣ�ÿ���Ƶ�ÿ�����Կո�ָ�����-������û�пո��磺4 4 4 4-joker JOKER
��Ƚ������ƴ�С������ϴ���ƣ���������ڱȽϹ�ϵ�����ERROR

��������
����ÿ���ƿ����Ǹ��ӣ����ӣ�˳�ӣ�����5�ţ���������ը�����ĸ����Ͷ����е�һ�֣���������������������뱣֤�����ƶ��ǺϷ��ģ�˳���Ѿ���С�������У�
����ը���Ͷ������Ժ������ƱȽ�֮�⣬�������͵���ֻ�ܸ���ͬ���͵Ĵ��ڱȽϹ�ϵ���磬���Ӹ����ӱȽϣ������������Ƚϣ��������ǲ���������磺�����Ӳ�ֳɸ��ӣ�
��С��������ƽʱ�˽�ĳ���������ͬ�����ӣ����ӣ������Ƚ������С��˳�ӱȽ���С�ƴ�С��ը������ǰ�����е��ƣ�ը��֮��Ƚ������С�������������ƣ�
����������Ʋ��������ȵ������

����ʾ��
����ը���Ͷ���֮�⣬��������ͬ���ͱȽϡ�
�����Ѿ���֤�Ϸ��ԣ����ü�������Ƿ��ǺϷ����ơ�
�����˳���Ѿ�������С����������˲�����������.

��������:
���������ƣ�������֮���á�-�����ӣ�ÿ���Ƶ�ÿ�����Կո�ָ�����-������û�пո���4 4 4 4-joker JOKER��


�������:
����������нϴ�����֣��������ӷ����˿���˳�򲻱䣬���Կո��������������ڱȽϹ�ϵ�����ERROR��

��������:
4 4 4 4-joker JOKER

�������:
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
	string s;	//������ַ���
	string s1, s2;
	getline(cin, s);
	s1 = s.substr(0, s.find('-'));	//��ߵ���
	s2 = s.substr(s.find('-') + 1);	//�ұߵ���
	int n1 = count(s1);				//����Ƶ�����
	int n2 = count(s2);				//�ұ��Ƶ�����
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
