#include <iostream>
using namespace std;
int main()
{
double var1, var2;
int choice1;
char doitagain;

do {
    cout << "Enter value for var1: ";
    cin >> var1;

    cout << "Enter value for var2: ";
    cin >> var2;

    cout << var1 << endl;
    cout << var2 << endl;

    cout << "Pick what to do with these 2 variables\nOptions:\n1. addition\n2. subtraction\n3. multiplication\n4. division\n";
    cin >> choice1;

        if (choice1 == 1)
        cout << "The sum of these two variables are: " << var1 + var2;
        
        else if (choice1 == 2)
        cout << "The difference of these two variables are: " << var1 - var2;
        
        else if (choice1 == 3)
        cout << "The product of these two variables are: " << var1 * var2;
        
        else if (choice1 == 4)
        cout << "The quotient of these two variables are: " << var1 / var2;
  
        cout << "\nWant to run the program again? type y if yes ";
        cin >> doitagain;
}
        while (doitagain == 'y');
   
        
}        