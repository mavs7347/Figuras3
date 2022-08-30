#include <iostream>
using namespace std;

class IFigura {
    public:
        virtual void draw() {
            cout << "Clase padre, dibujar" << endl;
        }
};
class Cuadrado : public IFigura {
    private:
        int tipo;
        int alto;
        int largo;
        int x;
        int y;
    public:
        Cuadrado(int x = 0, int y = 0) {
            this->x = x;
            this->y = y;
        }
        void setTipo(int type) {
            tipo = type;
        }
        int getTipo() {
            if (tipo != 1 && tipo != 2)
            {
                cout << "Tipo invalido." << endl;
                tipo = 1;
            }
            return tipo;
        }
        void setDimensiones(int height = 2, int large = 2) {
        	alto = height;
            largo = large;
        }
        int getAlto() {
        	if (alto < 2)
        	{
        		cout << "Numero invalido" << endl;
                alto = 2;
        	}
            return alto;
        }
        int getLargo() {
        	if (largo < 2)
        	{
        		cout << "Numero invalido" << endl;
                largo = 2;
        	}
            return largo;
        }
        void draw ();
};
void Cuadrado::draw() {
    for (int c = 0; c <= 25; c++)
    {
        if (c < 10)
        {
            cout << "  " << c;
        }
        else
        {
            cout << " " << c;
        }
    }
    cout << endl;
    int l = 0;
    while (l < y)
    {
        cout << l << endl;
        l++;
    }
    for (int c = 0; c < alto; c++)
    {
        cout << l;
        if (l < 10)
        {
            cout << " ";
        }
        for (int n = 1; n < x; n++)
        {
            cout << "   ";
        }
        l++;
        
        cout << " ";
        for (int i = 0; i < largo; i++)
        {
            
            if (tipo == 1)
            {
                cout << " *";
            }
            else
            {
                if ((c == 0 || i == 0) || (c == (alto-1)) || (i == (largo-1)))
                {
                    cout << " *";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}


class Triangulo : public IFigura {
    private:
        int tipo;
        int alto;
        int x;
        int y;
    public:
        Triangulo(int x = 0, int y = 0) {
            this->x = x;
            this->y = y;
        }
        void setTipo(int type) {
            tipo = type;
        }
        int getTipo() {
            if (tipo != 1 && tipo != 2)
            {
                cout << "Tipo invalido." << endl;
                tipo = 1;
            }
            return tipo;
        }
        void setAlto(int height = 7) {
            alto = height;
        }
        int getAlto() {
            if (alto < 2)
            {
                cout << "Numero invalido" << endl;
                alto = 2;
            }
            return alto;
        }
        void draw();
};
void Triangulo::draw() {
    for (int c = 0; c <= 25; c++)
    {
        if (c < 10)
        {
            cout << "  " << c;
        }
        else
        {
            cout << " " << c;
        }
    }
    cout << endl;
    int l = 0;
    while (l < y)
    {
        cout << l << endl;
        l++;
    }

    int aux = alto - 1;
    for (int c = 1; c <= alto; c++)
    {
        cout << l;
        if (l < 10)
        {
            cout << " ";
        }
        for (int n = 1; n < x; n++)
        {
            cout << "   ";
        }
        l++;

        cout << " ";
        for (int n = 0; n < aux; n++)
        {
            cout << " ";
        }
        aux -= 1;
        for (int i = 0; i < c; i++)
        {
            if (tipo == 1)
            {
                cout << " *";
            }
            else
            {
                if ((i == 0) || (c == alto) || (i == (c-1)))
                {
                    cout << " *";
                }
                else
                {
                    cout << "  ";
                }
            }
        }       
        cout << endl;
    }
}

class Circulo : public IFigura {
    private:
        int tipo;
        int diametro;
        int x;
        int y;
    public:
        Circulo(int x = 0, int y = 0) {
            this->x = x;
            this->y = y;
        }
        void setTipo(int type) {
            tipo = type;
        }
        int getTipo() {
            if (tipo != 1 && tipo != 2)
            {
                cout << "Tipo invalido." << endl;
                tipo = 1;
            }
            return tipo;
        }
        void setDiametro(int diameter = 7) {
            diametro = diameter;
        }
        int getDiametro() {
            if (diametro < 3)
            {
                cout << "Numero invalido" << endl;
                diametro = 7;
            }
            if (diametro % 2 == 0)
            {
                diametro++;
            }
            
            return diametro;
        }
        void draw();
};
void Circulo::draw() {
    for (int c = 0; c <= 25; c++)
    {
        if (c < 10)
        {
            cout << "  " << c;
        }
        else
        {
            cout << " " << c;
        }
    }
    cout << endl;
    int l = 0;
    while (l < y)
    {
        cout << l << endl;
        l++;
    }

    int aux = diametro;
    for (int c = 1; c < diametro; c+=2)
    {
        cout << l;
        if (l < 10)
        {
            cout << " ";
        }
        for (int n = 1; n < x; n++)
        {
            cout << "   ";
        }
        l++;

        for (int n = 1; n < aux; n++)
        {
            cout << " ";
        }
        aux -= 2;
        for (int i = 0; i <= (c+1); i++)
        {
            if (tipo == 1)
            {
                cout << "* ";
            }
            else
            {
                if ((c == 1) || (i == 0 || i == (c+1)))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                    
                }
            }
        }
        cout << endl;
    }

    aux = 2;
    for (int c = 1; c < diametro; c+=2)
    {
        cout << l;
        if (l < 10)
        {
            cout << " ";
        }
        for (int n = 1; n < x; n++)
        {
            cout << "   ";
        }
        l++;

        for (int n = 0; n < aux; n++)
        {
            cout << " ";
        }
        aux += 2;
        for (int i = diametro; i > (c-1); i--)
        {
            if (tipo == 1)
            {
                cout << "* ";
            }
            else
            {
                if ((i == diametro) || (i == c) || (c == (diametro-2)))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                    
                }
            }
        }
        cout << endl;
    }
}

void Lienzo (IFigura *forma) {
    forma->draw();
}

void Clear() {
    cout << "\x1B[2J\x1B[H";
}

int main()
{
	int opc = 1;
	do {
		cout << "Elige la figura:" << endl;
		cout << "1.- Cuadrado." << endl;
		cout << "2.- Triangulo." << endl;
		cout << "3.- Circulo." << endl;
		cin >> opc;
        Clear();

        int x = 0, y = 0;
        for (int c = 0; c <= 25; c++)
        {
            if (c < 10)
            {
                cout << "  " << c;
            }
            else
            {
                cout << " " << c;
            }
        }
        cout << endl;
        for (int i = 0; i <= 25; i++)
        {
            cout << i << endl;
        }
        cout << "Seleccione las coordenadas para la figura: ";
        cin >> x;
        cin >> y;
        Clear();
        

        if (opc == 1)
        {
            cout << "1.- Relleno \t 2.- Hueco" << endl;
            cout << "* * * \t\t * * *" << endl;
            cout << "* * * \t\t *   *" << endl;
            cout << "* * * \t\t * * *" << endl;
            cout << endl;
            cout << "Elija el tipo de figura: ";
            cin >> opc;
            int alto = 0, largo = 0;
            cout << "Introduzca la medida del alto: ";
            cin >> alto;
            cout << "Introduzca la medida del largo: ";
            cin >> largo;
            Clear();

            Cuadrado c = Cuadrado(x, y);
            c.setDimensiones(alto, largo);
            c.setTipo(opc);
            cout << "X = " << x << "\t Alto = " << c.getAlto() << endl;
            cout << "Y = " << y << "\t Largo = " << c.getLargo() << endl;
            Lienzo(&c);
        }
        else if (opc == 2)
        {
            cout << "1.- Relleno \t 2.- Hueco" << endl;
            cout << "   *    \t    *  " << endl;
            cout << "  * *   \t   * * " << endl;
            cout << " * * *  \t  *   *" << endl;
            cout << "* * * * \t * * * *" << endl;
            cout << endl;
            cout << "Elija el tipo de figura: ";
            cin >> opc;
            int alto;
            cout << "Introduzca la medida del alto: ";
            cin >> alto;
            Clear();

            Triangulo t = Triangulo(x, y);
            t.setAlto(alto);
            t.setTipo(opc);
            cout << "X = " << x << "\t Alto = " << t.getAlto() << endl;
            cout << "Y = " << y << endl;
            Lienzo(&t);
        }
        else if (opc == 3)
        {
            cout << "1.- Relleno \t 2.- Hueco" << endl;
            cout << "  * *   \t   * * " << endl;
            cout << " * * *  \t  *   *" << endl;
            cout << "  * *   \t   * *  " << endl;
            cout << endl;
            cout << "Elija el tipo de figura: ";
            cin >> opc;
            int diametro;
            cout << "Introduzca la medida del alto: ";
            cin >> diametro;
            Clear();
            
            Circulo z = Circulo (x, y);
            z.setDiametro(diametro);
            z.setTipo(opc);
            cout << "X = " << x << "\t Diametro = " << z.getDiametro() << endl;
            cout << "Y = " << y << endl;
            Lienzo(&z);
        }
        else
        {
            cout << "Lo sentimos, la opcion no existe" << endl;
        }
        
		cout << "\nRepetir programa:";
		cout << "\n1.- Si"
		        "\n2.- No" << endl;
        cin >> opc;
        Clear();
	} while (opc == 1);

    return 0;
}