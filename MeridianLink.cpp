#include <iostream>

using namespace std;

int main(){
    for (int i = 1; i <= 100; i++){
        cout << i << "\t";
        if (i % 3 == 0){
            cout << "Meridian";
        }
        if(i % 5 == 0){
            cout << "Link";
        }
        cout << endl;
    }
}