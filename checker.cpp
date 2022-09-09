#include <assert.h>
#include <iostream>
using namespace std;

bool isTempOk(float temperature) {
  if(temperature > 0 && temperature < 45) {
    return true;
  }
    return false;
}

bool isSocOk(float soc) {
  if(soc > 20 && soc < 80) {
    return true;
  }
    return false;
}

bool isChargeRateOk(float chargeRate) {
  if(chargeRate < 0.8) {
    return true;
  }
    return false;
}

bool batteryIsOk(float temperature, float soc, float chargeRate) { //aka delegator
  
  bool tempOk = isTempOk(temperature);
  bool socOk = isSocOk(soc);
  bool chargeRateOk = isChargeRateOk(chargeRate);
  
  return (tempOk && socOk && chargeRateOk);
}


void printer(string str) {
  cout<<str<<endl;
}


int main() {
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
