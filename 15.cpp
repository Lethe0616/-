//题目描述
写一个函数，求两个整数之和，要求在函数体内不得使用+、-、*、/四则运算符号。

public class Solution {
    public int Add(int num1,int num2) {
        // num1 为进位
        while(num1 != 0) //进位为0 时跳出循环
        {
            int sum = (num1 ^ num2); //不考虑进位，相加时直接异或
            int carryBit = (num1 & num2)<< 1;  //carryBit保存两个加数的进位
            num2 = sum;
            num1 = carryBit;
        }
        return num2;
    }
}

