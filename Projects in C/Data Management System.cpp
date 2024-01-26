#include<stdio.h>
#include<stdlib.h> 
#include<conio.h> //for concl
#include <windows.h>

struct EmployeeData
{
   int ID;
   char Name[15];
   char  Department[15];
}s;

int choose;

int main(void);
void Add(void);
void Display(void); 
void Delete(void);
void Search(void);
void Update(void);
void Count(void);
int main (){
    system("color 8F");
    system("cls");
    printf("\nMoiz Mansoori / 22F-BSAI-32\n");
    printf("\nData Management System\n\n");
    printf("1 : Add\n");
    printf("2 : Display\n");
    printf("3 : Search\n");
    printf("4 : Delete\n");
    printf("5 : Update\n");
     printf("6 : Count\n");
    printf("0 : Exit\n");
    printf("Select : \n");
    scanf("%d" , &choose);

    switch (choose)
    {
        case 0 : {
        system(0);
        break;
 }
    case 1 : {
        Add();
        break;
 }
      case 2 : {
        Display();
        break;
 } 
     case 3 : {
        Search();
        break;
 }
     case 4 : {
        Delete();
        break;
 }
    case 5 : {
        Update();
        break;
 }
    case 6 : {
        Count();
        break;
 }

    return 0;
}
}
void Add(){
	
    system("cls"); //clear screen
    FILE *fp;
    fp = fopen("data.text" , "a"); //data add
    printf("Enter ID : \n");
    scanf("%d" , &s.ID);
    printf("Enter Name : \n");
    scanf("%s" ,s.Name);
    printf("Enter Department : \n");
    scanf("%s" ,s.Department);
    fwrite(&s , sizeof(s) ,1 ,fp);
    fclose(fp);
    main();
}
void Display(){
    system("cls");
      
    FILE *fp;
    fp = fopen("data.text" , "r"); //data add read mode
    printf("Id\t\tName\t\tDepartment\n");
    while(fread(&s , sizeof(s) ,1 ,fp)){
        printf("%d\t\t%s\t\t%s\n" ,s.ID ,s.Name ,s.Department);     
    }
    fclose(fp);
    getch();
    main();
}
void Search(){
    system("cls");
    int ID ;
    FILE *fp;
    fp = fopen("data.text" , "r"); //data add read mode
    printf("Ennter ID to Search: ");
    scanf("%d" ,&ID);
    while(fread(&s , sizeof(s) ,1 ,fp)){
        if(s.ID == ID){
        printf("Id\t\tName\t\tDepartment\n");
        printf("%d\t\t%s\t\t%s\n" ,s.ID ,s.Name ,s.Department);     
    }
    }
    fclose(fp);
    getch();
    main();
    
}
void Delete(){
   
    system("cls");
    int found;
    int ID; 
    
    FILE *fp , *fp1;
    fp = fopen("data.text" , "r"); //data add read mode
    fp1 = fopen("temp.text" , "w");
    printf("Ennter ID to Search");
    scanf("%d" ,&ID);
    while(fread(&s , sizeof(s) ,1 ,fp)){
        if(s.ID == ID){
            found = 1;
        }
        else{
       fwrite(&s , sizeof(s) ,1 ,fp1);
    }
    }
    fclose(fp);
    fclose(fp1);
 
    if(found != 1){
        printf("\n\nNo data ");
    }
    if(found == 1){
        printf("\n\nData Delete Sucessfully ");
        fp = fopen("data.text" , "w");
        fp = fopen("data.text" , "r");
         while(fread(&s , sizeof(s) ,1 ,fp1)){
       fwrite(&s ,sizeof(s) ,1 ,fp);
         }
    fclose(fp);
    fclose(fp1);
    }

    fclose(fp);
    getch();
    main();    
}
void Update(){
    system("cls");
system("cls");
    int found;
    int ID; 
    
    FILE *fp , *fp1;
    fp = fopen("data.text" , "r"); //data add read mode
    fp1 = fopen("temp.text" , "w");
    printf("Ennter ID to Search");
    scanf("%d" ,&ID);
    while(fread(&s , sizeof(s) ,1 ,fp)){
        if(s.ID == ID){
            found = 1;
             printf("Enter ID : \n");
     scanf("%d" , &s.ID);
     printf("Enter Name : \n");
     scanf("%s" ,s.Name);
      printf("Enter Department : \n");
     scanf("%s" ,s.Department);
        }
        
       fwrite(&s , sizeof(s) ,1 ,fp1);
    }
    
    fclose(fp);
    fclose(fp1);
 
    if(found != 1){
        printf("\n\nNo data ");
    }
    if(found == 1){
        printf("\n\nData Update Sucessfully ");
        fp = fopen("data.text" , "w");
        fp = fopen("data.text" , "r");
         while(fread(&s , sizeof(s) ,1 ,fp1)){
       fwrite(&s ,sizeof(s) ,1 ,fp);
         }
    fclose(fp);
    fclose(fp1);
    }

    fclose(fp);
    getch();
    main(); 
}
void Count(){
 system("cls");
   
    FILE *fp , *fp1;
    fp = fopen("data.text" , "r"); //data add read mode
    fseek(fp , 0 ,SEEK_END); //WILL FIND DATA TILL END
    int n = ftell(fp) / sizeof(struct EmployeeData);
    printf("There is %d in Data Center" , n);
    fclose(fp);
    getch();
    main();

}
