/*n×n Grid with Live/Dead Enemies*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "\nEnter Grid Size: "; // TAKING SIZE OF GRID
    cin >> n;

    int **grid = new int *[n]; // ALLOCATING DYNAMIC MEMORY

    cout << "Enter grid Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        grid[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    // INITIAL GRID
    cout << "\n----------------------" << endl;
    cout << "Initial Grid: \n";
    cout << "------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------------" << endl;

    // HITTING ENEMIES
    int total_hits = 0, attack_Index;
    while (total_hits != n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "Enter Index to Attack Enemy: ";
                cin >> attack_Index[j][i];
            }
        }
    }

    // OUTPUT
    cout << "\n----------------------" << endl;
    cout << "Updated Grid: " << endl;
    cout << "----------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------------" << endl;
    // DEALLOCATING MEMORY
    for (int i = 0; i < n; i++)
    {
        delete[] grid[i];
    }
    delete[] grid;
    return 0;
}