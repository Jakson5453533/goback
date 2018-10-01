using namespace std;

class pokemon{
    private:
        string name;
        string type;
    public:
        pokemon();
        void x(){
           cout<<name<<endl;
           cout<<type;
        }
};
pokemon::pokemon(){
    name="Bulbasaur";
    type="Glass";
}
