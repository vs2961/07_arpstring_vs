#include <stdio.h>
#include <string.h>


float prob1(int *arr, int size) {
    float sum = 0;
    int i;
    for (i = 0; i < size; i++) {
        sum += *arr;
        arr++;
    }
    return sum / size;
}

void prob2(int *arr1, int *arr2, int size) {
    int i;
    for (i = 0; i < size; i++) {
        *arr2 = *arr1;
        arr1++;
        arr2++;
    }
    return;
}

int prob3(char *arr) {
    int len = 0;
    while (*arr) {
        len++;
        arr++;
    }
    return len;
}

int main() {
    // Problem 1
    int a[6] = {1,2,3,4,5,6};
    int i;
    printf("The array is: [");
    for (i = 0; i < 5; i++) {
        printf("%d, ", a[i]);
    }
    printf("%d]\n", a[i]);
    printf("The average is %lf\n", prob1(a, 6));

    // Problem 2
    int b[6] = {0, 0, 0, 0, 0, 0};
    printf("The array is: [");
    for (i = 0; i < 5; i++) {
        printf("%d, ", b[i]);
    }
    printf("%d]\n", a[i]);
    printf("Replacing with: [");
    for (i = 0; i < 5; i++) {
        printf("%d, ", a[i]);
    }
    printf("%d]\n", a[i]);
    prob2(a, b, 6);
    printf("The array is now: [");
    for (i = 0; i < 5; i++) {
        printf("%d, ", b[i]);
    }
    printf("%d]\n", a[i]);
    
    // Problem 3
    char s[] = "Hello World!";
    printf("The length of \"Hello World!\" is %d\n", prob3(s));

    // strcpy
    char scpy1[256] = "Hello!";
    char scpy2[256] = "Goodbye.";
    printf("Using strcpy to copying s1: ");
    for (i = 0; i < prob3(scpy1); i++) {
        printf("%c", scpy1[i]);
    }
    printf(" to s2: ");
    for (i = 0; i < prob3(scpy2); i++) {
        printf("%c", scpy2[i]);
    }
    strcpy(scpy2, scpy1);
    printf("\ns2 is now ");
    for (i = 0; i < prob3(scpy2); i++) {
        printf("%c", scpy2[i]);
    }

    //strcat
    char scat1[256] = "Hello!";
    char scat2[256] = "Goodbye.";
    printf("\nUsing strcat to concatenate s1: ");
    for (i = 0; i < prob3(scat1); i++) {
        printf("%c", scat1[i]);
    }
    printf(" to s2: ");
    for (i = 0; i < prob3(scat2); i++) {
        printf("%c", scat2[i]);
    }
    strcat(scat2, scat1);
    printf("\ns2 is now ");
    for (i = 0; i < prob3(scat2); i++) {
        printf("%c", scat2[i]);
    }

    //strcmp
    char scmp1[256] = "Hello!";
    char scmp2[256] = "Goodbye.";
    printf("\nUsing strcmp to compare s1: ");
    for (i = 0; i < prob3(scmp1); i++) {
        printf("%c", scmp1[i]);
    }
    printf(" to s2: ");
    for (i = 0; i < prob3(scmp2); i++) {
        printf("%c", scmp2[i]);
    }
    printf("\n");
    if (strcmp(scmp1, scmp2) > 0) {
        printf("s1 is greater than s2");
    }
    else if (!strcmp(scmp1, scmp2)) {
        printf("s1 is equal to s2");
    }
    else {
        printf("s1 is less than s2");
    }
    

    //strchr
    char schr[256] = "abcdefghijihgfedcba";
    printf("\nThe string is abcdefghijihgfedcba");
    printf("\nPosition of first c is %ld", strchr(schr, 'c') - schr + 1);

    //strrchr
    char schrr[256] = "abcdefghijihgfedcba";
    printf("\nPosition of last c is %ld\n", strrchr(schrr, 'c') - schrr + 1);

    
}
