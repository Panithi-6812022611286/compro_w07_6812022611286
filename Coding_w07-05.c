#include <stdio.h>

int main() {
    int age, level;      // ตัวแปรเก็บอายุ และระดับ VIP
    float price;         // ตัวแปรเก็บยอดซื้อ

    printf("Enter age: ");
    scanf("%d", &age);   // รับค่าอายุ

    printf("Enter VIP level (1-5): ");
    scanf("%d", &level); // รับค่าระดับ VIP

    printf("Enter purchase amount: ");
    scanf("%f", &price); // รับค่ายอดซื้อ

    // แสดงข้อมูลลูกค้าที่กรอกมา
    printf("\n--- Customer Info ---\n");
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, level, price);

    // ตรวจสอบค่าป้อนเข้าว่าผิดปกติหรือไม่
    if (age < 0 || level < 1 || level > 5 || price < 0) {
        printf("Sorry no discount applied\n");
    } else {
        // VIP ระดับ 5 หรือยอดซื้อมากกว่า 50,000  ลด 25%
        if (level == 5 || price > 50000) {
            printf("Discount received: 25%%\n");
        }
        // อายุเกิน 60 หรือ VIP ระดับ 3–4  ลด 20%
        else if (age > 60 || (level >= 3 && level < 5)) {
            printf("Discount received: 20%%\n");
        }
        // อายุ 30–40 และยอดซื้อเกิน 2000  ลด 15%
        else if (age >= 30 && age <= 40 && price > 2000) {
            printf("Discount received: 15%%\n");
        }
        // อายุ 18–25 และยอดซื้อเกิน 1000  ลด 10%
        else if (age >= 18 && age <= 25 && price > 1000) {
            printf("Discount received: 10%%\n");
        }
        // กรณีอื่น ๆ  ไม่ลด
        else {
            printf("Sorry no discount applied\n");
        }
    }

    printf("\nThank you for shopping with us!\n"); // ข้อความปิดท้าย
    return 0; // สิ้นสุดโปรแกรม
}