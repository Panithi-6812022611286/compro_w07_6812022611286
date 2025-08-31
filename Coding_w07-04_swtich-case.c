#include <stdio.h>
int main() {
    int level;  
    printf("Enter membership level (1-4): ");
    scanf("%d", &level);

    switch (level) {
        case 1:
            printf("Silver Member: 5%% discount\n");
            break;
        case 2:
            printf("Gold Member: 10%% discount + Reward points\n");
            break;
        case 3:
            printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
            break;
        case 4:
            printf("Diamond Member: ได้ทุกอย่าง + VIP events\n");
            break;
        default:
            printf("Invalid membership level\n"); 
    }

    return 0;
}   

/* เปรียบเทียบการใช้ switch-case กับ if-else if

ด้านความยืดหยุ่น if-else if จะมีความยืดหยุ่นมากกว่า เพราะสามารถกำหนดเงื่อนไขที่ซับซ้อนได้มากกว่า switch-case 
เช่น การใช้ตัวดำเนินการเปรียบเทียบ (<, >, <=, >=, !=) หรือการใช้เงื่อนไขหลายๆ เงื่อนไขร่วมกันได้ 
แต่ switch-case จะจำกัดเฉพาะการเปรียบเทียบค่าคงที่เท่านั้น (เช่น ตัวเลขหรืออักขระ)

เเต่ทางด้านความกระชับ switch-case จะมีความกระชับกว่าเมื่อมีหลายกรณีที่ต้องตรวจสอบเนื่องจากไม่ต้องเขียนคำสั่ง
 if-else ซ้ำๆ ทำให้ Code ดูสะอาดตาและง่ายต่อการอ่านมากขึ้น

สรุป: การเลือกใช้ระหว่าง switch-case กับ if-else if ขึ้นอยู่กับความต้องการของโปรแกรม
เเต่ในกรณีนี้ที่ค่า level มีค่าจำกัดระหว่าง 1-4 การใช้ switch-case จะเหมาะสมกว่าในกรณีที่จะเเก้ไข
เนื่องจากทำให้ Code ดูสะอาดตาและง่ายต่อการอ่านมากขึ้น */