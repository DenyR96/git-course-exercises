#include <iostream>
using namespace std;

void insert_number(int& num1, int& num2)
{
   cin >> num1 >> num2;
}

int main()
{
   int num1, num2;

   cout << "Insert two numbers: ";
   insert_number(num1, num2);
   
   cout << "Sum: " << num1 + num2 << endl;
   cout << "Difference: " << num1 - num2 << endl;
   cout << "Multiplication: " << num1 * num2 << endl;
   cout << "Division: " << num1 / num2 << endl;

   return 0;
}
