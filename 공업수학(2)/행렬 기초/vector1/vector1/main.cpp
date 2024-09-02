#include <stdio.h>
#include <vector>

using namespace std;

// Çà·Ä Ãâ·Â ÇÔ¼ö
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int elem : row) {
            printf("%d ", elem);
        }
        printf("\n");
    }
}

// Çà·Ä µ¡¼À ÇÔ¼ö
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

// Çà·Ä »¬¼À ÇÔ¼ö
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

// Çà·Ä °ö¼À ÇÔ¼ö
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

// Çà·Ä transposition ÇÔ¼ö
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
    // Çà·Ä A Á¤ÀÇ
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Çà·Ä B Á¤ÀÇ
    vector<vector<int>> B = {
        {7, 8, 9},
        {10, 11, 12}
    };

    printf("Çà·Ä A:\n");
    printMatrix(A);

    printf("\nÇà·Ä B:\n");
    printMatrix(B);

    // Çà·Ä µ¡¼À
    printf("\nÇà·Ä µ¡¼À °á°ú (A + B):\n");
    printMatrix(addMatrix(A, B));

    // Çà·Ä »¬¼À
    printf("\nÇà·Ä »¬¼À °á°ú (A - B):\n");
    printMatrix(subtractMatrix(A, B));

    // Çà·Ä °ö¼ÀÀ» À§ÇÑ »õ·Î¿î Çà·Ä C Á¤ÀÇ
    vector<vector<int>> C = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    printf("\nÇà·Ä C (°ö¼À¿ë):\n");
    printMatrix(C);

    // Çà·Ä °ö¼À
    printf("\nÇà·Ä °ö¼À °á°ú (A * C):\n");
    printMatrix(multiplyMatrix(A, C));

    // Çà·Ä transposition
    printf("\nÇà·Ä AÀÇ ÀüÄ¡ °á°ú:\n");
    printMatrix(transposeMatrix(A));

    return 0;
}