#include<iostream>
using namespace std;

// void input(int num[], int);
// int calculateSum(int num[], int);
// void sortingNumber(int num[], int);

// int main() {

//     int num[9], sum;

//     input(num, 9);
//     sum = calculateSum(num, 9);
//     sortingNumber(num, 9);

//     cout << "\nTotal sum of the sequence is " << sum << endl;
//     cout << "\nArray content after sorting: " << endl;

//     for(int x=0; x<9; x++) {
//         cout << num[x] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// void input(int num[], int size) {

//     cout << "Enter a sequence of numbers" << endl;
//     for(int x=0; x<size; x++) {
        
//         cin >> num[x];
//     }
// }

// int calculateSum(int num[], int size) {
//     int sum = 0;

//     for(int x=0; x<size; x++) {
//         sum = sum + num[x];
//     }

//     return sum;
// }

// void sortingNumber(int num[], int size) {

//     int tempNum = 0;

//     for(int x=1; x<9; x++) {

//         for(int i=0; i<(9-x); i++) {
            
//             if(num[i] > num[i+1]) {
//                 tempNum = num[i+1];
//                 num[i+1] = num[i];
//                 num[i] = tempNum;
//             }
//         }
//     }
// }

int main() {

    string name[5], tempName, lowName;
    double score[5], sum = 0, avrg, lowScore;
    int tempScore = 0, count = 0, min = 99;
    
    for(int x=0; x<5; x++) {
        
        cout << "Enter your name: ";
        cin.ignore();
        getline(cin, name[x]);

        cout << "Enter your score: ";
        cin >> score[x];

    }

    cout << "\nName and score in descending order: " << endl;

    for(int x=1; x<5; x++) {

        for(int i=0; i<(5-x); i++) {
            
            if(name[i] < name[i+1]) {
                tempScore = score[i];
                tempName = name[i];
                score[i] = score[i+1];
                name[i] = name[i+1];
                score[i+1] = tempScore;
                name[i+1] = tempName;
            }
        }
    }

    for(int j=0; j<5; j++) {
        cout << "Name: " << name[j] << " " << "Score:" << score[j] << " " << endl;
    }

    for(int x=0; x<5; x++) {
        sum = sum + score[x];
    }

    avrg = sum / 5;
    cout << "\nAverage score is: " << avrg << endl;

    for(int i=0; i<5; i++) {
        
        if(score[i] > avrg) {
            count++;
        }

        if(score[i] < min) {
            lowScore = score[i];
            lowName = name[i];
        }
    }

    cout << "\nNumber of students above average is " << count << endl;
    cout << "Student with the lowest score is: \nName: " << lowName << "\nScore: " << lowScore << endl; 

    cout << endl;
    return 0;
}