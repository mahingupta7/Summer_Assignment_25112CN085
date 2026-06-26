#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("🎓 Welcome to the Simple Quiz!\n");

    printf("\nQ1. What is the capital of India?\n1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("\nQ2. Who invented the C language?\n1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("\nQ3. Which data type stores decimal values?\n1. int\n2. float\n3. char\n4. double\n");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("\n You scored %d out of 3!\n", score);

    if (score == 3)
        printf("Excellent! Perfect score.\n");
    else if (score == 2)
        printf("Good job!\n");
    else
        printf("Keep practicing!\n");

    return 0;
}
