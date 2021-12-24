A simple implementation/library of BFloat16 for precision evaluation.
---------------------------------

BFloat16 is a 16-bit format originally developed by Google. BFloat16 stands for “Brain Floating Point Format”. The name flows from “Google Brain”, which is an artificial intelligence research group at Google where the idea for this format was conceived.
The original IEEE FP16 was not designed with deep learning applications in mind, its dynamic range is too narrow. BFLOAT16 solves this, providing dynamic range identical to that of FP32.
So, BFLOAT16 has:
  - 1 bit sign
  - 8 bits exponent
  - 7 bits fraction

The bfloat16 format, being a truncated IEEE 754 FP32, allows for fast conversion to and from an IEEE 754 FP32. In conversion to the bfloat16 format, the exponent bits are preserved while the significand field can be reduced by truncation.
