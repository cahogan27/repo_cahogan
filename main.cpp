#include <iostream>

    using namespace std;

    int rec_fib(int x) {
        if ((x == 1) || (x == 0)) {
            return (x);
        } else {
            return (rec_fib(x-1) + rec_fib(x - 2));
        }
    }

    int iter_fib(int x) {
        int a = 0;
        int b = 1;
        int c;
        if (x == 0) {
            return a;
        }
        for (int i = 2; i <= x; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }

    //tested for 0, 1, 2, and several large positive integers. For negative numbers, it should print "1"
    int main() {
        int x= 0;
        cout << "Enter the number term to print: ";
        cin >> x;
        cout << rec_fib(x);
        return 0;
    }
