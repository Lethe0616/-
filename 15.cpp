//��Ŀ����
дһ������������������֮�ͣ�Ҫ���ں������ڲ���ʹ��+��-��*��/����������š�

public class Solution {
    public int Add(int num1,int num2) {
        // num1 Ϊ��λ
        while(num1 != 0) //��λΪ0 ʱ����ѭ��
        {
            int sum = (num1 ^ num2); //�����ǽ�λ�����ʱֱ�����
            int carryBit = (num1 & num2)<< 1;  //carryBit�������������Ľ�λ
            num2 = sum;
            num1 = carryBit;
        }
        return num2;
    }
}

