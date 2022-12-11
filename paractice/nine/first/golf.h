// const int = const static
const int Len = 40;

struct golf
{
  /* data */
  char fullname[Len];
  int handicap;
};

void setgolf(struct golf &g, const char *name, int hc);
int setgolf(struct golf &g);

void handicap(struct golf &g, int hc);

void showgolf(const struct golf &g);