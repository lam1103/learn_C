#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"task.h"


void addTask(struct Task* tasks, int* taskCount) {
    struct Task* newTask = &tasks[*taskCount];

    printf("them task moi.... \n");

    printf("nhap task: \n");
    fgets(newTask->name_Task, sizeof(newTask->name_Task), stdin);
    newTask->name_Task[strcspn(newTask->name_Task, "\n")] = '\0';

    newTask->created_at = time(NULL);

    printf("nhap ngay het han (YYYY-MM-DD): \n");
    scanf("%ld", &newTask->due_date);

    newTask->status = NOT_STARTED;

    (*taskCount)++;
    printf("Task added successfully!\n");
}

void viewTasks(struct Task* tasks, int* taskCount) {
    printf("Viewing all tasks...\n");
    for (int i = 0; i < *taskCount; i++) {
        struct Task* taskCounter = &tasks[i];
        printf("ID: %d\n", taskCounter->id);
        printf("Name: %s\n", taskCounter->name_Task);
        printf("Created At: %s", ctime(&taskCounter->created_at));
        printf("Due Date: %s", ctime(&taskCounter->due_date));
        printf("Status: %d\n", taskCounter->status);
        printf("-----------------------\n");
    }
}

void printfTask(struct Task* task) {
    printf("ID: %d\n", task->id);
    printf("Name: %s\n", task->name_Task);
    printf("Created At: %s", ctime(&task->created_at));
    printf("Due Date: %s", ctime(&task->due_date));
    printf("Status: %d\n", task->status);
}

void displayMenu(struct Task* tasks, int* taskCount) {
    printf("Schedule Management System\n");
    printf("1. Add Task\n");
    printf("2. View Tasks\n");
    printf("3. Update Task\n");
    printf("4. Delete Task\n");
    printf("5. Exit\n");    
    printf("Choose an option: ");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Add Task selected.\n");
            break;
        case 2:
            printf("View Tasks selected.\n");
            // Call viewTasks function here
            break;
        case 3:
            printf("Update Task selected.\n");
            // Call updateTask function here
            break;
        case 4:
            printf("Delete Task selected.\n");
            // Call deleteTask function here
            break;
        case 5:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
    }

}

int main() {
    struct Task tasks[100];
    int taskCount = 0;
    displayMenu(tasks, &taskCount);
    printfTask(&tasks[0]);
    return 0;
}