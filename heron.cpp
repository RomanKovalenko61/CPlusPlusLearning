#include <cmath>
#include <iostream>
#include <cmath>

double triangle_sq(int a, int b, int c);

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout.precision(2);
    std::cout << std::fixed << triangle_sq(a, b, c) << std::endl;
    return 0;
}

double triangle_sq(int a, int b, int c) {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
