#include <iostream>
using namespace std;
void compute_transpose(int **arr, int size)
{

    // FINDING TRANSPOSE
    cout << "\n------Tranpose of a Matrix------" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }
    cout << "---------------------------------" << endl;

    bool symmetric = true;
    for (int i = 0; i < size && symmetric; i++)
    {
        for (int j = 0; j < size & symmetric; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                symmetric = false;
            }
        }
    }
    if (symmetric)
    {
        cout << "\nMatrix is Symmetric" << endl;
    }
    else
    {
        cout << "\nMatrix is Not Symmetric" << endl;
    }
}
int main()
{
    int n;
    cout << "\nEnter the Size of Matrix(nxn): ";
    cin >> n;

    // ALLOCATING DYNAMIC MEMORY
    int **matrix = new int *[n];

    // TAKING INPUT
    cout << "Enter Elements in Matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // FINDING TRANSPOSE THROUGH FUNCTION
    compute_transpose(matrix, n);

    // DEALLOCATING DYNAMIC MEMORY
    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}