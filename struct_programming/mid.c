#include <stdio.h>

void task1() {
    int num = 1;
    printf("enter number: \n");
    while(num != 0) {
        scanf("%d", &num);
        if(num > 9 && num < 100) {
            int reverse = (num % 10 * 10) + (num/10);
            printf("inputed number %d reversed %d \n", num, reverse); 
        } else {
            printf("inputed number %d \n", num);
        }
    }
}

void task2() {
    int a_arr[10] = {3,4,543,65,-12,7,21,-4,2,-24};
    int HighNumbers = 0;
    int b_arr[10];
    for(int i=1; i<9; i+=1) {
        // printf("number: %d, left: %d, right: %d \n", a_arr[i], a_arr[i-1], a_arr[i+1]);
        if(a_arr[i] > a_arr[i-1] && a_arr[i] > a_arr[i+1]) {
            b_arr[HighNumbers] = a_arr[i];
            a_arr[i] = 0;
            i += 1;
            HighNumbers += 1;
        } 
    }
    
    printf("high numbers count: %d \n \n", HighNumbers);
    for(int i=0; i<HighNumbers; i++) {
        printf("high numbers: %d \n", b_arr[i]);
    }
}

void task3() {
    char *names[] = {
      "ნინო", "ნანა", "ლიკა", "მაკა"
    };
    char *subjects[] = {
      "შუალედური", "პრეზენტაცია", "დავალება", "ფინალური"
    };
    int table[4][4] = {
        { 23, 15, 12, 29 },
        { 20, 25, 10, 28 },
        { 30, 16, 13, 40 }, 
        { 19, 20, 15, 28 }
    };
    int max=0, second=0;
    char *name, *subject;
    
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            printf("%d %s %s \n", table[i][j], names[i], subjects[j]);
            if(table[i][j] > max) {
                second = max;
                max = table[i][j];
                name = names[i];
                subject = subjects[j];
            }
        }
    }
    
    printf("%s %d %s", name, second, subject);
}

int main() {
    // task1();
    task2();
    // task3();

    return 0;
}