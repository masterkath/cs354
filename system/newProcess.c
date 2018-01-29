#include <xinu.h>
#include <stdio.h>

int newProcess(const char *filename){
	pid_t pid; // will hold process id
	
	pid = fork(); //create new process
	if(pid == 0) // if we are in child then 
	{
		execve(filename); // call execve with the filename
	}
}
