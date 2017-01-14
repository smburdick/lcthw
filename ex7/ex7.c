#include<stdio.h>

int main(int argc, char*argv[])
{
  int dist = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'M';
  char first_name[] = "Sam";
  char last_name[] = "Burdick";

  printf("You are %d miles away\n", dist);
  printf("You have %f levels of power\n", power);
  printf("Vegeta, his power level is over %f!!!\n" , super_power);
  printf("My name is %s %c %s\n", first_name, initial, last_name);

  int bugs = 100;
  double bug_rate = 1.2;
  printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

  unsigned long universe_of_defects = 1L * 1000000024L * 1000000024L * 1000000024L; // overflow
  printf("The universe has %ld bugs.\n", universe_of_defects);

  double expected_bugs = bugs * bug_rate;
  printf("You're expected to have %f bugs.\n", expected_bugs);
  double part_of_universe = expected_bugs / universe_of_defects;
  printf("That's only a %e porition of the universe\n", part_of_universe);

  char nul_byte = '\0'; // will print as '' (nothing) for %c but 0 for %d and -0.000000 for %f. Interesting.

  int care_percentage = bugs * nul_byte;
  printf("nul_byte = %d\n", nul_byte);
  printf("Which means you should care %d%%.\n", care_percentage );

}
