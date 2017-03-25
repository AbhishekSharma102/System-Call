Implement a new system call waitx(int *wtime, int *rtime). The two arguments are pointers to integers to which
waitx will assign the total number of clock ticks during which process was waiting and total
number of clock ticks when the process was running. The value returned by waitx is similar to that of wait system-call.
Also created a program which utilises this system call which when called, would give the wait and running time of the current process being executed.