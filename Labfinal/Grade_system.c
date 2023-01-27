#include <stdio.h>

int main()
{
    double attendence, assignments, quiz, presentation, mid, final, result;

    printf("Enter marks of attendence(0-7): ");
    scanf("%lf", &attendence);
    printf("Enter marks of assignments(0-5): ");
    scanf("%lf", &assignments);
    printf("Enter everage marks of quiz(0-15): ");
    scanf("%lf", &quiz);
    printf("Enter marks of presentation(0-8): ");
    scanf("%lf", &presentation);
    printf("Enter marks of Mid-term exam(0-25): ");
    scanf("%lf", &mid);
    printf("Enter marks of Final exam(0-40): ");
    scanf("%lf", &final);

    if((attendence>=0 && attendence<=7) && (assignments>=0 && assignments<=5) && (quiz>=0 && quiz<=15) && (presentation>=0 && presentation<=7) && (mid>=0 && mid<=25) && (final>=0 && final<=40))
    {


    result = attendence + assignments + quiz + presentation + mid + final;

    // printf("%.2lf", result);

    if (result >= 80 && result <= 100)
    {
        printf("point: 4.00\tGrade: A+\n");
    }
    else if (result >= 75 && result <= 79)
    {
        printf("point: 3.75\tGrade: A\n");
    }
    else if (result >= 70 && result <= 74)
    {
        printf("point: 3.50\tGrade: A-\n");
    }
    else if (result >= 65 && result <= 69)
    {
        printf("point: 3.25\tGrade: B+\n");
    }
    else if (result >= 60 && result <= 64)
    {
        printf("point: 3.00\tGrade: B\n");
    }
    else if (result >= 55 && result <= 59)
    {
        printf("point: 2.75\tGrade: B-\n");
    }
    else if (result >= 50 && result <= 54)
    {
        printf("point: 2.50\tGrade: C+\n");
    }
    else if (result >= 45 && result <= 49)
    {
        printf("point: 2.25\tGrade: C\n");
    }
    else
    {
        printf("fail\n");
    } }
    else{
        printf("You enter a wrong marks somewhere : \n");
    }

    return 0;
}
//output:
//attendence : 7
//assignment : 4
//quiz       : 12
//presentation: 8
//mid          :23
//final       :35
 //The point 4.00  Grade: A+
