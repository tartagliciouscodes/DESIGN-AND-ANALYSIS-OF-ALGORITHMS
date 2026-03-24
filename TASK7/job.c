#include <stdio.h>

struct Job {
    char id;
    int deadline;
    int profit;
};

void jobSequencing(struct Job jobs[], int n) {
    // Sort jobs by profit (descending)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (jobs[i].profit < jobs[j].profit) {
                struct Job temp = jobs[i];
                jobs[i] = jobs[j];
                jobs[j] = temp;
            }
        }
    }

    int maxDeadline = 0;
    for (int i = 0; i < n; i++) {
        if (jobs[i].deadline > maxDeadline)
            maxDeadline = jobs[i].deadline;
    }

    int slot[maxDeadline];
    char result[maxDeadline];

    for (int i = 0; i < maxDeadline; i++)
        slot[i] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = jobs[i].deadline - 1; j >= 0; j--) {
            if (slot[j] == 0) {
                slot[j] = 1;
                result[j] = jobs[i].id;
                break;
            }
        }
    }

    printf("Selected Jobs: ");
    for (int i = 0; i < maxDeadline; i++) {
        if (slot[i])
            printf("%c ", result[i]);
    }
}

int main() {
    struct Job jobs[] = {
        {'A', 2, 100},
        {'B', 1, 19},
        {'C', 2, 27},
        {'D', 1, 25},
        {'E', 3, 15}
    };

    int n = sizeof(jobs) / sizeof(jobs[0]);

    jobSequencing(jobs, n);

    return 0;
}