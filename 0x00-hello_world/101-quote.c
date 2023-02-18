#include <unistd.h>

/**
 * main - entry point of program
 *
 * Return: always 1 (success)
 */
int main(void)
  char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  write(2, msg, sizeof(msg)-1);
  return (1);
}

