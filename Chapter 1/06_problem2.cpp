#include <bits/stdc++.h>


using namespace std;

/*
A school has following rules for grading system :
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
*/

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks, try again!" << endl;

    } 
    else if (marks < 25) {
        cout << "Grade F: " << marks << endl;
    }
     else if (marks >= 25 && marks <= 44) {
        cout << "Grade E: " << marks << endl;
    }
     else if (marks >= 45 && marks <= 49) {
        cout << "Grade D: " << marks << endl;
    } 
    else if (marks >= 50 && marks <= 59) {
        cout << "Grade C: " << marks << endl;
    }
     else if (marks >= 60 && marks <= 79) {
        cout << "Grade B: " << marks << endl;
    } 

    else if (marks >= 80 && marks <= 100) {
        cout << "Grade A: Congratulations! " << marks << endl;
    

        if (marks >=90 || marks >=100) {    //FIXME: This is Nested Statement
            cout << "You did it now IIT is waiting for you !" << endl;
        }
    }
    return 0;
}
