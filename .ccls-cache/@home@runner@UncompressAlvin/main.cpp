using namespace std;
#include <iostream>
#include <string>

string uncompress(string s)
{
  string result = "";
  string numbers = "0123456789";
  int i = 0, j = 0;
  while (j<s.length())
    {
      if (numbers.find(s[j]) != string::npos)
      {
        j++;
      }else{
        int num = stoi(s.substr(i,j));
        result += string(num, s[j]);
      }
      j++;
      i = j;
    }
  return result;
}

int main() {
  uncompress ( "1k6j7f");
}