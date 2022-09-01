#include <iostream>

using namespace std;

int main(){
    string word;

    while(word != "exit"){
        cout<< "(TOM) - Listening... "<< endl;
        cout<< "(YOU) - ";
        cin>> word;

        cout<< "(TOM) - " + word <<endl;
    }  

    return 0;

}