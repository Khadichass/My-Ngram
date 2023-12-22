#include <stdio.h>
void func(char** param_1, int length)
{

  int array[127] = {0}; 
  for (int i = 1; i < length; i++) {
    for (int j = 0;param_1[i][j]; j++) 
    {
      char letter = param_1[i][j];
      array[(int)letter]++;
    }
  }

  for (int i = 0; i < 127; i++) {
    if (array[i] > 0) {
      printf("%c:%d\n", i , array[i]);
    }
  }

}

int main(int argc, char** argv)
{

  func(argv, argc);
}