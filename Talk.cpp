#include <iostream>

using namespace std;

int main(){
    string word;
    int n = 0;

    while(n < 5){
        cout<< "(TOM) - Listening... "<< endl;
        cout<< "(YOU) - ";
        cin>> word;

        cout<< "(TOM) - " + word <<endl;
        n += 1;
    }
    

    return 0;

}