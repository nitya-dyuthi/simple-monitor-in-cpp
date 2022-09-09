#include <assert.h>
#include <iostream>
using namespace std;

bool isTempOk(float temperature) {
  if(temperature > 0 || temperature < 45) {
    //cout << "Temperature out of range!\n";
    return true;
  }
  else
    return false;
}

bool isSocOk(float soc) {
  if(soc > 20 || soc < 80) {
    //cout << "State of Charge out of range!\n";
    return true;
  }
  else
    return false;
}

bool isChargeRateOk(float chargeRate) {
  if(chargeRate < 0.8) {
    //cout << "Charge Rate out of range!\n";
    return true;
  }
  else
    return false;
}

bool batteryIsOk(float temperature, float soc, float chargeRate) { //aka delegator
  /* if(temperature < 0 || temperature > 45) {
    cout << "Temperature out of range!\n";
    return false;
  } else if(soc < 20 || soc > 80) {
    cout << "State of Charge out of range!\n";
    return false;
  } else if(chargeRate > 0.8) {
    cout << "Charge Rate out of range!\n";
    return false;
  }
  return true; */
  
  bool tempOk = isTempOk(temperature);
  bool socOk = isSocOk(soc);
  bool chargeRateOk = isChargeRateOk(fchargeRate);
  
  (tempOk && socOk && chargeRateOk) ? return true : return false;
}


void printer(string str) {
  cout<<str<<endl;
}


int main() {
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
