#include <iostream>
#include <string>
using namespace std;

class Membro{
  private:
    string nome;
    string email;
    int reuniao1;
    int temporamo;

  public: 
    Membro(string n, string mail, int r1, int tramo){
      nome = n;
      email = mail;
      reuniao1 = r1;
      temporamo = tramo;
    };

    string getnome(void){ return nome;}
    string getemail(void){ return email;}
    int getreuniao1(void){ return reuniao1;}
    int gettemporamo(void){ return temporamo;}    //provavelmente mudar para colocar um metodo que depende de reuniao1

    void setnome(string n){ nome = n;}
    void setemail(string mail){ email = mail;}
    void setreuniao1(int r1){ reuniao1 = r1;}
    void settemporamo(int tramo){ temporamo = tramo;}    //provavelmente mudar para colocar um metodo que depende de reuniao1

};

int main(){
  Membro zezin("zezino","mail@mail.com", 121212, 10);
    
  zezin.setnome("Arnaldo");
  zezin.setemail("4rn4ld0@gmail.com");
  cout << zezin.getnome() << endl;
  cout << zezin.getemail() << endl;
  cout << zezin.getreuniao1() << endl;
  cout << zezin.gettemporamo() << endl;
  return 0;
}
