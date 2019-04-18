// Buat terus dia start dengan 1 instead of 0
// Practically, it is a searching process
// Say kita nak cari sports type dengan name athele for all atheles

cout << "Sports type and althletes" << endl;
for(int x=1; x<6 ; x++) {

    for(int i=1; i<5; i++) {

        
        if(i=1) {
            sportsType = "swimming";
        } else if(i=2) {
            sportsType = "running";
        } else if(i=3) {
            sportsType = "push up";
        } else {
            sportsType = "cycling";
        }
        
        cout << "Athele " << i << " Sports type " << sportsType << endl; 
        
    }
}

// Given score, cari sports type
for(int x=1; x<6 ; x++) {

    for(int i=1; i<5; i++) {


        if(score[x][i] == 34) {

            if(i=1) {
                sportsType = "swimming";
            } else if(i=2) {
                sportsType = "running";
            } else if(i=3) {
                sportsType = "push up";
            } else {
                sportsType = "cycling";
            }
        }
    
        
        cout << "Athele " << i << " Sports type " << sportsType << endl; 
        
    }
}