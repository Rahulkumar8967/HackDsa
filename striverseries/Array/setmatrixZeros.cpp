#include <bits/stdc++.h>
using namespace std;
// t.c -> O(2*n*m), s.c -> O(n)+ O(m)
class solution{
public:
    void setZeros(vector<vector<int>> &matrix) {
        int n = matrix.size();    // rows
        int m = matrix[0].size(); // cols
        vector<int> rows(n, 0);
        vector<int> cols(m, 0);

        // Input matrix using cin
 for (int i = 0; i < n; i++){
          for (int j = 0; j < m; j++){
                cin >> matrix[i][j];
    }
}
for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (matrix[i][j] == 0){
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }
 for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) {
         if (rows[i] || cols[j]) {
              matrix[i][j] = 0;
                }
            }
        }
    }
};

int main()
{
    int n, m;
    cout << "Enter the value of n and m ";
    cin >> n >> m;
    solution obj;
    // vector<vector<int>> matrix = { {1,2,3},{4,0,6},{7,8,9}};
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    obj.setZeros(matrix);
    for (const auto &row : matrix) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}
