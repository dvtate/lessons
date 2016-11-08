#include <string.h>
#include <stdio.h>
#include <stdlib.h>

const char* months[12] = {
	"January", "February", "March", "April", "May", "June", "July",
	"August", "September", "October", "November", "December"
};

void printSuffix(const char* num){
	// if they passed a NULL pointer
	if (!num)
		return;
	
	printf(num);
	
	size_t lastChar = strlen(num) - 1;
	
	if (num[lastChar] == '1')
		printf("st");
	else if (num[lastChar] == '2')
		printf("nd");
	else if (num[lastChar] == '3')
		printf("rd");
	else
		printf("th");
	
}

int main(){
	
	// assumes the date is expressed as defined
	// by ISO 8601 ( YYYY-MM-DD )
	// https://en.wikipedia.org/wiki/ISO_8601
	printf("Enter a date: ");

	// get the date
	char date[11];
	scanf("%10s", date);

	// get the year
	char* year = strtok(date, "-./\\");

	// get the month turn the token to an integer
	int monthNum = atoi(strtok(NULL, "-./\\")); // convert the token to an int
	
	// invalid month number
	if (monthNum > 12) {
		printf("Boi u dum, invalid month number `%d`. \n", monthNum);
		return -1;
	}


	// get day of month
	char* day = strtok(NULL, "-./\\");


	printf("%s ", months[monthNum - 1]);
	printSuffix(day);
	printf(" %s\n", year);

	
}
