class Printer {
public:
    vector<int> clockwisePrint(vector<vector<int> > mat, int n, int m) {
        // write code here
       vector<int> ret;
       int x1 = 0, y1 = 0;      //���Ͻ�����
       int x2 = n - 1, y2 = m - 1;  //���½�����
       while(x1 <= x2 && y1 <= y2){
           for(int j = y1; j <= y2; j++)
               ret.push_back(mat[x1][j]);
           for(int i = x1 + 1; i < x2; i++)
               ret.push_back(mat[i][y2]);
           for(int j = y2; x1 < x2 && j >= y1; j--) //����Ϊһ���� y2=0
               ret.push_back(mat[x2][j]);
           for(int i = x2 - 1; y1 < y2 && i > x1; i--)//����Ϊһ���� x2=0
               ret.push_back(mat[i][y1]);
           x1++; y1++;
           x2--; y2--;
       }
       return ret;
    }
};

