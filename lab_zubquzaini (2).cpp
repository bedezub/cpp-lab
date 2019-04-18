#include <iostream>
#include <conio.h>
using namespace std;

void insertData(int [][3], int);
int findSum(int [][3], int);
void findMax(int [][3], int);



int main() {

    
    int num[2][3];
    
    insertData(num, 2);
    cout << "Sum of all numbers is " << findSum(num, 2) << endl << endl;
    findMax(num, 3);
    
    
    getch();
    return 0;
}

void insertData(int num[][3], int size) {

     cout << "Enter some numbers " << endl;
     for(int x=0; x<2; x++) {
             for(int i=0; i<3; i++) {
                  cin >> num[x][i];                
             }
     }
}

int findSum(int num[][3], int size) {
     
     int sum=0;
          
     for(int x=0; x<2; x++) {
             for(int i=0; i<3; i++) {
                  sum = sum + num[x][i];                
             }
     }
     
     return sum;
          
}

void findMax(int num[][3], int size) {

     
     
     for(int x=0; x<2; x++) {
             
             int max=num[x][0];
             
             for(int i=0; i<3; i++) {
                     
                     if(num[x][i] > max) {
                                  max = num[x][i];
                     }
                     
             }
             
             cout << "Maximum value for row " << x+1 << " is " << max << endl;
     }
     











}
