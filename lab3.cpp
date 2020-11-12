#include <iostream>

struct Figura
{
public:
    Figura(double p) { pole = p; }
    double getPole() { return pole; }
    void   id() const { std::cout << "Figura o polu " << pole << '\n'; };

private:
    double pole;
};

struct Kolo : public Figura
{
    Kolo(double r) : Figura{3.14 * r * r} {};
    void id() { std::cout << "Kolo o polu " << getPole() << '\n'; };
};

struct Kwadrat : public Figura
{
    Kwadrat(double a) : Figura{a * a} {};

    void id() { std::cout << "Kwadrat o polu " << getPole() << '\n'; };
};

void id(const Figura& f)
{
    f.id();
}

int main()
{
    Kwadrat m{4};
    m.id();
    id(static_cast< Figura >(m));
}
