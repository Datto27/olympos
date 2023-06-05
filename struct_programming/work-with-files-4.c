#include <stdio.h>
#include <stdlib.h>

void task1() {
	FILE *numbers;
	int random_num;
	int i;
	
	numbers = fopen("numbers.txt", "w");
	
	if(numbers == NULL) {
		printf("Error!!!\n");
		exit(0);
	}
	printf("OK \n");
	for(i=0; i<100; i++) {
		random_num = rand() % 100 + 1;
		fprintf(numbers, "%d\n", random_num);
	}
	fclose(numbers);
}

void task2() {
	FILE *numbers;
	FILE *result;
	char line[256];
	
	numbers = fopen("numbers.txt", "r");
	result = fopen("result.txt", "w");
	
	if(numbers == NULL) {
		printf("Error!!!");
		exit(0);
	}
	printf("OK\n");
	
	numbers = fopen("numbers.txt", "r");
	int numbers_list[100];
	int i=0, sum=0, num;
	double percent ,cumulative_sum=0;
	while(fscanf(numbers, "%d", &num) != EOF) {
		numbers_list[i++] = num;
		sum += num;
	}
	
	fclose(numbers);
	
	int j = 0;
	while(j < i) {
		percent = ((double)numbers_list[j]/(double)sum)*100;
		printf("%f%% \n", percent);
		cumulative_sum += percent;
		printf("%f cumulative %% \n", cumulative_sum);
		j += 1;
			
		// task 3
		fprintf(result, "%d - ", numbers_list[j]);
		fprintf(result, "%f %%, ", percent);
		fprintf(result, "%f cumulative \n", cumulative_sum);
	}	
}

int main() {
//   	task1();
	task2();

  return 0;
}