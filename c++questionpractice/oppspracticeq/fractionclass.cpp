//simple oops code containing copy constructor.
#include <iostream>
using namespace std;
class fraction {
private:
    int numerator;
    int denominator;
public:
    fraction(int numerator, int denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void print() {
        cout << this->numerator << "/" << this->denominator << endl;
    }
    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
    void simplify() {
        int common = gcd(this->numerator, this->denominator);
        this->numerator /= common;
        this->denominator /= common;
    }
    void add(fraction const &f2) {
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;
        int num = x * this->numerator + y * f2.numerator;
        this->numerator = num;
        this->denominator = lcm;
        simplify();
    }
};
int main() {
    fraction f1(10, 2);
    fraction f2(15, 4);
    f1.add(f2);
    f1.print();
    f2.print();
    return 0;
}
