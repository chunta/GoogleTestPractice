#include <iostream>
#include "TaxCalculator.h"

using namespace std;

TaxCalculator::TaxCalculator() {
}

float TaxCalculator::tax(int totalIncome) {
    return totalIncome * basicRate;
}