// 상자의 체적을 구하는 프로그램을 작성하여 보자. 체적은 길이 * 너비 * 높이로 계산된다. 
// 상자의 크기는 사용자가 입력한다. 상자의 크기는 200 * 200 * 200을 넘지 않는다. 사용되는 메모리의 크기를 최소로 하여 보자
#include <iostream>
using namespace std;

int main(){
  short answer;
  int volume;
  
  cout << "상자의 길이, 너비, 높이를 입력하면 부피가 계산되는 프로그램 입니다." << endl;
  cout << "숫자는 200이하로 입력해 주세요." << endl;
  
  cout << "상자의 길이를 입력하세요. ";
  cin >> answer;
  volume += answer;
  
  cout << "상자의 너비를 입력하세요. ";
  cin >> answer;
  volume *= answer;
  
  cout << "상자의 높이를 입력하세요. ";
  cin >> answer;
  volume *= answer;
  
  cout << "상자의 부피는 " << volume << "입니다." << endl;
  
  return 0; 
}
