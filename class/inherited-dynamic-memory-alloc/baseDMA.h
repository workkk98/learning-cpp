#ifndef __base_DMA_

#define __base_DMA_

class baseDMA {
  private:
    char *label;
    int rating;
  public:
    baseDMA(const char * l = "null", int r = 0);
    baseDMA(const baseDMA &rs);
    virtual ~baseDMA();
    baseDMA &operator=(const baseDMA & rs);
};


#endif