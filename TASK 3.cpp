#include<iostream>
#include<string>
using namespace std;

class Alpha {
private:
    double num_1;
    double num_2;
public:
    Alpha(double n1, double n2) {
        this->num_1 = n1;
        this->num_2 = n2;
    }
    friend double sum(Alpha);
    friend double sub(Alpha);
    friend double mul(Alpha);
    friend double div(Alpha);
};
double sum(Alpha a) {
    return a.num_1 + a.num_2;
}
double sub(Alpha a) {
    return a.num_1 - a.num_2;
}
double mul(Alpha a) {
    return a.num_1 * a.num_2;
}
double div(Alpha a) {
    return a.num_1 / a.num_2;
}
int main() {
    double num1;
    cout << "Enter First Number : ";
    cin >> num1;  
    double num2;
    cout << "Enter Second Number : ";
    cin >> num2;
    
    Alpha A(num1, num2);
    cout << "Addition is : " << sum(A) << endl;
    cout << "Substraction is : " << sub(A) << endl;
    cout << "Product is : " << mul(A) << endl;
    cout << "Divison is : " << div(A) << endl;
    return 0;
}
