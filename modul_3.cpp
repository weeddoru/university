//Знайти кількість додатніх і кількість від'ємних елементів.
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

    int positiveCount = 0; 
    int negativeCount = 0; 

    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n; ++i) {
        double num;
        cin >> num;

        if (num > 0)
            positiveCount++;
        else if (num < 0)
            negativeCount++;
    }

    cout << "Number of positive elements: " << positiveCount << endl;
    cout << "Number of negative elements: " << negativeCount << endl;

    return 0;
}
