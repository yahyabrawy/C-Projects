#include <iostream>
using namespace std;

int main() {
    float grade;
    cout << "enter your grade: ";
    cin >> grade;
    if (cin.fail()){
        cout << "invalid input \n";
    }
    else{
        if (grade >= 90 && grade <= 100){
            cout << "your grade is: A+";
        } else if (grade >= 80 && grade < 90){
            cout << "your grade is: B+";
        } else if (grade >= 70 && grade < 80){
            cout << "your grade is: C+";
        } else if (grade >= 60 && grade < 70){
            cout << "your grade is: D+";
        } else if (grade >= 50 && grade < 60){
            cout << "your grade is: D";
        } else if (grade < 50 && grade >= 0 ){
            cout << "your grade is: F";
        } else{
            cout << "invalid input";
        }
    }
    return 0;
}