#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define max 100
int pat_data;

FILE *patient;
FILE *record;

typedef struct patient_record{
    char pat_id[20];
    char pat_name[30];
    int pat_age;
    char sex;
    char address[50];
    int phone_no;
    char blood_grp[5];
    char doctor_name[30];
    char disease[50];
    int status;
    char admitted_date[40];
}pr;

int add_patient_record(pr pat[]);
int display_patient_record(pr pat[]);
int search_patient_record(pr pat[]);
int edit_patient_record(pr pat[]);

int add_patient_record(pr pat[]) {
    system("cls");
    printf("Enter the Patient Details:\n");
    printf("Enter patient ID:");
    scanf(" %s", pat[pat_data].pat_id);
    printf("Enter patient name:");
    scanf(" %[^\n]s", pat[pat_data].pat_name);
    printf("Enter patient age:");
    scanf("%d", &pat[pat_data].pat_age);
    printf("Enter patient sex:\n  M for male\n  F for female\n......");
    scanf(" %c", &pat[pat_data].sex);

    // Validate patient sex input
    if (pat[pat_data].sex == 'm' || pat[pat_data].sex == 'M' || pat[pat_data].sex == 'F' || pat[pat_data].sex == 'f') {
        printf("Enter patient blood group:");
        scanf(" %s", pat[pat_data].blood_grp);
        printf("Enter the patient address:");
        scanf(" %s", pat[pat_data].address);
        printf("Enter the patient phone number:");
        scanf(" %d", &pat[pat_data].phone_no);
        printf("Enter the patient disease:");
        scanf(" %s", pat[pat_data].disease);
        printf("Patient Status:\n 0 for discharged\n 1 for O.P.D\n 2 for Emergency\n.....");
        scanf("%d", &pat[pat_data].status);
        printf("Enter the patient date of admitted[dd/mm/yy]: ");
        scanf(" %s", pat[pat_data].admitted_date);

        // Open files for appending
        patient = fopen("Patient_Record.txt", "a+");
        record = fopen("record.txt", "a+");
        if (patient == NULL || record == NULL) {
            printf("Error opening file!\n");
            return 0;
        }

        // Write patient record to both files
        fprintf(patient, "%-10s %-20s %-3d %-5c %-15s %-15d %-7s  %-15s %-4d %-10s\n",
                pat[pat_data].pat_id, pat[pat_data].pat_name, pat[pat_data].pat_age,
                pat[pat_data].sex, pat[pat_data].address, pat[pat_data].phone_no,
                pat[pat_data].blood_grp,  pat[pat_data].disease,
                pat[pat_data].status, pat[pat_data].admitted_date);
        fprintf(record, "%-10s %-20s %-3d %-5c %-15s %-15d %-7s  %-15s %-4d %-10s\n",
                pat[pat_data].pat_id, pat[pat_data].pat_name, pat[pat_data].pat_age,
                pat[pat_data].sex, pat[pat_data].address, pat[pat_data].phone_no,
                pat[pat_data].blood_grp, pat[pat_data].disease,
                pat[pat_data].status, pat[pat_data].admitted_date);

        fclose(record);
        fclose(patient);

        printf("Patient record added successfully\n");
        pat_data++; // Increment pat_data counter
    } else {
        printf("Wrong input..\n");
        // Consider removing getch() for better portability
        getch();
    }
    // Consider removing getch() for better portability
    getch();
    return 0;
}



int display_patient_record(pr pat[]) {
    FILE *record;
    record = fopen("Patient_record.txt", "r");
    if (record != NULL) {
        printf("The Patient Records Are:\n");
        printf("Id\t  Name\t\tAge\tSex\tAddress\t\tPhone No\tBlood Group\tDoctor_name\tDisease\tStatus\tAdmitted Date\n");

        while (fscanf(record, "%s %s %d %c %s %d %s  %s %d %s",
               pat[pat_data].pat_id, pat[pat_data].pat_name, &pat[pat_data].pat_age,
               &pat[pat_data].sex, pat[pat_data].address, &pat[pat_data].phone_no,
               pat[pat_data].blood_grp,  pat[pat_data].disease,
               &pat[pat_data].status, pat[pat_data].admitted_date)!=EOF) { // Ensure 11 fields are read successfully

            printf("%s\t %s\t %d\t %c\t %s\t\t %d\t %s\t  %s\t %d\t %s\n",
                   pat[pat_data].pat_id, pat[pat_data].pat_name, pat[pat_data].pat_age,
                   pat[pat_data].sex, pat[pat_data].address, pat[pat_data].phone_no,
                   pat[pat_data].blood_grp, pat[pat_data].disease,
                   pat[pat_data].status, pat[pat_data].admitted_date);

            pat_data++;
        }

        fclose(record); // Close the file
        getch(); // Pause the program
    } else {
        printf("Failed to open the file.\n");
        getch(); // Pause the program
    }
    return 0;
}

int search_patient_record(pr pat[])
{

}
int edit_patient_record(pr pat[])
{

}
int main()
{
    pr pat[max];
    int choice;
    while (1) {
        system("cls");
        printf("-----------------------------------------------------\n");
        printf("WELCOME TO R.S.R.P. HOSPITAL\n");
        printf("-----------------------------------------------------\n");
        printf(" 1.Add Patient Record\n 2.Display Patient Record\n 3.Search Patient Record in database\n 4.Edit Patient Record \n 5.Main Menu\n ");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            add_patient_record(pat);
            break;
            case 2:
            display_patient_record(pat);
            break;
            case 3:
            search_patient_record(pat);
            break;
            case 4:
            edit_patient_record(pat);
            break;
            case 5:
            exit(0);
            break;
            default:
            printf("Invalid Input....");
        }

    }
    return 0;
}
