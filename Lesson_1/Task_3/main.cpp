#include <iostream>

using namespace std;

int main()
{
    int income;
    cout << "How much money do you make?" << endl;
    cin >> income;
    if(income < 1000){
        cout << "You need to work harder.";
    }
    if(income > 999){
        if (income > 999999){
            cout << " Wow, you are a millionaire!";
        }
        if(income < 1000000){
            cout << "Keep up the great work!";
        }
    }
    cout << " And you are awesome!\n";
    system("pause");
}
