#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int get_char_code_at_position(char * string, int position) {
    return (int) (string[position - 1]);
}

int main() {
    char input[256];
    printf("%d\n",atoi("komne"));
    printf("Enter flag to check: ");
    scanf("%s", input);
    if (strlen(input) * 4 != get_char_code_at_position(input, 1)) {
        printf("%I64d != %d\n", strlen(input)*4, get_char_code_at_position(input, 1));
        printf("Wrong length!\n");
        printf("%d",input[8]);
        return 0;
    }
    if (strncmp(input, "4_points", 8)) {
        printf("Wrong check 1!\n");
        return 0;
    }
    if (strcmp(&input[8], "komne") != 0) {
        printf("Wrong check 2!\n");
        return 0;
    }
    printf("Yes! Correct flag is %s\n", input);
    return 0;
}

