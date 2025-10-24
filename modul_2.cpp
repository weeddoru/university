//У кожному варіанті дано двовимірний масив а[m][n] елементів (m стрічок,
//n стовпчиків). Cтворити, відлагодити та протестувати програму для розв’язування задачі.
//14.2.Замінити кожен нульовий елемент масиву a(a[1], a[2], ..., a[n]) середнім арифметичним усіх елементів масиву
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

    double** a = new double*[m];
    for (int i = 0; i < m; ++i)
        a[i] = new double[n];

    double sum = 0;
    int totalCount = 0;

    cout << "\nEnter the elements of the array:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> a[i][j];
            sum += a[i][j];
            totalCount++;
        }
    }

    double avg = sum / totalCount; 

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j] == 0)
                a[i][j] = avg;
        }
    }

    cout << "\nArray after replacing zeros:" << endl;
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
