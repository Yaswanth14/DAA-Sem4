#include <bits/stdc++.h>
using namespace std;


bool isSafe(vector<string>board, int row, int col, int n)
{
    for(int i=0;i<n; i++)
    {
        // Check same column
        if(board[i][col] == 'Q') return false;
        // Check diagonals
        if(row-i>=0 && col-i>=0 &&board[row-i][col-i]=='Q') return false;
        if(row-i>=0 && col+i>=0 && board[row-i][col+i]=='Q') return false;
    }
    return true;
}

void solve(vector<string>&board, int row, vector< vector <string> >&sols, int n)
{
    if(row==(board[0].size()))
    {
        sols.push_back(board);
        return;
    }

    for(int col=0; col<(board[0].size()); col++)
    {
        if(isSafe(board, row, col, n))
        {
            board[row][col] = 'Q';
            solve(board, row+1, sols, n);
            board[row][col] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>>sols;
    vector<string> board(n, string(n, '.'));
    solve(board, 0, sols, n);

    return sols;
}

int main()
{
    int n;
    cout<<"Enter size of board: ";
    cin>>n;
    vector<vector<string>>sols = solveNQueens(n);
     for(int i=0; i<sols.size(); i++)
     {
         cout<<"Solution "<<i+1<<":\n";
         for(int j = 0; j<sols[0].size(); j++) cout<<sols[i][j]<<"\n";
        cout<<"\n\n";
     }
}

