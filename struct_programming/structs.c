#include <stdio.h>
#include <string.h>

struct Time {
  int hours;
  int minutes;
};

struct MovieScreening {
    char title[50];
    struct Time start_time;
    struct Time duration;
    char genre[30];
};

void multi (int px, int y);

void task1() {
    struct MovieScreening ks[5] = {
       { "movie_1", {13, 20}, {1, 20}, "baeviki" },
       { "movie_2", {12, 00}, {2, 25}, "baeviki" },
       { "movie_3", {14, 20}, {1, 43}, "drama" },
       { "movie_4", {15, 20}, {2, 30}, "baeviki" },
       { "movie_5", {16, 00}, {1, 24}, "comedy" },
    };
    

    for(int i=0; i<5; i++) {
        // 3)
        if(ks[i].duration.hours >= 2) {
            printf("%s %d:%d %s \n", ks[i].title, ks[i].start_time.hours, ks[i].start_time.minutes, ks[i].genre);
        }
        
        // 4)
        int endHours = ks[i].start_time.hours + ks[i].duration.hours;
        int endMinutes = ks[i].start_time.minutes + ks[i].duration.minutes;
        if(endHours > 24) {
            endHours = endHours - 24; 
        }
        if(endMinutes > 60) {
            endHours += 1;
            endMinutes = endMinutes - 60;
        }
        printf("%d:%d \n", endHours, endMinutes);
        

    }
    
    printf("Comedies: \n");
    for(int i=0; i<5; i++) {
        if(!strcmp(ks[i].genre, "comedy")) {
            printf("%s, %d:%d, %d:%d, %s. \n", ks[i].title, ks[i].start_time.hours, ks[i].start_time.minutes, ks[i].duration.hours, ks[i].duration.minutes, ks[i].genre);
        }
    }
}


void task2() {
    int x = 34, y = 6;
    multi(x, 367);
    multi(y, 91);
    printf("%d %d\n", x, y);
}

void multi (int base, int pow) {
    while (pow >= 10) {
        base = base * 10;
        pow = pow / 10;
    }
}

int main() {
    // task1();
    task2();
 
    return 0;
}
