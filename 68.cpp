nclude<iostream>
#include<vector>
#include<iomanip>//setprecision函数头文件
using namespace std;

int main() 
{
    int N,M,K;
    while(cin >> N >> M >> K){
        vector<vector<int> > id(N + 1,vector<int>(M+1,0));//二维数组。定义了一个vector容器，元素类型为vector<int>，初始化为包含N+1个vector<int>对象，每个对象都是一个新创立的vector<int>对象的拷贝，而这个新创立的vector<int>对象被初始化为包含M+1个0。
        vector<vector<double> > bu(N+1,vector<double>(M+1,0.0));
        
        int x,y;
        while(K--){
            cin >> x >> y;
            id[x][y] = 1;//给输入的地方一次种上蘑菇
        }
        
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= M; j++){
                if(id[i][j] == 1)
                    bu[i][j] = 0.0;//有蘑菇的话，没有选择。为0
                else if(i == 1 && j == 1)
                        bu[i][j] = 1.0;//边界只有一条路，只有一种选择。为1
                else
                        bu[i][j] = bu[i - 1][j]*(j == M ? 1.0:0.5)+bu[i][j - 1]*(i == N ? 1.0:0.5);
            }
        }
         cout << fixed << setprecision(2) << bu[N][M] <<endl;
    }
}

