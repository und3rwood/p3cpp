#include "std_lib_facilities.h"

int main()
{
    double numInput = 0;
    string strInput = " ";
    string ft = "ft";
    string cm = "cm";
    string m = "m";
    string in = "in";
    
    double sum = 0;
    double conversion = 0;
    double smallest = 0;
    double largest = 0;
    double tiny = 1.0/10000000;
    double larger = 0.0;
    double smaller = 0.0;
    vector<double>numbers;
    int i = 0;

    while(cin >> numInput){
        
        cin >> strInput;
        if(strInput == ft){
            conversion = numInput*12*2.54; //convert to centimeters
        } else if(strInput == in){
            conversion = numInput*2.54;
        } else if(strInput == m){
            conversion = numInput*100;
        } else if(strInput == cm){
            conversion = numInput;
        } else {
            cout << "INVALID UNIT.\n";
        }
        sum += conversion;

        numbers.push_back(conversion);
        sort(numbers.begin(), numbers.end());

        if(conversion >= numbers[numbers.size() - 1]){
            cout << conversion << " cm. largest so far! \n";
            largest = conversion;
        } else if(conversion <= numbers[0]){
            cout << conversion << " cm. smallest so far! \n";
            smallest = conversion;
        }
    } 

    sort(numbers.begin(), numbers.end());

    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << '\n';
    }
    cout << "small " << smallest << '\n';
    cout << "large " << largest << '\n';
    cout << sum;
    keep_window_open();
    }