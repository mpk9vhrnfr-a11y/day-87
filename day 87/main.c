#include <stdio.h>

enum Role {ADMIN, USER, GUEST};

int main(void) {
    enum Role r;

    printf("Enter role (0-ADMIN, 1-USER, 2-GUEST): ");
    scanf("%d", (int*)&r);

    if(r == ADMIN)
        printf("Welcome, Admin! You have full access.\n");
    else if(r == USER)
        printf("Welcome, User! You have limited access.\n");
    else if(r == GUEST)
        printf("Welcome, Guest! You have guest access.\n");
    else
        printf("Invalid role.\n");

    return 0;
}

