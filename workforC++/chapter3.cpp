#include <iostream>

using namespace std;
int main() {
  int first, second, third, mid, final;
  float q;
  cout << "==========QUIZZES==========\n";
  cout << "Enter first quizz (10):";
  cin >> first;
  cout << "Enter second quizz(10):";
  cin >> second;
  cout << "Enter third quizz (10):";
  cin >> third;
  cout << "==========MID-TERM=========\n";
  cout << "Enter mid-term (40): ";
  cin >> mid;
  cout << "==========FINAL============\n";
  cout << "Enter final (50):";
  cin >> final;

  q = first + second + third;

  cout << "Quizz Total:" << q / 3 << endl;
  cout << "Mid term:" << mid << endl;
  cout << "Final:" << final << endl;
  cout << "Total:" << (q / 3) + (mid + final) << endl;
  cout << "Your score is" << (((q / 3) + (mid + final) >= 50) ? "Pass \n" : "fail \n");
  
  system("pause")
  return 0;
}
