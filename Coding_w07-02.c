#include <stdio.h>

int main () {
    int X, Y, mix; //ประกาศตัวแปร x, y ,mix เป็น int ทั้งหมด
    printf("Please enter the value of X : ");
    scanf("%d", &X); //แสดงข้อความให้ใส่ค่าของ X
    printf("Please enter the value of Y : ");
    scanf("%d", &Y); //แสดงข้อความให้ใส่ค่าของ Y

    mix = (X>Y)? X:Y; //ระบุไว้ว่า ถ้า ( X มากกว่า Y เป็น True ค่า mix = X ) เเละถ้า ( Y มากกว่า X เป็น False ค่า mix = Y )

    if (mix>Y) {
        printf("X has value more than Y\n"); //ถ้าค่า mix ที่ได้ มากกว่า Y ให้แสดงผลว่า ค่า X มากกว่า Y
    } else if (mix>X) {
        printf("Y has value more than X\n"); //ถ้าค่า mix ที่ได้ มากกว่า X ให้แสดงผลว่า ค่า Y มากกว่า X
    } else {
        printf("X and Y is equal\n"); //นอกเหนือจากนั้นถ้าไม่มีค่าไหนมากกว่ากันแสดงว่าทั้งสองค่าเท่ากัน  ให้แสดงผลว่าค่าทั้งสองเท่ากัน
    }

    return 0;

}
