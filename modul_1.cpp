//У кожному варіанті дано двовимірний масив а[m][n] елементів (m стрічок,
//n стовпчиків). Cтворити, відлагодити та протестувати програму для розв’язування задачі.
//14.1.Із клавіатури вводиться п'ять цілих чисел. Визначити кількість
//парних чисел та кількість чисел, кратних 3.
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    if (m <= 0 || n <= 0) {
        cout << "Incorrect array size!" << endl;
        return 0;
    }

    int** a = new int*[m];
    for (int i = 0; i < m; ++i)
        a[i] = new int[n];

    int evenCount = 0;
    int multipleOf3Count = 0;

    cout << "\nEnter the elements of the array:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> a[i][j];

            if (a[i][j] % 2 == 0)
                evenCount++;
            if (a[i][j] % 3 == 0)
                multipleOf3Count++;
        }
    }

    cout << "\nNumber of even numbers: " << evenCount << endl;
    cout << "Number of numbers that are multiples of 3: " << multipleOf3Count << endl;

    for (int i = 0; i < m; ++i)
        delete[] a[i];
    delete[] a;

    return 0;
}
