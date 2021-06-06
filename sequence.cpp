#include <iostream>

using namespace std;

int main(){
    int N;
    cout << "Type in any number: ";
    cin >> N;
    int total = 0;
    for (int i = 1; i <= N; i++){
        if (i % 2 == 0){
            total = total - i;
        }
        else{
            total = total + i;
        }
    }
    cout << "Answer: " << total << endl;
}