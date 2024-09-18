#include<iostream>
using namespace std;

int main(){
    int shipCapacity, totalPeople;
    cin >> shipCapacity >> totalPeople;

    int totalRounds = totalPeople / shipCapacity;
    int remainingPeople = totalPeople % shipCapacity;

    if(remainingPeople != 0){
        totalRounds += 1;
    }

    cout << totalRounds << endl;

    return 0;
}