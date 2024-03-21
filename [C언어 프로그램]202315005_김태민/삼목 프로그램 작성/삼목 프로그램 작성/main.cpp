#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

char board[ROWS][COLS];

void initializeBoard() {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    for (int i = 0; i < ROWS; ++i) {
        cout << "| ";
        for (int j = 0; j < COLS; ++j) {
            cout << board[i][j] << " | ";
        }
        cout << endl;
    }
}

bool checkWin(char player)
{

    for (int i = 0; i < ROWS; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

bool isMoveValid(int row, int col) {
    return (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board[row - 1][col - 1] == ' ');
}

bool isGameOver() {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    initializeBoard(); 
    int row, col;
    char currentPlayer = 'X'; 

    while (!isGameOver()) {
        printBoard(); 
        cout << "�÷��̾� " << currentPlayer << "�� �����Դϴ�. ��� ���� �Է��ϼ��� (1-3): ";
        cin >> row >> col;

        if (isMoveValid(row, col)) {
            board[row - 1][col - 1] = currentPlayer;
            if (checkWin(currentPlayer)) {
                cout << "�÷��̾� " << currentPlayer << " �¸�!" << endl;
                printBoard();
                return 0;
            }
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
        else {
            cout << "�߸��� ��ġ�Դϴ�. �ٽ� �õ��ϼ���." << endl;
        }
    }

    cout << "�����ϴ�!" << endl;
    printBoard();
    return 0;
}

