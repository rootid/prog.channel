#include<iostream>
#include<vector>
#include<utility>
using namespace std;

struct Input {
    int monthNumber;
    float prob;
};

void getTrafficDaysAndLoss (Input input[],int len) {

    const int daysInMonths[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    const int trafficPenalty = 3;
    const int hourlyLoss = 2500;
    for (int i=0;i<len;i++) {
        int days = daysInMonths[input[i].monthNumber - 1] * input[i].prob;
        long incomeLoss = daysInMonths[input[i].monthNumber - 1] * input[i].prob * trafficPenalty * hourlyLoss ;
        cout << "# of days" << days << endl;
        cout << "Loss " << incomeLoss << endl;
    }

}

int main () {

    int numberOfCases = 0;
    cin >> numberOfCases;
    Input input[numberOfCases];
    
    for (int i=0;i<numberOfCases;i++) {
        cin >> input[i].monthNumber;
        cin >> input[i].prob;
    }
    getTrafficDaysAndLoss (input,numberOfCases);
}
