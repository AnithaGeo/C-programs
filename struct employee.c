#include <stdio.h>
#include <string.h>

#define SIZE 3

struct Employee
{
    int eno;
    char ename[10];
    int esal;
    int dno;
};

void read(struct Employee *users, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the Employee No: ");
        scanf("%d", &users[i].eno);
        printf("Enter the Employee Name: ");
        scanf("%s", &users[i].ename);
        printf("Enter the Employee Salary: ");
        scanf("%d", &users[i].esal);
        printf("Enter the Employee DNo: ");
        scanf("%d", &users[i].dno);
    }
}

void displayOne(struct Employee data)
{
    printf("Employee ID\tEmployee Name\tEmployee Salary\tEmployee DNo\n");
    printf("-------------------------------------------------------------\n");
    printf("%d", data.eno);
    printf("%s", data.ename);
    printf("%d", data.esal);
    printf("%d", data.dno);
    printf("\n");
}

void displayAll(struct Employee *users, int n)
{
    int i;
    printf("Employee ID\tEmployee Name\tEmployee Salary\tEmployee DNo\n");
    printf("-------------------------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", users[i].eno);
        printf("%s\t", users[i].ename);
        printf("%d\t", users[i].esal);
        printf("%d\t", users[i].dno);
        printf("\n");
    }
}

int search(struct Employee data[], int n, int eno)
{
    int i, index = -1;
    for (i = 0; i < n; i++)
    {
        if (data[i].eno == eno)
        {
            index = i;
            break;
        }
    }
    if (index != -1)
    {
        displayOne(data[index]);
        return index;
    }
    else
    {
        printf("Employee with the ID %d not found\n", eno);
        return index;
    }
}

void sortByName(struct Employee *data, int n)
{
    int i, j;
    struct Employee tmp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strcmp(data[j].ename, data[j + 1].ename) > 0)
            {
                tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }
        }
    }
}

void sortBySalary(struct Employee *data, int n)
{
    int i, j;
    struct Employee tmp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (data[j].esal > data[j].esal)
            {
                tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }
        }
    }
}

void deleteById(struct Employee *data, int n, int eno)
{
    int i, index = -1;
    struct Employee tmp;
    index = search(data, n, eno);
    if (index == -1)
    {
        return;
    }
    for (i = index; i < n - 1; i++)
    {
        data[i] = data[i + 1];
    }
    printf("Deleted the Employee with the ID %d\n", eno);
}

void main()
{
    int n, i;
    struct Employee users[SIZE];

    printf("Enter the Employees: \n");
    read(users, SIZE);
    displayAll(users,SIZE);
}
