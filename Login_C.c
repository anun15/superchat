#include <stdio.h>



void write_to_file(FILE* fp){

	char fname[10];
	char lname[10];
	char nick[8];
	
	char email[25];
	char dob[10];
	
	printf("Enter first name: ");
	scanf("%s", fname);
	//	fgets(fname, sizeof(fname), stdin );
	
	printf("Enter last name: ");
	scanf("%s", lname);
	//fgets(lname, sizeof(lname), stdin );

	printf("Enter nick name: ");
	scanf("%s", nick);	
	//fgets(nick, sizeof(nick), stdin );

	printf("Enter email: ");
	scanf("%s", email);
	//fgets(email, sizeof(email), stdin );

	printf("Enter dob (mmddyyyy) ");
	scanf("%s", dob);
	//fgets(dob, sizeof(dob), stdin );	

	fprintf(fp,"%s %s %s %s %s \n" ,nick, fname, lname, email, dob);
	
	
	return;

}



int main(){
	
	


	FILE *fp;
	fp = fopen("Output.txt", "a");
	write_to_file(fp);
	fclose(fp);
	
	return 0;

}
