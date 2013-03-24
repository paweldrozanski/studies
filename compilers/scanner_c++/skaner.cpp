#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<string> skaner(string line){

  char prev, next;
  string buffer = "";
  vector<string> tok;

  // pusta linia - ignorowanie
  if (line.size() == 0) {
    cout << "Pusta linia" << endl;
    tok.push_back("empty line");
    tok.push_back("");
    return tok;
  }

  for (int i=0; i<line.size()-1; i++){

    prev=(char)line[i];
    next=(char)line[i+1];

    if (prev == '['){

      for (int index=i; index<line.size()-1; index++) {
        prev=(char)line[index];
        next=(char)line[index+1];

        if (next == ']') {
          index=i+1;
          tok.push_back("selektor");
          tok.push_back(buffer);
          return tok;
        }
        else {
          buffer += next;
        }
      }

    }
    else if (prev == '#') {
      buffer = "";
      for (int index=i; index<line.size()-1; index++) {

        prev=(char)line[index];
        next=(char)line[index+1];
        buffer += next;

      }

      tok.push_back("komentarz");
      tok.push_back(buffer);
      return tok;
    }
    else if ( (prev >= 'a' || prev <= 'z') || (prev >= 'A' || prev <= 'Z')) {

      bool left = true;
      tok.push_back("");
      tok.push_back("");

      buffer = "";
      for (int index=i; index<line.size()-1; index++) {
        prev=(char)line[index];
        next=(char)line[index+1];

        if (left) {
          tok[0] += prev;
          if (next == '=') {
            left = false;
          }
        }
        else {
          tok[1] += next;
        }
      }
      return tok;
    }
    else if ((prev > 0) || (prev <= 9)){
      // nieobsluzone
      tok.push_back("NaN");
      tok.push_back("");
      return tok;
    }
    else {
      cout << line << endl;
      tok.push_back("NaN");
      tok.push_back("");
      return tok;
    }

  }
}

int main () {

  string line;
  ifstream myfile ("tmp.ini");
  if (myfile.is_open())
  {
    while ( myfile.good() )
    {
      getline (myfile,line);
      vector<string> token = skaner(line);
      cout << "Token: '" << token[0] << "'" << endl << "wartosc: '" << token[1] << "'" << endl << endl;
    }
    myfile.close();
  }

  else cout << "Unable to open file"; return 0;
}
