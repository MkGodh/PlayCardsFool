#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;
int main() {

    cout << "Input two cards please: ";
    char first, second;
    cin >> first >> second;


    while (first != 'J' && first != 'Q' && first != 'K' && first != 'A' &&
        first != '0' && first != '6' && first != '7' && first != '8' && first != '9' &&
        second != 'J' && second != 'Q' && second != 'K' && second != 'A' &&
        second != '0' && second != '6' && second != '7' && second != '8' && second != '9') {
        cout << "Wrong input.Try again pls!\n";
        cin >> first >> second;
    }
    if (first == second) {
        cout << "Cards are equal!\n";
    }

    int firstCardValue = 0;
    if (first >= '6' && first <= '9') {
        firstCardValue = first - '0';
    }
    else if (first == 0) {
        firstCardValue = 10;
    }
    else if (first == 'J') {
        firstCardValue = 11;
    }
    else if (first == 'Q') {
        firstCardValue = 12;
    }
    else if (first == 'K') {
        firstCardValue = 13;
    }
    else if (first == 'A') {
        firstCardValue = 14;
    }

    int secondCardValue = 0;
    if (second >= '6' && second <= '9') {
        secondCardValue = second - '0';
    }
    else if (second == 0) {
        secondCardValue = 10;
    }
    else if (second == 'J') {
        secondCardValue = 11;
    }
    else if (second == 'Q') {
        secondCardValue = 12;
    }
    else if (second == 'K') {
        secondCardValue = 13;
    }
    else if (second == 'A') {
        secondCardValue = 14;
    }


    if (first == '6' && second == 'A') {
        cout << "First card is bigger!";
    }
    else if (first == 'A' && second == '6') {
        cout << "Second card is bigger!";
    }
    else if (firstCardValue > secondCardValue) {
        cout << "First card is bigger!\n";
    }
    else {
        cout << "Second card is bigger!\n";
    }



}