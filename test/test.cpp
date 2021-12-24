#include <iostream>
#include "../bfloat16.hpp"

using namespace std;

int main(){
  bfloat16 x;
  for(x = 1.0f; x < 2.0f; x.data++){
    cout<<x.data<<" "<<x<<endl;
  }
  
  return 0;
}
