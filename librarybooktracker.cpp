#include <iostream>

using namespace std;

/*
You’re organizing books in a library arranged on multiple shelves and sections. 
You need to record how many books are placed on each shelf within each section.
Write a C++ program that takes the number of sections, number of shelves per section, 
and the number of books per shelf as input, then calculates and displays the total number of books in each section.
*/


int main()
{   int sections, shelves; // declare variables
    cout <<"Enter the number of sections: ";
    cin >> sections;
    cout <<"Enter the number of shelves: ";
    cin >> shelves;         
    //user input

    int books [sections][shelves];
    //declare indexes for sections and shelves to be used in a for loop

    for(int i = 0; i < sections; i++)   // for loop will repeat dependent on the users input
    {
        cout << "Enter number of books for section " << i + 1 << " on each shelf: ";
        for(int j = 0; j < shelves; j++)    // for loop will repeat dependent on the users input
            cin >> books[i][j];
        
    }   

    for(int i = 0; i < sections; i++) 
    {
        int total = 0;  // initialize placeholder for total value
        for(int j = 0; j < shelves; j++) 
            total += books[i][j];   // total value of the sections and shelves in the index
            cout <<"\n"<< "Total books in section "<< i+1 <<": "<< total;
        
    }   



}