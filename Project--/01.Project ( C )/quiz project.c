#include<stdio.h>
#include<conio.h>   //using for getch() function
#include<windows.h> //using for system function



    struct Contest_holder{
        char name[30];
        char roll[11];
        char intake[5];
        char section[5];
        int count;
        char marks[10];


    }information;

    int five_quiz(){
    char ans;
    information.count=0;

    printf("\n\n\t\tQ.1# 123+4-5+67-89 = ?\n\n");
    printf("\t\ta) 50\t");
    printf("\t\tb) 20\n");
    printf("\t\tc) 100\t");
    printf("\t\td) 110\n");

    ans=getch();
    if(ans=='c'||ans=='C'){
        information.count++;
    }
    else{

    }
     system("CLS");


    printf("\n\n\t\tQ.2# What is the value of Pi to four individual decimal places?\n\n");
    printf("\t\ta) 3.1416\t");
    printf("b) 3.16\n");
    printf("\t\tc) 3.141617\t");
    printf("d) 3.1\n");
    ans=getch();                    //**getch() using for character input**//
    if(ans=='a'||ans=='A'){
       information.count++;
    }
    else{

    } system("CLS");

    printf("\n\n\t\tQ.3# Adding the numbers between 1 to 100 consecutively (1+2+3+4+...) gives you what final answer?\n\n");
    printf("\t\ta) 5055\t");
    printf("b) 5051\n\n");
    printf("\t\tc) 5050\t");
    printf("d) 5000\n");
    ans=getch();
    if(ans=='c'||ans=='C'){
        information.count++;
    }
    else{

    } system("CLS");

    printf("\n\n\t\tQ.4# What does 6 raise to the power of 0 equal? ?\n\n");
    printf("\t\ta) 1\tb) 6\n\t\tc) 36\td) 777\n");
    ans=getch();
    if(ans=='a'||ans=='A'){
       information.count++;
    }
    else{

    } system("CLS");

    printf("\n\n\t\tQ.5# How many vertices are present on a cube?\n\n");
    printf("\t\ta) 6\tb) 8\n\t\tc) 3\td) 3 \n");
    ans=getch();
    if(ans=='b'||ans=='B'){
       information.count++;
    }
    else{

    } system("CLS");


    printf("\n\n\t\t\t    You got %d out of 7\n\n\n",information.count);

    if(information.count<3){
        printf("\t\t\t   Failed try agian\n\n");

    }
    else{

        printf("\t\t\t##  Congratuation  ## \n\t\t\t  You pass the exam\n\n\n");
    }
    return information.count;

}
// 5  quiz end
//7 quiz function start
int seven_quiz(){
    char ans;
    information.count=0;
    printf("\n\n\t\tQ.1# Solve the following equation: -15 + (-5x)=0. ?\n\n");
    printf("\t\ta) -3\tb) 3\n\t\tc) 6\td) -9\n");
    ans=getch();
    if(ans=='a'||ans=='A'){
       information.count++;
    }
    else{

    } system("CLS");

     printf("\n\n\t\tQ.2# How many hours are there in a year (rounded to the nearest hour)?\n\n");
    printf("\t\ta) 5980\tb) 8760\n\t\tc) 2341\td) 21\n");
    ans=getch();
    if(ans=='b'||ans=='B'){
       information.count++;
    }
    else{

    } system("CLS");

     printf("\n\n\t\tQ.3# 3*4*9= ?\n\n");
    printf("\t\ta) 101\tb) 108\n\t\tc) 12\td) 177 \n");
    ans=getch();
    if(ans=='b'||ans=='B'){
       information.count++;
    }
    else{

    } system("CLS");

     printf("\n\n\t\tQ.4# How many vertices are present on a cube?\n\n");
    printf("\t\ta) 6\tb) 8\n\t\tc) 3\td) 3 \n");
    ans=getch();
    if(ans=='b'||ans=='B'){
       information.count++;
    }
    else{

    } system("CLS");

     printf("\n\n\t\tQ.5# 1 to hundred summation = ?\n\n");
    printf("\t\ta) 5055\tb) 5500\n\t\tc) 5050\td) 1231 \n");
    ans=getch();
    if(ans=='c'||ans=='C'){
       information.count++;
    }
    else{

    } system("CLS");

     printf("\n\n\t\tQ.6# What 3 numbers result in the same answer when they are added or multiplied altogether?\n\n");
    printf("\t\ta) 1,2,2\tb) 1,2,8\n\t\tc) 3,3,4\td) 1,2,3\n");
    ans=getch();
    if(ans=='d'||ans=='D'){
       information.count++;
    }
    else{

    } system("CLS");

     printf("\n\n\t\tQ.7# 12+12-12-11= ?\n\n");
    printf("\t\ta) -1\tb) 1\n\t\tc) 2\td) 4 \n\n");
    ans=getch();
    if(ans=='b'||ans=='B'){
       information.count++;
    }
    else{

    } system("CLS");
    
    printf("\n\n\t\t\t     You got %d out of 5 \n\n\n",information.count);

    if(information.count<4){
        printf("\t\t\t   Failed try agian\n\n");

    }
    else{

        printf("\t\t\t##  Congratuation  ## \n\t\t\t  You pass the exam\n\n\n");
    }
    return information.count;

}

    int main(){
        struct student;
    int select;
    char press;
    _Bool isTenQuiz=0;
        printf("\n\t\t***********************************\n");
        printf("\t\t      BUBT QUIZ CONTEST(2022)\n");
        printf("\t\t***********************************\n");
        printf("\t\tEnter your name: ");
        gets(information.name);        // gets using for space error skip//
        printf("\t\tRoll: ");
        gets(information.roll);
        printf("\t\tintake: ");
        gets(information.intake);
        printf("\t\tSection: ");
        gets(information.section);
        system("CLS");       //its work for clear skin


        do{
        printf("\n\n\t\t************************************************\n");
        printf("\t\t   Must get 50 percents mark for pass the exam\n");
        printf("\t\t************************************************\n");
        printf("\t\t\t    press 1# 5 Marks Exam\n");
        printf("\t\t\t    press 2# 7 Marks Exam\n");
        select=getch();
        system("CLS");

        switch(select){
        case '1' :
            isTenQuiz = 1;
            five_quiz();
            break;
        case '2':
          isTenQuiz = 0;
          seven_quiz();
            break;

        }

        FILE *file;                                    //**File working from here**//
        file=fopen("test.txt","a");
        if(file==NULL){
            printf("didnot working");
        }
        else{
            fputs("Name: ",file);
            fputs(information.name,file);  //push name to file
            fputs("\n",file);

            fputs("Roll: ",file);               //push roll file
            fputs(information.roll,file);
            fputs("\n",file);

            fputs("Intake: ",file);
            fputs(information.intake,file);             //push intake information file
            fputs("\n",file);

            fputs("Section: ",file);            //push section information file
            fputs(information.section,file);
            fputs("\n",file);

            fprintf(file,"Total Marks: %d",information.count);  //push increment value file

            // work need for each case //**********did  not work////////////


            if(isTenQuiz){
            if(information.count<3){                //** push text in file for case: 1 **//
            fputs("\tOutof 5\t(Failed in exam)\n\n",file);}
            else
            fputs("\tOutof 5\t(Pass in exam)\n\n",file);

        }


            if(!isTenQuiz){
            if(information.count<4){                //** push text in file for case: 2 **//
            fputs("\tOut of 7\t(failed in exam)\n\n",file);}
            else
            fputs("\tOut of 7\t(Pass in exam)\n\n",file);            //**end  of file**//
        }
        }



        printf("\t\t**************************************\n");
        printf("\t\t  Press y to continue another test: \n");
        printf("\t\t**************************************\n");
        press=getch();
        system("CLS");
    }
        while(press=='y'||press=='Y');

}

