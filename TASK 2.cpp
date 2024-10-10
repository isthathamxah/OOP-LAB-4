#include<iostream>
#include<string>

using namespace std;

class Factorial {
private:
    int n;
    int fact;
public:
    Factorial(int num) {
        n = num;
        fact = 1;  
    }
    friend int fact(Factorial);
};

int fact(Factorial f) {
    if (f.n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    if (f.n == 0) {
        f.fact = 1;  
    }
    else {
        for (int i = 1; i <= f.n; i++) {
            f.fact *= i;  
        }
    }
    return f.fact;  
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;  

    Factorial f(num);  
    cout << "Factorial of " << num << " = " << fact(f) << endl;
    return 0;
}
