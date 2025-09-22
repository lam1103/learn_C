#ifndef TASK_H
#define TASK_H

#include <time.h>

enum STATUS { 
    NOT_STARTED, IN_PROGRESS, DONE
 };

struct Task {
    int id;
    char name_Task[50];
    time_t due_date;
    time_t created_at;
    enum STATUS status;
};

void addTask(struct Task* tasks, int* taskCount, const char* name, time_t created_at, time_t due_date);

#endif
void displayMenu(struct Task* tasks, int* taskCount);
