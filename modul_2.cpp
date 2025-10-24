//Замінити кожен нульовий елемент масиву a(a[1], a[2], ..., a[n]) середнім арифметичним усіх елементів масиву
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of array elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Incorrect number of elements!" << endl;
        return 0;
    }

    double* a = new double[n];
    double sum = 0;

    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }

    double avg = sum / n;

    for (int i = 0; i < n; ++i) {
        if (a[i] == 0)
            a[i] = avg;
    }

    cout << "Array after replacing zeros: ";
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";

    cout << endl;
    delete[] a; 
    return 0;
}
