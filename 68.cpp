nclude<iostream>
#include<vector>
#include<iomanip>//setprecision����ͷ�ļ�
using namespace std;

int main() 
{
    int N,M,K;
    while(cin >> N >> M >> K){
        vector<vector<int> > id(N + 1,vector<int>(M+1,0));//��ά���顣������һ��vector������Ԫ������Ϊvector<int>����ʼ��Ϊ����N+1��vector<int>����ÿ��������һ���´�����vector<int>����Ŀ�����������´�����vector<int>���󱻳�ʼ��Ϊ����M+1��0��
        vector<vector<double> > bu(N+1,vector<double>(M+1,0.0));
        
        int x,y;
        while(K--){
            cin >> x >> y;
            id[x][y] = 1;//������ĵط�һ������Ģ��
        }
        
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= M; j++){
                if(id[i][j] == 1)
                    bu[i][j] = 0.0;//��Ģ���Ļ���û��ѡ��Ϊ0
                else if(i == 1 && j == 1)
                        bu[i][j] = 1.0;//�߽�ֻ��һ��·��ֻ��һ��ѡ��Ϊ1
                else
                        bu[i][j] = bu[i - 1][j]*(j == M ? 1.0:0.5)+bu[i][j - 1]*(i == N ? 1.0:0.5);
            }
        }
         cout << fixed << setprecision(2) << bu[N][M] <<endl;
    }
}

