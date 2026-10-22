 PROGRAM :
 #include<stdio.h>
int main() {
int marks, mark1, mark2, mark3, mark4, mark5;
float average, percentage;
printf("Enter marks for subject 1: ");
scanf("%d", &mark1);
printf("Enter marks for subject 2: ");
scanf("%d", &mark2);
printf("Enter marks for subject 3: ");
scanf("%d", &mark3);
printf("Enter marks for subject 4: ");
scanf("%d", &mark4);
printf("Enter marks for subject 5: ");
scanf("%d", &mark5);
marks = mark1 + mark2 + mark3 + mark4 + mark5;
average = marks / 5.0;
percentage = (marks / 500.0) * 100;
printf("Total marks = %d\n", marks);
printf("Average marks = %f\n", average);
printf("Percentage = %f%%\n", percentage);
return 0;
}
