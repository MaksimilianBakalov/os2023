#include "../kernel/types.h"
#include "../kernel/stat.h"
#include "../user/user.h"

int main(int argc, char *argv[])
{
  if (argc < 2) {

  } else if (argc <= 0) {
    write(1, "error", 5);
  }
  exit(0);
}
