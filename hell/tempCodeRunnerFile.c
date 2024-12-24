
{
    int choice;
    while(1)
    {
        system("cls");
        printf("Employee Management System\n1.Add Record\n2.Display Record\n3.Update Record\n4. Delete Record\n5.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: add_record();
            break;
        case 2: display_record();
            break;
        case 3: update_record();
            break;
        case 4: delete_record();
            break;
        case 5: exit(0);
        default: printf("Invalid Input\n");
        }
        getch();
    }
    return 0;
}