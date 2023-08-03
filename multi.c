	#include <stdio.h>

	int main() {
		
        //init grades, 2 rows, 5 colums, arrays start at 1 when initialising
        int grades[2][5];
		float average;

        // subject
		int i;
        //row
		int j;
		//if it was a 3d array, you'd also need
		//int k; 
		//and so on..

		grades[0][0] = 80;
		grades[0][1] = 70;
		grades[0][2] = 65;
		grades[0][3] = 89;
		grades[0][4] = 90;

		grades[1][0] = 85;
		grades[1][1] = 80;
		grades[1][2] = 80;
		grades[1][3] = 82;
		grades[1][4] = 87;

		//for each subject/row i, calculate the average grade with data from grades/columns j
		for (i = 0; i < 2; i++) {
			average = 0;
			for (j = 0; j < 5; j++) {
				average += grades[i][j];
			}

			average /= 5.0;
			printf("The average marks obtained in subject %d is: %.2f\n", i, average);
		}

		return 0;
	}