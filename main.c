#include <stdio.h>
int main()
{
    int phy,chem,math,bio,comp,total;
    float per;
    printf("enter marks of physics:\n");
    scanf("%d",&phy);
     printf("enter marks of chemistry:\n");
    scanf("%d",&chem);
     printf("enter marks of math:\n");
    scanf("%d",&math);
     printf("enter marks of biology:\n");
    scanf("%d",&bio);
     printf("enter marks of computer:\n");
    scanf("%d",&comp);
    total=phy+chem+math+bio+comp;
    per=total*100/500;
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80)
    printf("Grade B");
    else if(per>=70)
    printf("Grade C");
    else if(per>=60)
    printf("Grade D");
    else if(per>=50)
    printf("Grade E");
    else if(per>=80)
    printf("Grade F");
    return 0;
}
