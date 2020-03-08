// Define constructor outside the class

#include <iostream>
using namespace std;

class  Number{
  private:
    int count;
  public:
    Number();

    void loop(){
      for(count = 0; count < 10; count++){
        cout << count <<endl;
      }
    }
};

Number::Number(){
  count = 0;
}

int main(){
  Number num;
  num.loop();
  return 0;
}
