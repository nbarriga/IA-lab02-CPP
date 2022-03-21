//compile with: g++ -Wall -Wextra -std=c++11 -g crash.cpp -o crash
//debug with: gdb ./crash
int main(){
  int *a=nullptr;
  *a=0;
  return 0;
}
