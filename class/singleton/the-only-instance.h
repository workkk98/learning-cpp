class TheOnlyInstance {
  private:
    int foo;
  protected:
    TheOnlyInstance();
  public:
    char bar[10];
    static TheOnlyInstance* getTheOnlyInstance();
};