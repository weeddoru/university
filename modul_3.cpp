//У кожному варіанті дано двовимірний масив а[m][n] елементів (m стрічок,
//n стовпчиків). Cтворити, відлагодити та протестувати програму для розв’язування задачі.
//14.3.Знайти кількість додатніх і кількість від'ємних елементів.
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    if (m <= 0 || n <= 0) {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    double** a = new double*[m];  
    for (int i = 0; i < m; ++i)
        a[i] = new double[n];

    double sum = 0;
    int total = 0;

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> a[i][j];
            sum += a[i][j];
            total++;
        }
    }

    double avg = sum / total; 

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j] == 0)
                a[i][j] = avg;
        }
    }

    cout << "Array after replacing zeros:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < m; ++i)
        delete[] a[i];
    delete[] a;

    return 0;
}
