/*
根据输入的日期，计算是这一年的第几天。。
详细描述：
输入某年某月某日，判断这一天是这一年的第几天？
接口设计及说明：
/*****************************************************************************
Description : 数据转换
Input Param : year 输入年份
Month 输入月份
Day 输入天

Output Param :
Return Value : 成功返回0，失败返回-1（如：数据错误）
***************************************************************************/
public static int iConverDateToDay(int year, int month, int day)
{
/ 在这里实现功能，将结果填入输入数组中/
return 0;
}

/*****************************************************************************
Description :
Input Param :

Output Param :
Return Value : 成功:返回outDay输出计算后的第几天;
失败:返回-1
*****************************************************************************/
public static int getOutDay()
{
return 0;
}
输入描述:
输入三行，分别是年，月，日
输出描述:
成功:返回outDay输出计算后的第几天;
失败:返回-1
示例1
输入 2012 12 31
输出 366
*/
#include
using namespace std;
int GetDay(int year, int month, int day){
int days[13] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };//这样写是为了方便
//你也可以在数组里面写每个月的天数不过还要加起来比较麻烦
int t = days[month - 1];
if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){//判断是否是闰年
if (month>2){//如果是闰年它也必须到了三月给二月加一才有必要
t += 1;
}
}
return t + day;
}
int main()
{
int year;
int month;
int day;
while (cin >> year >> month >> day){//这个是为了满足一直可以输入日期
int f = GetDay(year, month, day);
cout << f << endl;
}
return 0;
}

