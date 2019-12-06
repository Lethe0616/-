/*
给定一个长度不小于2的数组arr。 写一个函数调整arr，使arr中要么所有的偶数位上都是偶数，要么所有的奇数位上都是奇数上。 要求：如果数组长度为N，时间复杂度请达到O(N)，额外空间复杂度请达到O(1),下标0,2,4,6...算作偶数位,下标1,3,5,7...算作奇数位，例如[1,2,3,4]调整为[2,1,4,3]即可
*/

public class Solution {
    /**
     *  奇数位上都是奇数或者偶数位上都是偶数
     *  输入：数组arr，长度大于2
     *  将arr调整成奇数位上都是奇数或者偶数位上都是偶数
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
