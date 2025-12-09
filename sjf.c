#include <stdio.h>

struct Process
{
    int pid;
    int at;
    int bt;
    int ct; 
    int tat;
    int wt;  
};

int main()
{
    int n, i, j, time = 0, completed = 0;
    float avgWT = 0, avgTAT = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    struct Process p[n];

    for (i = 0; i < n; i++)
    {
        printf("\nEnter Process ID: ");
        scanf("%d", &p[i].pid);
        printf("Enter Arrival Time: ");
        scanf("%d", &p[i].at);
        printf("Enter Burst Time: ");
        scanf("%d", &p[i].bt);
    }

    int visited[n];
    for (i = 0; i < n; i++)
        visited[i] = 0;

    while (completed < n)
    {
        int minBT = 9999, idx = -1;

        for (i = 0; i < n; i++)
        {
            if (p[i].at <= time && visited[i] == 0 && p[i].bt < minBT)
            {
                minBT = p[i].bt;
                idx = i;
            }
        }

        if (idx == -1)
        {
            time++; 
        }
        else
        {
            time += p[idx].bt;
            p[idx].ct = time;
            p[idx].tat = p[idx].ct - p[idx].at;
            p[idx].wt = p[idx].tat - p[idx].bt;

            avgWT += p[idx].wt;
            avgTAT += p[idx].tat;

            visited[idx] = 1;
            completed++;
        }
    }

    avgWT /= n;
    avgTAT /= n;

    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",
               p[i].pid, p[i].at, p[i].bt,
               p[i].ct, p[i].tat, p[i].wt);
    }

    printf("\nAverage Waiting Time = %.2f", avgWT);
    printf("\nAverage Turnaround Time = %.2f\n", avgTAT);

    return 0;
}
