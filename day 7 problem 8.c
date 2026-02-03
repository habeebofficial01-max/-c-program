#include <stdio.h>


struct Department {
    int deptId;
    char deptName[30];
};


struct Employee {
    int empId;
    char empName[30];
    struct Department dept;
};

int main() {
    struct Employee emp;
    struct Employee *ptr;  

    ptr = &emp;

  
    printf("Enter Employee ID: ");
    scanf("%d", &ptr->empId);

    printf("Enter Employee Name: ");
    scanf("%s", ptr->empName);

    // Input department details
    printf("Enter Department ID: ");
    scanf("%d", &ptr->dept.deptId);

    printf("Enter Department Name: ");
    scanf("%s", ptr->dept.deptName);

  
    printf("\n--- Employee Details ---\n");
    printf("Employee ID   : %d\n", ptr->empId);
    printf("Employee Name : %s\n", ptr->empName);
    printf("Department ID : %d\n", ptr->dept.deptId);
    printf("Department Name: %s\n", ptr->dept.deptName);

    return 0;
}
