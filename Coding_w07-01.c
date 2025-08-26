#include <stdio.h>

int main() { 

    float score; //ประกาศตัวแปร score
    float score_plus; //ประกาศตัวแปร score_plus เพื้อใช้ในการคำนวณ

    printf("Please enter your score : "); 
    scanf("%f", &score); //แสดงข้อความให้ผุ็ใช้ใส่ค่า คะแนน
    
    if (score >= 50) {
        score_plus = score + (score*0.05); //ถ้าคะแนนมากกว่าหรือเท้ากับ 50 ให้นำคะแนนไปคำนวณบวกคะแนนเพิ่มไปอีก 5%
    } else {
        score_plus = score; //ถ้าคะแนนน้อยกว่า 50 จะไม่ได้การบวกคะแนนเพิ่ม
    }

    printf("Your final score is : %.2f\n", score_plus); //แสดงผลคะแนนหลังจากการคำนวณแล้ว
    printf("End of evaluation\n"); //แสดงข้อความจบการคำนวณ

    return 0;

}
