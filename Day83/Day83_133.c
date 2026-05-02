//Q133: Create an enum for months and print how many days each month has.

#include <stdio.h>
#include <string.h>
typedef enum {
    JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC, INVALID
} Month;
Month get_month_from_string(char *month_str) {
    if (strcmp(month_str, "JAN") == 0) return JAN;
    if (strcmp(month_str, "FEB") == 0) return FEB;
    if (strcmp(month_str, "MAR") == 0) return MAR;
    if (strcmp(month_str, "APR") == 0) return APR;
    if (strcmp(month_str, "MAY") == 0) return MAY;
    if (strcmp(month_str, "JUN") == 0) return JUN;
    if (strcmp(month_str, "JUL") == 0) return JUL;
    if (strcmp(month_str, "AUG") == 0) return AUG;
    if (strcmp(month_str, "SEP") == 0) return SEP;
    if (strcmp(month_str, "OCT") == 0) return OCT;
    if (strcmp(month_str, "NOV") == 0) return NOV;
    if (strcmp(month_str, "DEC") == 0) return DEC;
    return INVALID;
}
void print_days_in_month(Month m) {
    switch(m) {
        case JAN: case MAR: case MAY: case JUL: case AUG: case OCT: case DEC:
            printf("31 days\n");
            break;
        case APR: case JUN: case SEP: case NOV:
            printf("30 days\n");
            break;
        case FEB:
            printf("28 or 29 days\n");
            break;
        default:
            printf("Invalid month\n");
    }
}
int main() {
    char input[10];
    printf("Enter month (3-letter abbreviation): ");
    scanf("%s", input);
    
    Month month = get_month_from_string(input);
    print_days_in_month(month);

    return 0;
}