/*n×n Grid with Live/Dead Enemies*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "\nEnter Grid Size: "; // TAKING SIZE OF GRID
    cin >> n;

    int **grid = new int *[n]; // ALLOCATING DYNAMIC MEMORY

    cout << "Enter grid Elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        grid[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
        // cout << endl;
    }

    // INITIAL GRID
    cout << "\nInitial Grid: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    int total = n * n, hits = 0;
    // CHECKING FOR LIVE ENEMIES
    while (total > 0)
    {
        int row, col;
        cout << "Enter Row and Column to Attack: ";
        cin >> row >> col;

        if (grid[row][col] == 1)
        {
            grid[row][col] = 0;
            hits++;
            total--;
        }
    }

    // OUTPUT
    cout << "\nTotal hits: " << hits << endl;
    cout << "Updated Grid: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    // DEALLOCATING MEMORY
    for (int i = 0; i < n; i++)
    {
        delete[] grid[i];
    }
    delete[] grid;
    return 0;
}