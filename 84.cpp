class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        // ��ϣ��洢ĳ�������ֵĴ��� 
        map<int, int> m;//��һ�����͵ļ����ͣ��ڶ�����ֵ���͡������ʾ���ǣ�����int�ͣ�ֵ�ȵ�����Ҳ��int�͵�map������
        for (int i = 0; i < numbers.size(); ++i) {
            m[numbers[i]]+=1;
            if(m[numbers[i]]>numbers.size()/2)
                return numbers[i];
        }
        return 0;
    }
};


