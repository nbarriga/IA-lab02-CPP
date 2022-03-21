//compile with: g++ -Wall -Wextra -std=c++11 -g memleak.cpp -o memleak
//debug with: valgrind --leak-check=full ./memleak
int main(){
  int *a = new int[3];
  int *b = new int[3];
  a[0] = b[0] = 1;
  delete a;
  return 0;
}
