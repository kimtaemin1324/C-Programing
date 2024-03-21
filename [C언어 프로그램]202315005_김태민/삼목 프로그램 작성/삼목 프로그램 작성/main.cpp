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
        cout << "플레이어 " << currentPlayer << "의 차례입니다. 행과 열을 입력하세요 (1-3): ";
        cin >> row >> col;

        if (isMoveValid(row, col)) {
            board[row - 1][col - 1] = currentPlayer;
            if (checkWin(currentPlayer)) {
                cout << "플레이어 " << currentPlayer << " 승리!" << endl;
                printBoard();
                return 0;
            }
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
        else {
            cout << "잘못된 위치입니다. 다시 시도하세요." << endl;
        }
    }

    cout << "비겼습니다!" << endl;
    printBoard();
    return 0;
}

