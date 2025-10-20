#include <iostream>
using namespace std;

/*
Imagine you run a store selling 3 products, and you track their sales for 4 days.
At the end of the fourth day, you need to calculate the total sales for each product
to see which one performed best. Write a C++ program that takes sales data as input, 
and calculates the total sales for each product.
*/
// nested loops*
// variables i,j,k,l,m,n,o,p
int main()
{
    int sales [3][4];

    cout << "Enter sales for 3 products for 4 days: "<< "\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Product " << i + 1 <<", Day"<< j + 1 << ": "; // makes the loop start at 1 instead of 0
            cin >> sales[i][j];
        }
    }

    cout << "sum of all total sales for each product";
    for (int i = 0; i < 3; i++)
    {
        int total = 0;  // initialize the total 
        for (int j = 0; j < 4; j++)
        {
            total += sales[i][j];   // adds all the total sales inputed by the user
        }
        cout << "Product "<< i + 1 <<": "<< total << " units\n"; // makes the product loop start at 1
    }
    return 0;



}