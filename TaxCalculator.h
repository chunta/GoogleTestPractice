#include <iostream>

using namespace std;

class TaxCalculator {
    
public:
    TaxCalculator();

    static constexpr float basicRate = 0.2;

    float tax(int totalIncome);
};