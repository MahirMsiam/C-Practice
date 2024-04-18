#include <iostream>
#include <vector>

using namespace std;

// Function to display the Tic Tac Toe board
void displayBoard(const vector<vector<char>>& board) {
    cout << "  1   2   3" << endl;
    cout << "-------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << " | ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl << "-------------" << endl;
    }
}

// Function to check if a player has won
bool checkWin(const vector<vector<char>>& board, char player) {
    // Check rows
    for (const auto& row : board) {
        if (row[0] == player && row[1] == player && row[2] == player) {
            return true;
        }
    }

    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }

    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }

    return false;
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' ')); // Initialize an empty 3x3 board

    char currentPlayer = 'X';
    int row, col;

    cout << "Welcome to Tic Tac Toe!" << endl;
    cout << "Player 1: X" << endl;
    cout << "Player 2: O" << endl;
    cout << "To make a move, enter the row and column numbers (1-3)." << endl;



    return 0;
}