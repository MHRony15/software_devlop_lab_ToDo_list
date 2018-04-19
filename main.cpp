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
        delet();
    }
    if(tmp==4){
        exit(1);
    }
}
void  todo :: show(){
        io.open("todo.txt");
        int i=1;
        std::cout<<"\n\n";
        while(!io.eof()){
            getline (io,task_name);
            getline (io,task_description);
            getline (io,task_date);
            if(io.eof()){
                io.close();
                manual();
            }
            std::cout<<i<<std::endl;
            std::cout<<task_name<<"\t\t\t\t"<<task_date<<std::endl;
            std::cout<<task_description<<std::endl;
            i++;
        }
        io.close();
        manual();
}
void todo :: delet(){
    std::cout<<"Which one do you want to delete?\n";
    std::cin>>tmp;
    std::ofstream temp;
    io.open("todo.txt");
    temp.open("temp.txt",std::ios::out);
    int i=1;
    while(!io.eof()){
            getline (io,task_name);
            getline (io,task_description);
            getline (io,task_date);
            if(i!=tmp && !io.eof()){
                temp<<task_name<<std::endl;
                temp<<task_description<<std::endl;
                temp<<task_date<<std::endl;
            }
            i++;
    }
    temp.close();
    io.close();
    remove("todo.txt");
    rename("temp.txt","todo.txt");
    manual();
}
int main(){
    todo my;
    my.show();
    return 0;
}
