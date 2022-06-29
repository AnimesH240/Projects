#include <stdio.h>
int main()
{
  int age;
  char gender;
  printf("Enter the gender('M' for male & 'F' for female)");
  scanf("%c",&gender);

  switch (gender)
  {
    case 'M':
    printf("Enter Age");
    scanf("%d",&age);
    if ( age >= 90)
    {
      printf("Your pension amount is 4000.");
    }
    if ( age < 90 && age >= 60)
    {
      printf("Your pension amount is 6000.");
    }
    if ( age < 60)
    {
      printf("Your are not eligible for any pension amount");
    }
    break;
    case 'F':
    printf("Enter Age");
    scanf("%d",&age);
    if ( age >= 90)
    {
      printf("Your pension amount is 3000.");
    }
    if ( age < 90 && age >= 60)
    {
      printf("Your pension amount is 5000.");
    }
    if ( age < 60)
    {
      printf("Your are not eligible for any pension amount");
    }
    break;
    default:
    printf("Input invalid.");
  }
  return 0;
}
