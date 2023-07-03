#include "baseDMA.h"

class lackDMA :public baseDMA {
  private:
    char color[40];
  public:
    lackDMA(const char *c, const char * l, int r);
};