#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

int count = 0;

void alarm_handler(int num){
	++count;
	alarm(1);
}


int main(){

	signal(SIGALRM, alarm_handler);
	alarm(1);
	while(1){
		sleep(2);
		printf("%d\n", count);
	}
	return 0;
}
