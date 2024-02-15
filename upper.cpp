// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 4A
// Write a program upper.cpp that prints the top-right half of a square, given the side length.

#include <iostream>
using namespace std;

int main(){
    int side_length; // declared side length

   
    cout << "Input side length: ";
    cin >> side_length; // User inputs side length

    cout << endl;

    for (int row = side_length; row >= 1; row--) { // for each row
        for (int col = 0; col <= side_length - row; col++){ // for each column
                    cout << " "; // for each column of the box with side legths prints *
        }
        for (int col = 1; col <= row; col++){ // for each column of the box with side legths
                    cout << "*"; // for each column of the box with side legths

        }
        cout << endl;
    }
        
    
}

   