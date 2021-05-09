#include <stdio.h>
#include <string.h>


void changevalues(char *a, char *b){
	int count;
	char temp[strlen(a)];
	
	for (count = 0; count < strlen(a); count++){
		temp[count] = a[count];
	}
	
	for (count = 0; count < strlen(b); count++){
		a[count] = b[count];
	}
	
	for (count = 0; count < strlen(a); count++){
		b[count] = temp[count];
	}
	
}


int main(){
	char x[] = "aaa", y[] = "bbb";
	printf("before function: x = %s and y = %s\n",x,y);
	changevalues(x,y);
	printf("after function: x = %s and y = %s\n",x,y);
	return 0;
}
