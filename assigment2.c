#include <stdio.h>
#include <stdlib.h>
int ID[100];
float d[100];
int index = 0; //The number of student have array

void Input(){
    printf("Enter the number of students: ");
    int sl, i;
    scanf("%d", &sl);
    
    for(i =index; i< index+sl; i++)
    {
        printf("ID: ");
        scanf("%d", &ID[i]);
        printf("Diem: ");
        scanf("%f", &d[i]);
        printf("\n");
    }
    index = index +sl;
}

void OutPut(){
    int i;
    printf("%d\n", index);
    for(i=0; i<index; i++)
    {
        printf("ID[%d]: %d\n", i+1, ID[i]);
        printf("Diem[%d]: %f", i+1, d[i]);
        printf("\n");
    }
}

void gradeMax(){
    int i; 
    float max = d[0];
    for(i=0; i< index; i++)
    {
        if(max<d[i])
        {
            max = d[i];
        }
    }
     for(i=0; i<index; i++){
         if(d[i]==max){
             printf("\n\nID: %d", ID[i]);
             printf("\nDiem: %f\n", d[i]);
             printf("\n");
         }
       
    }
}

void gradeMin(){
    int i; 
    float min=d[0];
    for(i=0; i< index; i++)
    {
        if(min>d[i])
        {
            min = d[i];
        }
    }
     for(i=0; i<index; i++){
         if(d[i]==min){
             printf("\n\nID: %d", ID[i]);
             printf("\nDiem: %f\n", d[i]);
             printf("\n");
         }
       
    }
}

int main(){
    int option;
    do{

        do{
          printf("_____________________________Menu_______________________________\n");
          printf("|1: Enter ID and grade of students.                             |\n");
          printf("|2: Print out student lists and grades.                         |\n");
          printf("|3: Find out and print the student with the highest score       |\n");
          printf("|4: Find out and print the student with the lowest score        |\n");
          printf("|5: Exit program                                                |\n");
          printf("_________________________________________________________________\n");

          printf("Please Enter your choice from number 1 to 5: ");
          scanf("%d", &option);
        }while(option <1|| option>5);

        switch (option)
        {
        case 1:{
            Input();
            break;}
        case 2:
            OutPut();
            break; 
        case 3:
            gradeMax();
            break;
        case 4:
            gradeMin();
            break;
        case 5:
          exit(0);             
           
       
        }
    }while(option!=5);
    return 0;
}
