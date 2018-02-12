#include <xinu.h>
#include <stdio.h>

void onandon(){
	while(1){
		putc(CONSOLE, 'x');
		sleep(2);
	}
}
