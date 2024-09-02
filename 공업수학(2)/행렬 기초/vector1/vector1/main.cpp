#include <stdio.h>
#include <vector>

using namespace std;

// ��� ��� �Լ�
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int elem : row) {
            printf("%d ", elem);
        }
        printf("\n");
    }
}

// ��� ���� �Լ�
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

// ��� ���� �Լ�
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

// ��� ���� �Լ�
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

// ��� transposition �Լ�
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

int main() {
    // ��� A ����
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // ��� B ����
    vector<vector<int>> B = {
        {7, 8, 9},
        {10, 11, 12}
    };

    printf("��� A:\n");
    printMatrix(A);

    printf("\n��� B:\n");
    printMatrix(B);

    // ��� ����
    printf("\n��� ���� ��� (A + B):\n");
    printMatrix(addMatrix(A, B));

    // ��� ����
    printf("\n��� ���� ��� (A - B):\n");
    printMatrix(subtractMatrix(A, B));

    // ��� ������ ���� ���ο� ��� C ����
    vector<vector<int>> C = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    printf("\n��� C (������):\n");
    printMatrix(C);

    // ��� ����
    printf("\n��� ���� ��� (A * C):\n");
    printMatrix(multiplyMatrix(A, C));

    // ��� transposition
    printf("\n��� A�� ��ġ ���:\n");
    printMatrix(transposeMatrix(A));

    return 0;
}