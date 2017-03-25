#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main (int argc,char *argv[])
{

	int pid;
	int status=0, a, b;	
	pid = fork();
	if (pid == 0)
  	{	
  		exec(argv[1], argv);
    	printf(2, "exec %s failed\n", argv[1]);
    }
  	else
 	{
    	status = waitx(&a, &b);
 	}  
 	if(status > 0)
      printf(1, "wait time= %d\nrun time= %d\n", a, b); 
 	exit();
}
