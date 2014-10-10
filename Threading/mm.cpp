#include<iostream>
#include<thread>
#include<vector>

int printbythread(int num){
//std::cout<< "Num obtained is: "<< num << std::endl;
}
int main(int argc, char** argv){

int num = 10;
std::thread new_thread(printbythread, num);
std::cout<<"Thread Id:"<<new_thread.get_id() << std::endl;
new_thread.join();

return 1;
}
