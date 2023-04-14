#include <iostream>
#include <vector>
#include <climits>
using namespace std;



void solve(vector<vector<int>> const &mat)
{
    if(mat.size() == 0){return ;}
    int M = mat.size();
    int N = mat[0].size();
    int S[M+1][N+1];


    for (int i = 0; i <= M; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            if (i == 0 || j == 0) {
                S[i][j] = 0;
            }
            else {
                S[i][j] = S[i-1][j] + S[i][j-1] - S[i-1][j-1] + mat[i-1][j-1];
            }
        }
    }

    int maxSum = INT_MIN;
    int rowStart, rowEnd, colStart, colEnd;


    for (int i = 0; i < M; i++)
    {
        for (int j = i; j < M; j++)
        {
            for (int m = 0; m < N; m++)
            {
                for (int n = m; n < N; n++)
                {

                    int submatrix_sum = S[j+1][n+1] - S[j+1][m] - S[i][n+1] + S[i][m];


                    if (submatrix_sum > maxSum)
                    {
                        maxSum = submatrix_sum;
                        rowStart = i;
                        rowEnd = j;
                        colStart = m;
                        colEnd = n;
                    }
                }
            }
        }
    }

    int s=0;
    for (int i = rowStart; i <= rowEnd; i++) {
        vector<int> row;
        for (int j = colStart; j <= colEnd; j++) {
           if(mat[i][j]<0){
            s+=abs(mat[i][j]);
           };
        }

    }

   cout<< maxSum<<endl<<maxSum+s<<endl;
}

int main()
{

      int n,m;
    cin>>n>>m;
    vector<vector<int> > matrix;
    for(int i=0;i<n;i++){
            vector<int> temp;
        for(int j=0;j<m;j++){
            int x;
    cin>>x;
    temp.push_back(x);
        }
        matrix.push_back(temp);
        temp.clear();
    }

   
solve(matrix);

    return 0;
}