#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Student Strcuture
struct Student{
    int id;
    char fname[100];
    char lname[100];
    char branch[50];
    char section[100];
    int marks;
    char dob[50];
};


int main(){
    struct Student *s;
    int n;
    printf("Enter the number of records you want : ");
    scanf("%d",&n);
    s = (struct Student*)malloc(n*sizeof(struct Student)); //Memory allocated in the heap
    int i=0;
    int count=0;
    int c=0;
    while(c!=4){
        //Menu for the system
        printf("\n\t\t=====Welcome To Srm Student Record System=====\n");
        printf("Enter 1 to store the details\n");
        printf("Enter 2 to display the details\n");
        printf("Enter 3 to display total number of records\n");
        printf("Enter 4 to quite the system\n");
        printf("Enter Your choice : ");
        scanf("%d",&c);

        switch(c){
            case 1:
                    //entering the details into the system
                    printf("Enter the id : \n");
                    scanf("%d",&s[i].id);
                    printf("Enter the first name : \n");
                    scanf("%s",s[i].fname);
                    printf("Enter the last name : \n");
                    scanf("%s",s[i].lname);
                    printf("Enter the branch : \n");
                    scanf("%s",s[i].branch);
                    printf("Enter the section : \n");
                    scanf("%s",s[i].section);
                    printf("Enter the marks : \n");
                    scanf("%d",&s[i].marks);
                    printf("Enter the dob(ddmmyyyy) : \n");
                    scanf("%s",s[i].dob);
                count++;
                i++;
                if(i>n){
                    printf("\nNo more stroage for record pls exit the system\n");
                    exit(0);
                }

                break;

            case 2:
                    //displaying the details from the system
                    printf("===Details of the Students==\n\n");
                    for(int j=0;j<i;++j){
                        printf("The student id : %d\n",s[j].id);
                        printf("Name of the student : %s %s\n",s[j].fname,s[j].lname);
                        printf("Branch : %s\n",s[j].branch);
                        printf("Section : %s\n",s[j].section);
                        printf("Marks : %d\n",s[j].marks);
                        printf("Date Of Birth : %s\n",s[j].dob);
                        printf("\n");
                    }
                    break;

            case 3 :
                    printf("\nNumber of students records : %d\n",count);
                    break;

            case 4 : 
                    printf("\n\t\t=====Thank You for using the system=====\n");
                    exit(0);
                    break;

            default : 
                    printf("Invalid choice pls try again\n");
        }
    }

    free(s); //freeing the pointer to avoid memory leak

    return 0;
}