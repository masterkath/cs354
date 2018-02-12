#include <xinu.h>
#include <stdio.h>

process main(void){
	pid32 child = create(onandon, 2048, 30, "onandon", 0);
	resume(child);
	sleep(14);
	kill(child);
	
	// used to find out if we actually killed the process
	//kprintf("Child pid: %d", child);	
	/*struct procent *pte;
	int i;
	for(i = 0; i < 4; i++){
		pte = &proctab[i];
		kprintf("\nProcessName: %s \tProcessState: %d", pte->prname, pte->prstate);
	} */

	return OK;
}
