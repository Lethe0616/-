class MaxGap {
public:
    int findMaxGap(vector<int> A, int n) {
        int lmax = A[0];
        for(int i = 0; i < n; i++)
            lmax = max(lmax , A[i]);
        return max(lmax - A[0], lmax - A[n-1]);//lmax - A[0]:�������Ҽ���lmax - A[n-1]�������������
    }
};

