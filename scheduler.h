// filepath: /scriptwarrior_shell/scriptwarrior_shell/src/scheduler.h
#ifndef SCHEDULER_H
#define SCHEDULER_H

// Function prototypes for scheduling algorithms
void fcfsScheduler(char *commands[], int n);
// Simulates First-Come-First-Serve scheduling

void roundRobinScheduler(char *commands[], int n, int quantum);
// Simulates Round Robin scheduling with a specified quantum

#endif // SCHEDULER_H