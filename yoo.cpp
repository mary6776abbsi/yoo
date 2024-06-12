#include <iostream>

using namespace std;

bool isPrime(int number) {
    // بررسی اول بودن عدد
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;

    // ورودی از کاربر گرفته می‌شود
    cout << "Enter a positive integer: ";
    cin >> number;

    // بررسی آیا عدد اول است یا خیر و چاپ نتیجه
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    }
    else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
