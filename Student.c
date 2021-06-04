/*
create a structure for student and read the no.of.present in the month of jun,july,aug and sep and check the eligibility for writing the examination. Total working days=84(no.of.working days jun=21,july=21,aug=21,sep=21) above >=75 percentage eligibility is "yes" otherwise "no".No.of.working days in a month should be less than equal to 21.

Input Format

1001 sam 20 20 20 20

Constraints

-

Output Format

Reg.no:1001 Name:sam Total.No.of.present days:80 Attendence:95.24 eligibility:yes

Sample Input 0

1001
sam
20
20
20
20
Sample Output 0

Reg.no:1001
Name:sam
Total.No.of.present days:80
Attendence:95.24
eligibility:yes
Sample Input 1

1002
ravi
10
10
10
10
Sample Output 1

Reg.no:1002
Name:ravi
Total.No.of.present days:40
Attendence:47.62
eligibility:no
Sample Input 2

1003
kala
21
22
21
21
Sample Output 2

Invalid data:No.of.present days is greater than working day

*/


#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student

{
    int reg;
    
    int jun;
    
    char name[20];

    int july;

    int aug;

    int sep;

    float tot;

    float avg;

    char eligibilty[5];

};

int main()
{
    struct student s;
    scanf("%d%s%d%d%d%d",&s.reg,s.name,&s.jun,&s.july,&s.aug,&s.sep);
    s.tot = s.jun + s.july + s.aug + s.sep;
    s.avg = (s.tot*100)/84;
    if(s.tot>84)
    {
        printf("Invalid data:No.of.present days is greater than working day");
        
    }
    else{
        if(s.avg>70)
    {
        strcpy(s.eligibilty,"yes");
    }
    else
    {
        strcpy(s.eligibilty,"no");
    }
    printf("Reg.no:%d",s.reg);
    printf("\nName:%s",s.name);
    printf("\nTotal.No.of.present days:%0.0f",s.tot);
    printf("\nAttendence:%0.2f",s.avg);
    printf("\neligibility:%s",s.eligibilty);
    
    }
    
    
    return 0;
}