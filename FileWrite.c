#include <stdio.h>

void main()
{
    FILE *pWrite;

    char fname[20];
    char lname[20];
    char id[15] = {0};
    float gpa = 0.0;

    pWrite = fopen("students.dat", "w");  //pWrite fopen_s // Visual Studio
    if (pWrite == NULL)
        printf("File not open\n");

    else{
        printf("Enter first name, last name, id and GPA\n\n");
        printf("Enter data separated by spaces: \n");
        scanf("%s%s%s%f", fname, lname, id, &gpa); 	//scanf_s // Visual Studio

        fprintf(pWrite, "%s\t%s\t%s\t%.2f\n", fname, lname, id, gpa);

        fclose(pWrite);
    }
}
