//Із клавіатури вводиться п'ять цілих чисел. Визначити кількість
//парних чисел та кількість чисел, кратних 3.
#include <iostream>
using namespace std;

int main() {
    int num;
    int evenCount = 0;     
    int multipleOf3Count = 0; 
    cout << "Enter 5 integers: " << endl;

    for (int i = 0; i < 5; ++i) {
        cin >> num;
        if (num % 2 == 0)
            evenCount++;
        if (num % 3 == 0)
            multipleOf3Count++;
    }

    cout << "Number of even numbers: " << evenCount << endl;
    cout << "Number of numbers that are multiples of 3: " << multipleOf3Count << endl;

    return 0;
}