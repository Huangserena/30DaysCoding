#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
        
    // Declare second integer, double, and String variables.
    int j;
    double k;
    string t;
    // Read and save an integer, double, and String to your variables.
    cin >> j;
    cin >> k;
    getline(cin >> ws, t);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout << j +i << endl;
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1);
    cout << k + d<< endl;
    // Concatenate and print the String variables on a new line
    cout << s + t << endl;
    // The 's' variable above should be printed first.
    return 0;
}