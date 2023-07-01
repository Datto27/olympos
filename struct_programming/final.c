#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void write_file() {
    FILE* file1 = fopen("data1.txt", "w");
    
    if(file1 == NULL) {
        printf("failed!!!\n");
        exit(0);
    }
    
    printf("success \n");
    
    for(int i=0; i<20; i++) {
        int rand_num = rand() % 100 + 1;
        fprintf(file1, "%d \n", rand_num);
    }
    
    fclose(file1);
}

void read_file() {
    FILE* file1 = fopen("data1.txt", "r");
    FILE* file2 = fopen("data2.txt", "w");
    
    if(file1 == NULL || file2 == NULL) {
        printf("failed");
        exit(0);
    }
    
    int num, sum = 0, i=0, j=0;
    int nums[20];
    while(fscanf(file1, "%d", &num) != EOF) {
        sum += num;
        nums[i] = num;
        i++;
    }
    
    double percent, cumulative =0;
    while(j < i) {
        percent = (nums[j]/sum) * 100;
        cumulative += percent;
        printf("%d %f %f \n", nums[j], percent, cumulative);
        j++;
    }
    
    fclose(file1);
    fclose(file2);
}

void task_1() {
    FILE* data1 = fopen("data1.txt", "r");
    FILE* data2 = fopen("data2.txt", "w");
    
    if(data1 == NULL) {
        printf("file open failed \n");
        exit(0);
    }
    
    char word[100];
    int words_sum = 0, chars_sum = 0;
    while(fscanf(data1, "%s", word) != EOF) {
        if((char)word[0] == 'b') {
            fprintf(data2, "%s\n", word);
        }
        words_sum += 1;
        chars_sum += strlen(word);
    }
    
    printf("%d %d \n", words_sum, chars_sum);
    
    fclose(data1);
    fclose(data2);
}

void task_2() {
    FILE* studentsf = fopen("students.txt", "r");
    int students[4];
    char name[256];
    
    if(studentsf == NULL) {
        printf("failed");
        exit(0);
    }
    
    for(int i=0; i<5; i++) {
        int rand_num = rand() % 20 + 1;
        students[i] = rand_num;
    }
    
    int line = 1;
    while(fgets(name, sizeof(name), studentsf) != NULL) {
        for(int i=0; i<4; i++) {
            if(line == students[i]) {
                printf("%d %s \n", line, name);
            }
        }
        line++;
    }
    
    fclose(studentsf);
}

// task 3 functions
double calc_mean_square_deviation(int *values, int size) {
    double sum = 0;
    double mean;
    double deviation = 0;

    // Calculate the mean value
    for (int i = 0; i < size; i++) {
        sum += values[i];
    }
    mean = sum / size;

    // Calculate the mean square deviation
    for (int i = 0; i < size; i++) {
        deviation += pow(values[i] - mean, 2);
    }
    deviation /= size;

    return sqrt(deviation); 
}

double calc_median(int *values, int size) {
     // Sort the array in ascending order
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (values[j] > values[j + 1]) {
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }

    // Calculate the median
    if (size % 2 == 0) {
        return (values[size / 2 - 1] + values[size / 2]) / 2.0;
    } else {
        return values[size / 2];
    }
}

void task_3() {
    int values[3];

    printf("Enter three integer values:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &values[i]);
    }

    double meanSquareDeviation = calc_mean_square_deviation(values, 3);
    double median = calc_median(values, 3);

    printf("Mean Square Deviation: %.2f\n", meanSquareDeviation);
    printf("Median: %.2f\n", median);
}

int main() {
    // // write file
    // write_file();
    // // read file
    // read_file();
    
    // task_1();    
    // task_2();
    task_3();
    
    return 0;
}