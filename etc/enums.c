#include<stdio.h>

int main()
{
  enum DEFCON_EXERCISE_TERM
  {
    COCKED_PISTOL,
    FAST_PACE,
    ROUND_HOUSE,
    DOUBLE_TAKE,
    FADE_OUT
  } level;
  level = COCKED_PISTOL;
  printf("%d\n" , level);
}
