#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
map<string, char> digit_map = {
    {"zero", '0'}, {"one", '1'}, {"two", '2'}, {"three", '3'}, {"four", '4'}, {"five", '5'}, {"six", '6'}, {"seven", '7'}, {"eight", '8'}, {"nine", '9'}};
bool is_operation(const string &s)
{
   return s == "add" || s == "sub" || s == "mul" || s == "div" || s == "rem" || s == "pow";
}
bool word_to_int(const string &word, int &num)
{
   string val = "";
   for (size_t i = 0; i < word.size();)
   {
      bool found = false;
      for (auto d : digit_map)
      {
         string key = d.first;
         if (word.substr(i, key.length()) == key)
         {
            val += d.second;
            i += key.length();
            found = true;
            break;
         }
      }
      if (!found)
         return false;
   }
   num = stoi(val);
   return true;
}
bool eval(vector<string> &tokens, int &pos, int &result)
{
   if (pos >= tokens.size())
      return false;
   string token = tokens[pos++];
   if (is_operation(token))
   {
      int arg1, arg2, arg3, tmp;
      if (token == "add" || token == "sub" || token == "mul" || token == "div" || token == "rem" || token == "pow")
      {
         if (pos < tokens.size() && is_operation(tokens[pos]))
         {
            if (!eval(tokens, pos, arg1))
               return false;
         }
         else
         {
            string s1 = tokens[pos++];
            if (!word_to_int(s1, arg1))
               return false;
         }
         if (pos < tokens.size() && is_operation(tokens[pos]))
         {
            if (!eval(tokens, pos, arg2))
               return false;
         }
         else
         {
            string s2 = tokens[pos++];
            if (!word_to_int(s2, arg2))
               return false;
         }
         if (token == "add")
            result = arg1 + arg2;
         else if (token == "sub")
            result = arg1 - arg2;
         else if (token == "mul")
            result = arg1 * arg2;
         else if (token == "div")
         {
            if (arg2 == 0)
               return false;
            result = arg1 / arg2;
         }
         else if (token == "rem")
         {
            if (arg2 == 0)
               return false;
            result = arg1 % arg2;
         }
         else if (token == "pow")
            result = pow(arg1, arg2);
         return true;
      }
   }
   else
   {
      if (!word_to_int(token, result))
         return false;
      return true;
   }
   return false;
}
int main()
{
   string line;
   getline(cin, line);
   vector<string> tokens;
   stringstream ss(line);
   string word;
   while (ss >> word)
      tokens.push_back(word);
   int res = 0, pos = 0;
   bool ok = eval(tokens, pos, res) && pos == tokens.size();
   if (!ok)
      cout << "expression evaluation stopped invalid words present" << endl;
   else
      cout << res << endl;
   return 0;
}