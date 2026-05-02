//Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

#include <stdio.h>
enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};
int main() {
    const char *dayNames[] = {
    "SUNDAY",
    "MONDAY",
    "TUESDAY",
    "WEDNESDAY",
    "THURSDAY",
    "FRIDAY",
    "SATURDAY"
    };
    for (int i = SUNDAY; i <= SATURDAY; i++) {
        printf("%s = %d\n", dayNames[i], i);
    }
    return 0;
}