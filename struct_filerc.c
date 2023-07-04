#include "s21_string.h"
#include <stdio.h>
 
void s21_strlen_tet();
void s21_strcmp_test();
 
int main() {
#ifdef Quest_1
s21_strlen_test();
#endif
#ifdef Quest_2
s21_strcmp_test();
#endif
}
 
void s21_strlen_test() {
printf("STRLEN TEST\n");
char *arr[4] = {"asd", "dhu[]", "", "123sdu"};
int size[4] = {3, 4, 0, 6};
for (int i = 0; i < 4; i++) {
int output = s21_strlen(arr[i]);
printf("\n '%s' '%d' '%s' \n", arr[i], output,
(output == size[i]) ? "SUCCESS" : "FAIL");
}
}
 
void s21_strcmp_test() {
printf("STRCMP TEST\n");
char str1[4] = "warning";
char str2[4] = "summa";
char str3[4] = "murena";
char str4[4] = "stol";
if (s21_strcmp(str1, str2) == 0)
printf("SUCCESS\n");
else
printf("FAIL\n");
if (s21_strcmp(str1, str3) > 0)
printf("SUCCESS\n");
else
printf("FAIL\n");
if (s21_strcmp(str4, str3) > 0)
printf("SUCCESS\n");
else
printf("FAIL\n");
if (s21_strcmp(str3, str4) < 0)
printf("SUCCESS\n");
else
printf("FAIL\n");
if (s21_strcmp(str3, str2) < 0)
printf("SUCCESS\n");
else
printf("FAIL\n");
}
