// Prescribed bu zubquzaini
#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    
    int num[3][4] = {{7,10,9,8}, {3,10,1,2}, {5,10,2,5}}, sum = 0, avrg =0, odd =0, even = 0, high = -99, low[4] = {99,99,99,99}, sumLow = 0;
    
    // 1. Ask user to enter positive integers
/*    cout << "Enter positive integers: " << endl; 
    
    // row
    for(int x=0; x<3; x++) {
            
            // column
            for(int i=0; i<4; i++) {
            
            cin >> num[x][i];
            }
            
    }
*/    
    // 1.5 Display the array
    // row
    cout << endl << "Array entered: " << endl;
    for(int x=0; x<3; x++) {
            
            // column
            for(int i=0; i<4; i++) {
            
            cout << num[x][i] << " ";
            
            }
            
            cout << endl;
            
    }
    
    // 2. Total of all numbers in array
    for(int x=0; x<3; x++) {
        
        for(int i=0; i<4; i++) {
        
                sum = sum + num[x][i];
        
        }
    }
    
    cout << "\nTotal numbers in the array is " << sum << endl << endl;
    
    // 3. Average of all numbers
    avrg = sum / 12;
    cout << "Average of all numbers is " << avrg << endl << endl;
    
    // 4. Count odd and even numbers
    for(int x=0; x<3; x++) {
        
        for(int i=0; i<4; i++) {
        
                if(num[x][i] % 2 == 0) {
                       even++;
                } else {
                       odd++;
                }
        
        }
    }
    
    cout << "\nAmount of odd numbers : " << odd << endl;
    cout << "Amount of even numbers: " << even << endl;
    
    // 5. Highest number is row 2
    for(int x=0; x<3; x++) {
    
        for(int i=0; i<4; i++) {
        
                if(num [1][i] > high) {
                       high = num[1][i];
                }
        
        }
    } 
    
    cout << "Highest number in row 2 is " << high << endl;
    
    // 6. Lowest number in each column
    for(int x=0; x<4; x++) {
    
        for(int i=0; i<3; i++) {

                if(num[i][x] < low[x]) {
                             low[x] = num[i][x];
                }
        }
    }
    
    
    
    
    cout << "Lowest number in each column\n";
    for(int x=0; x<4; x++) {
            cout << "Column " << x << ": is " << low[x] << endl;
            sumLow = sumLow + low[x];
    }
    
    cout << "\nTotal of lowest number is " << sumLow << endl;
     
    getch();
    return 0;

}
