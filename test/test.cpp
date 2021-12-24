#include <iostream>
#include "../bfloat.hpp"

using namespace std;

int main(){
  bfloat16 x;
  for(x = 1.0f; x < 2.0f; x.m_mantissa++){
    cout<<x.m_mantissa<<" "<<x<<endl;
  }
  
  return 0;
}
