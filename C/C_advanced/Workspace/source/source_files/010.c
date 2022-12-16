#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

void check(int n, siginfo_t *siginfo, void *context){
    printf("%d: %d: %d", n, siginfo->si_pid, siginfo->si_uid);
}

int main()
{
    struct sigaction act;

    memset(&act, '\0', sizeof(act));

    act.sa_sigaction = &check;

    act.sa_flags = SA_SIGINFO;

    if (sigaction(SIGINT, &act, NULL) < 0)
    {
        printf("Error");
    }

    raise(SIGINT);
    
}