#include <stdio.h>

int main()
{
    struct student temp, fs[3] = {{1, "manish", 45, 47, 49}, {2, "ankur", 43, 44, 45}, {3, "swati", 46, 42, 43}};
    int i, n = 3, total[3] = {0}, avg[3] = {0}, tot = 0;
    for (i = 0; i < n; i++)
    {
        total[i] = fs[i].marks.sub1 + fs[i].marks.sub2 +
                   fs[i].marks.sub3; // students total
        avg[i] = total[i] / 3;
    }
