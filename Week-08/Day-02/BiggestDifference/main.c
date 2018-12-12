#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "class.h"

void best_exam(class_t* array, int number_of_classes);
void average_of_all(class_t* array, int number_of_classes);
void biggest_difference(class_t* array, int number_of_classes);

int main() {

    puts("How many classes took the exam?");
    int number_of_classes = 0;
    scanf("%d", &number_of_classes);
    printf("\n");

    class_t* array = (class_t*) malloc(number_of_classes * sizeof(class_t));

    int counter = 1;

    for (int i = 0; i < number_of_classes; ++i) {

        printf("How many students took the exam in the %d. class?\n", counter);
        scanf("%d", &array[i].number_of_students);
        array[i].results = (int*) malloc(array[i].number_of_students * sizeof(int));
        printf("\n");

        printf("What is the name of the %d. class?\n", counter);
        char* name = malloc(50 * sizeof(char) + 1);
        scanf("%s", name);
        array[i].name = malloc(strlen(name) * sizeof(char));
        strcpy(array[i].name, name);
        free(name);
        printf("\n");

        printf("Type the exam result's percentage in the %d. class one by one!\n", counter);
        int student_index = 1;
        for (int j = 0; j < array[i].number_of_students; ++j) {
            printf("%d student: ", student_index);
            scanf("%d", &array[i].results[j]);
            student_index++;
        }

        counter++;
        printf("\n");
    }

    best_exam(array, number_of_classes);
    average_of_all(array, number_of_classes);
    biggest_difference(array, number_of_classes);

    return 0;
}

void biggest_difference(class_t* array, int number_of_classes)
{
    int result_max = 0;
    int result_min = 101;
    char class_name[50];

    int difference[number_of_classes];

    for (int i = 0; i < number_of_classes; ++i) {
        for (int j = 0; j < array[i].number_of_students; ++j) {
            if(array[i].results[j] > result_max) {
                result_max = array[i].results[j];
            }
        }
        for (int j = 0; j < array[i].number_of_students; ++j) {
            if (array[i].results[j] < result_min) {
                result_min = array[i].results[j];
            }
        }

        difference[i] = result_max - result_min;
        result_max = 0;
        result_min = 101;
    }

    int biggest_difference = 0;
    for (int k = 0; k < number_of_classes; ++k) {
        if(biggest_difference < difference[k]) {
            biggest_difference = difference[k];
            strcpy(class_name, array[k].name);
        }
    }
    printf("%s class has the biggest difference between the worst and best exam and it's %d percentage!\n", class_name, biggest_difference);
}

void best_exam(class_t* array, int number_of_classes)
{
    int result = 0;
    char class_name[50];

    for (int i = 0; i < number_of_classes; ++i) {
        for (int j = 0; j < array[i].number_of_students; ++j) {
            if(array[i].results[j] > result) {
                result = array[i].results[j];
                strcpy(class_name, array[i].name);
            }
        }
    }
    printf("%s class has the best exam and it's %d percentage!\n", class_name, result);
}

void average_of_all(class_t* array, int number_of_classes)
{
    int results_sum = 0;
    int number_of_students = 0;

    for (int i = 0; i < number_of_classes; ++i) {
        number_of_students += array[i].number_of_students;
        for (int j = 0; j < array[i].number_of_students; ++j) {
                results_sum += array[i].results[j];
        }
    }
    int average = results_sum / number_of_students;
    printf("Average of all the exams is: %d\n", average);
}