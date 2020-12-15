#include<iostream>
using namespace std;

int main(){
    int integer ,even = 0 ,odd = 0;

    while (integer != 0){
    cout << "Enter an integer: ";
    cin >> integer;
    if(integer%2 == 0){
        even++;
    }else{
        odd++;
    }
    }
    

    


    cout << "#Even numbers = " << even - 1<< endl;
    cout << "#Odd numbers = " << odd << endl;
    return 0;
}
