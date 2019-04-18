// Prescribed by zubquzaini
#include<iostream>
#include<conio.h>
using namespace std;

int main() {

    const int rSize = 3;
    const int cSize = 5;            //Sarah                 //Hanif                 //Adam
    double mile[rSize][cSize] =  {{6.5,6.0,5.5,4.5,6.0}, {5.5,5.0,4.5,6.5,7.5}, {9.5,6.5,5.5,5.5,8.0}};
    double shortestMile = mile[1][0], longestMile = mile[0][3];

    for(int x=0; x<5; x++) {
    
            if(mile[1][x] < shortestMile) {
                          shortestMile = mile[1][x];
            } 
    }
    
    cout << "Shortest mile of second runner is " << shortestMile << endl << endl;
    
    for(int x=0; x<3; x++) {
            
            if(mile[x][3] > longestMile) {
                          longestMile = mile[x][3];
            }
    }
    
    cout << "Longest mile of day 4 is " << longestMile << endl << endl;
    
    cout << "Total number of miles of each day" << endl;
    for(int x=0; x<5; x++) {
            
            double sum = 0;
            
            for(int i=0; i<3; i++) {
                    sum += mile[i][x];
            }
            cout << "Day " << x+1 << " is " << sum << endl;
    } cout << endl;
    
    cout << "Total number of miles of each runner" << endl;
    for(int x=0; x<3; x++) {
            
            double sum = 0, average = 0;
            
            for(int i=0; i<5; i++) {
                    sum += mile[x][i];
            }
            
            average = sum/5;
            
            cout << "Runner " << x+1 << " is " << sum << endl;
            cout << "The average is " << average << endl;
    } cout << endl;    

    for(int x=0; x<3; x++) {
            
            double longestMile = mile[x][0];
            for(int i=0; i<5; i++) {
                    
                    if(mile[x][i] > longestMile) {
                                    longestMile = mile[x][i];
                    }
                    
            }
            
            cout << "Longest mile for runner " << x+1 << " is " << longestMile << endl; 
    } cout << endl;
    
    for(int x=0; x<5; x++) {
            
            double shortestMile = mile[0][x], d=1;
            
            for(int i=0; i<3; i++) {
                    
                    if(mile[i][x] < shortestMile) {
                                  shortestMile = mile[i][x];
                    }
                    
            }
            
            cout << "Shortest mile for each day " << x+1 << " is " << shortestMile << endl; 
            d++;
    }
    

     
    
      getch();
      return 0;      
}














