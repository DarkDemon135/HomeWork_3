#include<iostream>
#include<string.h>
using namespace std;

class Reservoir
{
    char *name = new char[30];
    int length;
    int width;
    int depth;
public:
    void Add(char*);
    void Show();
    void Volume();
    void Area();
    void Srav();
    int Getsea();
 
    Reservoir(const Reservoir &obj);
 
 
    Reservoir();
    ~Reservoir();
};

void Reservoir::Add(char *name)
{
    strcpy(this->name, name);
    cout << "Введите ширину (m): ";
    cin >> width;
    cout << "Введите длина (m):";
    cin >> length;
    cout << "Введите максимальная глубину (m): ";
    cin >> depth;
}
 
void Reservoir::Show()
{
    cout << "Имя: " << name << endl;
    cout << "Ширина (m): " << width << endl;
    cout << "Длина (m):" << length << endl;
    cout << "Глубина (m): " << depth << endl;
}
 
void Reservoir::Volume()
{
 
    cout << "Объем: " << length*width*depth << " m3" << endl;
}
 
void Reservoir::Area()
{
 
    cout << "Область: " << length*width << " m2" << endl;
}
 
void Reservoir::Srav()
{
    if (length*width*depth < 10000)
    {
        cout << name << " - бассейн" << endl;
    }
    else
    {
        cout << name << " - sea" << endl;
    }
 
}
 
int Reservoir::Getsea(){
    return length*width*depth;
}
 
Reservoir::Reservoir(const Reservoir &obj)
{
 
    strcpy(name, obj.name);
    length = obj.length;
    width = obj.width;
    depth = obj.depth;
}
 
Reservoir::Reservoir()
{
    strcpy(name, "qwerty");
    length = 1 + rand() % 1000;
    width = 1 + rand() % 50;
    depth = 1 +rand() % 20;
}
 
 
Reservoir::~Reservoir()
{
    delete[] name;
    //cout << "del  ";
 
}

int main()
{
    srand(time(0));
    int n = 5;
    Reservoir* a = new Reservoir[n];
    Reservoir b;
    //= a[2];
    //int z = 0;
    /*for (int i = 0; i < n; i++)
    {
        a[i].Volume();
        a[i].Area();
        a[i].Srav();
        if (a[i].Getsea()>12500)
        {
            z++;
        }
 
    }
    cout << z << endl;*/
    a[2].Show();
    a[2].Add("qazwsx");
    a[2].Show();
    
    //b = a[2];
    b.Show();
 
    cout << endl;
 
    a[3].Volume();
    a[3].Area();
    a[3].Srav();
 
    delete[] a;
}