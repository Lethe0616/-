/*
����һ���ַ����������һ���㷨���ж����Ƿ�Ϊһ���Ϸ������Ŵ���

����һ���ַ���A�����ĳ���n���뷵��һ��boolֵ�������Ƿ�Ϊһ���Ϸ������Ŵ���

����������

"(()())",6
���أ�true
����������

"()a()()",7
���أ�false
����������

"()(()()",7
���أ�false
*/
class Parenthesis {
public:
    bool chkParenthesis(string A, int n) {
        // write code here
     int l = 0; //��������
    for (int i = 0; i < A.length(); i++) 
    {
        char c = A[i];
        if (c == '(') {
            l++;
        } else if (c == ')') {
            if (l > 0) {
                l--;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
    return l == 0;
        }
};

