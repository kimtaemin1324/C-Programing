#include <stdio.h>
#include <vector>

using namespace std;

// 행렬 출력 함수
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int elem : row) {
            printf("%d ", elem);
        }
        printf("\n");
    }
}

// 행렬 덧셈 함수
vector<vector<int>> addMatrix(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int m = A.size();
    int n = A[0].size();
    vector<vector<int>> C(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    return C;
}

// 행렬 뺄셈 함수
vector<vector<int>> subtractMatrix(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int m = A.size();
    int n = A[0].size();
    vector<vector<int>> C(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    return C;
}

// 행렬 곱셈 함수
vector<vector<int>> multiplyMatrix(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int m = A.size();
    int n = A[0].size();
    int p = B[0].size();

    vector<vector<int>> C(m, vector<int>(p, 0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return C;
}

// 행렬 transposition 함수
vector<vector<int>> transposeMatrix(const vector<vector<int>>& A) {
    int m = A.size();
    int n = A[0].size();
    vector<vector<int>> T(n, vector<int>(m, 0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            T[j][i] = A[i][j];
        }
    }

    return T;
}

// 3x3 행렬식 계산 함수
int determinant3x3(const vector<vector<int>>& matrix) {
    return matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
           matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
           matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
}

int main() {
    // 행렬 A 정의
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // 행렬 B 정의
    vector<vector<int>> B = {
        {7, 8, 9},
        {10, 11, 12}
    };

    printf("행렬 A:\n");
    printMatrix(A);

    printf("\n행렬 B:\n");
    printMatrix(B);

    // 행렬 덧셈
    printf("\n행렬 덧셈 결과 (A + B):\n");
    printMatrix(addMatrix(A, B));

    // 행렬 뺄셈
    printf("\n행렬 뺄셈 결과 (A - B):\n");
    printMatrix(subtractMatrix(A, B));

    // 행렬 곱셈을 위한 새로운 행렬 C 정의
    vector<vector<int>> C = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    printf("\n행렬 C (곱셈용):\n");
    printMatrix(C);

    // 행렬 곱셈
    printf("\n행렬 곱셈 결과 (A * C):\n");
    printMatrix(multiplyMatrix(A, C));

    // 행렬 transposition
    printf("\n행렬 A의 전치 결과:\n");
    printMatrix(transposeMatrix(A));

    // 3x3 행렬 정의
    vector<vector<int>> D = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("\n행렬 D (3x3 행렬):\n");
    printMatrix(D);

    // 3x3 행렬식 계산
    printf("\n행렬 D의 행렬식 결과: %d\n", determinant3x3(D));

    return 0;
}
