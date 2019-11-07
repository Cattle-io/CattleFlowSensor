#include <iostream>
#include <vector>
#include <string>

using namespace std;

class FlowSensor {
  public:
    int getFlowValue();
    void readAnalogValue();
  private:
    int flowValue;
};

int FlowSensor::getFlowValue() {
  return flowValue;
}
void FlowSensor::readAnalogValue() {
  flowValue = 10;
}

int main() {

  FlowSensor rxf232;

  rxf232.readAnalogValue();
  int currentFlow = rxf232.rgetFlowValue();

  cout << currentFlow; // Call the method with an argument
  return 0;
}