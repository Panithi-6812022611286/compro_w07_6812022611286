#include <stdio.h>

int main() {

    float score;
    float score_plus;

    printf("Please enter your score : ");
    scanf("%f", &score);
    
    if (score >= 50) {
        score_plus = score + (score*0.05);
    } else {
        score_plus = score;
    }

    printf("Your final score is : %.2f\n", score_plus);
    printf("End of evaluation\n");

    return 0;
}