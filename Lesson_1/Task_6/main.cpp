#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter size of the tree: ";
    cin >> size;
    for (int row = 0; row < size; row++){
        for (int index = 0; index < row+size; index++) {
            if(index > size-(row-2)){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int index = 0; index < size; index++) {
        if(index == size-1){
            cout << "*\n";
        } else {
            cout << " ";
        }
    }
    system("pause");
}
