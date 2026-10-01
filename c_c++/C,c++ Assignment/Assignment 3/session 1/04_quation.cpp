#include<iostream>
#include<string>
using namespace std;

class Task{
public:
    string name;
    bool done;

    Task(string n){
        name=n;
        done=false;
    }

    void markdone(){
        done=true;
    }

    void display(){
        cout<<name<<" - "<<(done ? "Done" : "Pending")<<endl;
    }
};

class TaskList{
    Task* tasks[10];
    int count=0;

public:
    void addTask(string name){
        tasks[count]=new Task(name);
        count++;
    }

    void markTaskDone(int n){
        tasks[n]->markdone();
    }

    void showTasks(){
        for(int i=0;i<count;i++){
            cout<<i+1<<". ";
            tasks[i]->display();
        }
    }
};

int main(){
    TaskList list;

    list.addTask("C++ Assignment");
    list.addTask("SQL Assignment");
    list.addTask("Python Practice");

    int n;
    cout<<"Enter task number to Done: ";
    cin>>n;

    list.markTaskDone(n-1);

    list.showTasks();

    return 0;
}
