#include <iostream>
#include <cmath>
int main() {
    float x1;
    float x2;
    float y1;
    float y2;
    float formula;
    float midpointx;
    float midpointy;

    std::cout << "What is x1? ";
    std::cin >> x1;
    std::cout << "What is y1? ";
    std::cin >> y1;
    std::cout << "What is x2? ";
    std::cin >> x2;
    std::cout << "What is y2? ";
    std::cin >> y2;

    formula = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    midpointx = (x1 + x2) / 2;
    midpointy = (y1 + y2) / 2;
    std::cout << "The answer is " << formula << "\n";
    std::cout << "The midpoint is " << "(" << midpointx << ", " << midpointy << ")\n";
}