#include <stdio.h>
#include <stdlib.h>





// Function prototypes
float inputSalary(); // Hàm nhập lương cơ bản
float calculateAllowance(float basic_salary); // Hàm tính trợ cấp
float calculateTax(float total_income); // Hàm tính thuế thu nhập
float calculateNetIncome(float basic_salary, float allowance, float tax); // Hàm tính thu nhập ròng

int main() {
    // Step 1: Khai báo biến
    int num_employees; // Số lượng nhân viên
    float total_salary_cost = 0; // Tổng chi phí lương của công ty
    int count_25 = 0, count_15 = 0, count_10 = 0; // Biến đếm theo loại trợ cấp

    // Step 2: Nhập số lượng nhân viên
    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    // Step 3: Kiểm tra đầu vào hợp lệ
    while (num_employees < 1) {
        printf("Invalid input. Please enter a number greater than 0: ");
        scanf("%d", &num_employees);
    }

    // Step 4: Xử lý từng nhân viên
    for (int i = 1; i <= num_employees; i++) {
        printf("\nProcessing employee %d:\n", i);

        // Step 4.1: Nhập lương cơ bản
        float basic_salary = inputSalary();

        // Step 4.2: Tính trợ cấp
        float allowance = calculateAllowance(basic_salary);

        // Step 4.3: Tính tổng thu nhập và thuế
        float total_income = basic_salary + allowance;
        float tax = calculateTax(total_income);

        // Step 4.4: Tính thu nhập ròng
        float net_income = calculateNetIncome(basic_salary, allowance, tax);

        // Step 4.5: Cộng dồn chi phí lương
        total_salary_cost += net_income;

        // Step 4.6: Phân loại theo mức trợ cấp
        if (allowance == 0.25 * basic_salary)
            count_25++;
        else if (allowance == 0.15 * basic_salary)
            count_15++;
        else
            count_10++;

        // Step 4.7: In thông tin nhân viên
        printf("Basic Salary: %.2f\n", basic_salary);
        printf("Allowance: %.2f\n", allowance);
        printf("Tax Deduction: %.2f\n", tax);
        printf("Net Income: %.2f\n", net_income);
    }

    // Step 5: In thống kê công ty
    printf("\n=== Salary Statistics ===\n");
    printf("Total salary cost of the company: %.2f\n", total_salary_cost);
    printf("Number of employees with allowance of 25%%: %d\n", count_25);
    printf("Number of employees with allowance of 15%%: %d\n", count_15);
    printf("Number of employees with allowance of 10%%: %d\n", count_10);

    return 0;
}

// Step 6: Hàm nhập lương cơ bản (đảm bảo >= 0)
float inputSalary() {
    float salary;
    do {
        printf("Enter the basic salary (>= 0): ");
        scanf("%f", &salary);
        if (salary < 0) {
            printf("Invalid salary. Please enter a non-negative value.\n");
        }
    } while (salary < 0);
    return salary;
}

// Step 7: Hàm tính trợ cấp
float calculateAllowance(float basic_salary) {
    if (basic_salary < 6000000)
        return 0.25 * basic_salary;
    else if (basic_salary <= 15000000)
        return 0.15 * basic_salary;
    else
        return 0.10 * basic_salary;
}

// Step 8: Hàm tính thuế
float calculateTax(float total_income) {
    if (total_income <= 8000000)
        return 0;
    else
        return 0.10 * (total_income - 8000000);
}

// Step 9: Hàm tính thu nhập ròng
float calculateNetIncome(float basic_salary, float allowance, float tax) {
    return basic_salary + allowance - tax;
}
