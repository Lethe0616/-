/*
����һ�����Ȳ�С��2������arr�� дһ����������arr��ʹarr��Ҫô���е�ż��λ�϶���ż����Ҫô���е�����λ�϶��������ϡ� Ҫ��������鳤��ΪN��ʱ�临�Ӷ���ﵽO(N)������ռ临�Ӷ���ﵽO(1),�±�0,2,4,6...����ż��λ,�±�1,3,5,7...��������λ������[1,2,3,4]����Ϊ[2,1,4,3]����
*/

public class Solution {
    /**
     *  ����λ�϶�����������ż��λ�϶���ż��
     *  ���룺����arr�����ȴ���2
     *  ��arr����������λ�϶�����������ż��λ�϶���ż��
     */
        public void oddInOddEvenInEven(int[] arr) {
        int len = arr.length;
        if (len <= 2) {
            return;
        }
        int even = 0;
        int odd = 1;
        while (even < len && odd < len) {
            if (arr[even] % 2 != 0)
            {
                odd = findEven(arr, odd);
                if (odd < len) {
                    int temp = arr[odd];
                    arr[odd] = arr[even];
                    arr[even] = temp;
 
                }
            }
            even += 2;
        }
 
 
    }
 
    private int findEven(int[] arr, int odd) {
        for (int i = odd; i < arr.length; i+=2) {
            if (arr[i] % 2 == 0) {
                return i;
            }
        }
        return arr.length;
    }
}
