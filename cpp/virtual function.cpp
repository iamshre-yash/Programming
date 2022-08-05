#include <iostream>
#include <string>
// using namespace std;
#define INTEGER int
void log(const char *); //cout Function

class Entity
{
    public:
    virtual std::string GetName(){ return "Entity";}
};
class Player :public Entity{
    private:
    std::string m_Name;
    public:
    Player(const std::string&name)
    : m_Name(name){}
    std::string GetName() override {return m_Name;}
};
void PrintName(Entity* entity){
    std::cout<< entity->GetName() << std::endl;
}
#if 1
int main()
{
    INTEGER num = 6;
    log("Hello World");
    std::cout<<num<<std::endl;
    Entity* e = new Entity();
    PrintName(e);
    
    Player* p =new Player("ShreYash");
    PrintName(p);

    return 0;
}
void log(const char * message){
    std::cout<<message<<std::endl;
}
#endif 
