// write your code here cpp
#include <bits/stdc++.h>

using namespace std;

// �����ж�
int LeapYear(int year) {
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

// ��������
int FullYear(int year) {
    return 2 * 31 + 1 * 28 + 1 * 31 + 2 * 30 + 1 * 31 + 2 * 30 + 1 * 31 
         + 2 * 31 + 2 * 30 + 2 * 31 + 1 * 30 + 2 * 31 + LeapYear(year);
}

// �жϸ����Ƿ�Ϊ������
bool PrimeMonth(int n) {
    return n == 2 || n == 3 || n == 5 || n == 7 || n == 11;
}

// ��⵱��Ϊһ��ڼ���
int DaysYear(int year, int month, int day) {
    if (!PrimeMonth(month))
        day *= 2;
    while (-- month) {
         switch(month) {            
             case 1:            
             case 8:            
             case 10:            
             case 12:                
                 day += 62;                
                 break;            
             case 3:            
             case 5:            
             case 7:                
                 day += 31;                
                 break;            
             case 4:            
             case 6:            
             case 9:                
                 day += 60;                
                 break;            
             case 11:                
                 day += 30;                
                 break;            
             case 2:                
                 day += 28 + LeapYear(year);                
                 break;            
             default:;        
         }    
    }    
    return day; 
}

int main() {
    int year1, month1, day1, year2, month2, day2;
    int count = 0;
    while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2) {
        count = 0;
        // ����day1 - 1���ܳ���0�գ�����2��0�ռ�Ϊ1��31�գ���Ӱ����
        count += FullYear(year1) - DaysYear(year1, month1, day1 - 1);
        count += DaysYear(year2, month2, day2);
        if (year1 == year2) 
            count -= FullYear(year1);
        for (int i = year1 + 1; i < year2; ++i) 
            count += FullYear(i);
        cout << count << endl;
    }
    return 0;
}
