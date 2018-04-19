#include<bits/stdc++.h>
std::fstream io;
class todo{
    private:
        int tmp;
        std::string task_name;
        std::string task_description;
        std::string task_date;
    public:
        void add();
        void show();
        void delet();
        void t_name();
        void t_description();
        void t_date();
        void manual();
        void check();
};
int main(){
    todo my;
    my.show();
    return 0;
}
