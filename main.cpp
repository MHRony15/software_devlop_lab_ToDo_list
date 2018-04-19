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
void  todo :: add(){
        io.open("todo.txt",std::ios::app);
        t_name();
        getchar();
        getline(std::cin,task_name);
        t_description();
        getline(std::cin,task_description);
        t_date();
        getline(std::cin,task_date);
        io<<task_name<<std::endl;
        io<<task_description<<std::endl;
        io<<task_date<<std::endl;
        io.close();
        manual();

}
void todo :: manual(){
    std::cout<<"\n\nSelect an option\n";
    std::cout<<"1.Add\n";
    std::cout<<"2.Show\n";
    std::cout<<"3.Delete\n";
    std::cout<<"4.Exit\n";
    check();
}
void todo :: check(){

    std::cin>>tmp;
    if(tmp==1){
        add();
    }
    if(tmp==2){
        show();
    }
    if(tmp==3){
        //delet();
    }
    if(tmp==4){
        exit(1);
    }
}
int main(){
    todo my;
    my.show();
    return 0;
}
