
struct bfloat16 {

  unsigned int data;

  public:
    bfloat16() {
      data = 0;
    }

    //cast to float
    operator float(){
      unsigned int extendedData = data << 16;
      return *reinterpret_cast<float*>(&extendedData);
    }

    //cast to bfloat16
    bfloat16& operator =(float t_floatVal) {
      data = (*reinterpret_cast<unsigned int *>(&t_floatVal)) >> 16;
      return *this;
    }
};

