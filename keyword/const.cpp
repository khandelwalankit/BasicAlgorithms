#include<iostream>
#include<string.h>

void change_const_content(const char *str){
  //strcpy(str,"phosphate"); //will not work cannot change str
  const char *abc = str;
  char *str1 = new char();
  strcpy(str1, "phosphate");
  str = str1;
  std::cout<<str<<"\n";
}

void change_const_content1(char *const str){
  strcpy(str,"phosphate");
}

//void change_const_content2(const char *const str){
//  strcpy(str,"helium");
//}

int main(int argc,char** argv){
  char *word;
  word = new char();
  strcpy(word,"Sulphate");
  change_const_content(word);
  change_const_content1(word);
  //change_const_content2(word);
  std::cout<<word<<"\n";
  return 1;
}


