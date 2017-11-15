#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    double mealCost, tip, tax, totalCost;
    int tipPercent, taxPercent, round;
    cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;
    tip = mealCost * tipPercent/100;
    tax = mealCost * taxPercent/100;
    totalCost = mealCost + tip + tax;
    cout << "The total meal cost is " <<nearbyint(totalCost) <<" dollars."<< endl;
    return 0;
}