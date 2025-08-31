#include <stdio.h>

int main() {
    int level;
    printf("Enter level (1-4): ");
    scanf("%d", &level);

    switch (level) {
        case 1:
            printf("Beginner\n");
            break;
        case 2:
            printf("Intermediate\n");
            break;
        case 3:
            printf("Advanced\n");
            break;
        case 4:
            printf("Expert\n");
            break;
        default:
            if (level <= 0) {
                printf("The level below 1 is not allowed\n");   
            } else {
                printf("The level above 4 is not allowed\n");
            }
    }

    return 0;
}

/* วิเคราะห์โปรแกรมเดิม : ในโปรแกรมเดิมตามที่โจทย์ให้มา กรณีที่ใส่ข้อมูล level เป็น 1-4 จะทำงานได้ถูกต้องตามเงื่อนไขที่กำหนดไว้ 
แต่ถ้าใส่ข้อมูล  เป็น 0 หรือ 10 จะไม่ตรงกับเงื่อนไขไหนเเละจะแสดงข้อความ "Invalid level" ตาม default
ซึ่งค่า default คือการที่เรากำหนด code ที่จะรันไว้ในกรณีที่ค่า switch ไม่ตรงกับค่าใดที่กำหมดไว้เลย 
และ การ break ที่การที่เราระบุไว้เพื่อให้ code ที่รันตามเงื่อนไขเมื่อทำงานเสร็จจะหยุดทำงานเเละไม่ไปรัน code ในบรรทัดถัดมานั่นเอง */

/* วิเคราะห์โปรแกรมที่ปรับปรุงแล้ว : ในโปรแกรมที่ปรับปรุงแล้วจะมีการเพิ่มเงื่อนไขในส่วนของ default 
โดยใช้ if-else เพื่อตรวจสอบว่า level ที่ใส่เข้ามาว่าถ้าน้อยกว่าหรือเท่ากับ 0 จะให้แสดงข้อความ 
"The level below 1 is not allowed" เเละถ้ามากกว่า 4  หรือคือการที่ไม่ตรงกับเงื่อนไขไหนเลยจะให้แสดงข้อความ 
"The level above 4 is not allowed" 

โดยที่เมื่อกำหนดให้ level -4 กับ 0 จะแสดงข้อความ "The level below 1 is not allowed"
และถ้ากำหนดให้ level เป็น 1-4 จะแสดงข้อความตามเงื่อนไขที่กำหนดไว้
และถ้ากำหนดให้ level เป็น 100 จะแสดงข้อความ "The level above 4 is not allowed" */