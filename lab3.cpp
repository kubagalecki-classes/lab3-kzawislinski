#include <iostream>

struct BytGeometryczny
{
    virtual void id() = 0;
};

struct Figura : public BytGeometryczny
{
public:
    Figura(double p) { pole = p; }
    double getPole() { return pole; }
    // virtual void id() { std::cout << "Figura o polu " << pole << '\n'; };

    virtual ~Figura() { std::cout << "Figura zostala zniszczona\n"; };

private:
    double pole;
};

struct Kolo : public Figura
{
    Kolo(double r) : Figura{3.14 * r * r} {};
    void id() override { std::cout << "Kolo o polu " << getPole() << '\n'; };
    virtual ~Kolo() { std::cout << "Kolo zostalo zniszczone\n"; };
};

struct Kwadrat : public Figura
{
    Kwadrat(double a) : Figura{a * a} {};

    void id() override { std::cout << "Kwadrat o polu " << getPole() << '\n'; };

    virtual ~Kwadrat() { std::cout << "Kwadrat zostal zniszczony \n"; };
};

void id(Figura& f)
{
    f.id();
}

int main()
{
    Kwadrat m(4);
    m.id();
    id(m);
    // std::cout << dynamic_cast< Kolo* >(m);
}
