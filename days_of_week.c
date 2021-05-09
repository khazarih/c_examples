#include <stdio.h>


char *get_weekday(char *weekday[], int length, int day){
	if (length < 1 || length > 7){
		return NULL;
	}else{
		return weekday[day-1];
	}

}


int main(int argc, char *argv[]){
	char *weekdays[] = {
		"Monday",
		"Tuesday",
		"Wednday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday"
	};
	
	char *day = get_weekday(weekdays, 7, 1);
	printf("%s\n",day);
	return 0;
}
