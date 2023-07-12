#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "How many values would you like to sort?" << endl;
    int arrSize;
    int order;
    cin >> arrSize;
    int* values = new int[arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        cout << endl <<"Enter value number " << i+1 << endl;
        cin >> values[i];
    }
    cout << "Sort in:" << endl <<
    "1. Ascending order" << endl << 
    "2. Descending order" << endl; 
    cin >> order;
    cout << "Sorting..." << endl;
    for (int i = 0; i < arrSize; i++)
    {
        for (int x = 0; x < arrSize; x++)
        {
            if(values[x+1] > values[x]){
                int carrier = values[x];
                values[x] = values[x+1];
                values[x+1] = carrier;
            }
        }
    }
    if(order == 1){
        for (int i = 0; i < arrSize; i++){
            cout << values[i] << ", ";
        }
    } else {
        for (int i = arrSize - 1; i >= 0; i--){
            cout << values[i] << ", ";
        }
    }

    return 0;
}