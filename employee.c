struct employee
{
    int empno,salary;
    char empname[25],departmentname[25];
}emp[100];
 
void main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as empno,empname,depatmentname,salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %s %d",&emp[i].empno,emp[i].empname,emp[i].departmentname,&emp[i].salary);
    }
    printf("\nEMPNO\tEMPNAME\tDEPTNAME\tSALARY\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%s\t\t%d\n",emp[i].empno,emp[i].empname,emp[i].departmentname,emp[i].salary);
    }
}

