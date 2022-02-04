#include "std_lib_facilities.h"

int main()
{
    double input = 0;
    string strinput = "";
    double smallest = 0;
    double largest = 0;
    double tiny = 1.0/10000000;
    double larger = 0.0;
    double smaller = 0.0;
    vector<double>numbers;
    int i = 0;
    while(cin >> input){
        numbers.push_back(input);
        sort(numbers.begin(), numbers.end());

        cout << input;
        if( input == numbers[numbers.size() - 1]){
            cout << " largest so far! \n";
        } else if(input == numbers[0]){
            cout << " smallest so far! \n";
        }
    } 

    }