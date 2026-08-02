#include <stdio.h>
#include <string.h>
int main(void){
   char Municipalityname[80];
   char Mayorsname[80];
   int Population;
   
   printf("====================================\n");
   printf("Municipal Financial Management System\n");
   printf("====================================\n\n");
   printf("Welcome to windhoek Municipality\n");

  printf("Enter Municipality name:");
  fgets( Municipalityname, sizeof( Municipalityname), stdin);
 Municipalityname[strcspn( Municipalityname, "\n")] = '\0';

 printf("Enter Mayorsname:");
 fgets(Mayorsname, sizeof(Mayorsname), stdin);
 Mayorsname[strcspn(Mayorsname, "\n")]='\0';

  printf("Enter Population: ");
  scanf("%d",&Population);

   printf("======================================\n");
   printf("Municipality Report\n");
   printf("======================================\n\n");
 printf("Municipality Name: %s\n",Municipalityname);
 printf("Mayor's Name: %s\n", Mayorsname);
 printf("Population : %d\n", Population);
 return 0;
}