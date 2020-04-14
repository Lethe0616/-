#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str1[10001] = {0}, str2[10001] = {0};//将数组内的值全部赋值为0
    while (cin >> str1 >> str2){
        int table[26] = {0};
        //统计字符串1中各个字母出现的次数
        for (int i = (int)strlen(str1); i >= 0; --i) {
            table[str1[i] - 'A'] += 1;//减去第一个字母方便数组统计
        }
        bool flag = true;
        //逐一减去字符串2中各个字符出现的次数
        for (int i = (int)strlen(str2); i >= 0; --i) {
            if (--table[str2[i] - 'A'] < 0) {
                //出现负数，说明字符串2出现了字符串1中未出现的字符，或者数量比字符串1的少
                flag = false;
                break;
            }
        }
        cout << (flag ? "Yes" : "No") << endl;
    }
    return 0;
}

