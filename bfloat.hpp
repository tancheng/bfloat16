
struct bfloat16 {

  unsigned short int m_mantissa;

  public:
    bfloat16() {
      m_mantissa = 0;
    }

    //cast to float
    operator float(){
      unsigned int extendedMantissa = m_mantissa << 16;
      return *reinterpret_cast<float*>(&extendedMantissa);
    }

    //cast to bfloat16
    bfloat16& operator =(float t_floatVal) {
      m_mantissa = (*reinterpret_cast<unsigned int *>(&t_floatVal)) >> 16;
      return *this;
    }
};

