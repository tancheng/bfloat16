
struct bfloat16 {

  unsigned int data;

  public:
    bfloat16() {
      data = 0;
    }

    bfloat16(float t_floatVal) {
      data = (*reinterpret_cast<unsigned int *>(&t_floatVal)) >> 16;
    }

    bfloat16(double t_doubleVal) {
      float floatVal = (float)t_doubleVal;
      data = (*reinterpret_cast<unsigned int *>(&floatVal)) >> 16;
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

