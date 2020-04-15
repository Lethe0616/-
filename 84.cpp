class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        // 哈希表存储某个数出现的次数 
        map<int, int> m;//第一个类型的键类型，第二个是值类型。这里表示的是：键是int型，值度的类型也是int型的map容器。
        for (int i = 0; i < numbers.size(); ++i) {
            m[numbers[i]]+=1;
            if(m[numbers[i]]>numbers.size()/2)
                return numbers[i];
        }
        return 0;
    }
};


