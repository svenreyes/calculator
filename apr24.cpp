// Sven Reyes
// CSCI 1010 Section 1
// Assignment 3_20
// calculator 2
#include <cmath>
#include <iostream>

using namespace std;
double average (int a, int b, int c)
{
    double average = (a + b + c) / 3.0;
    return average;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    double avg = average(a, b, c);

}