#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
  printf("I'm the SEMAFORO process and my PID is: %i\n", getpid());
  printf("delay semaforo %i: %i\n", argv[1], argv[2]);
  printf("parent semaforo %i: %i\n", argv[1], argv[3]);
}
