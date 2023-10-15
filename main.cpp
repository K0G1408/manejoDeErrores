class ExcepcionDividirPorCero : public exception
{
public :
    ExcepcionDividirPorCero() : exception() {}
    const char * what() const throw()
    {
        return "Intentas dividir por cero";
    }
};
int main()
{
    float dividendo, divisor, resultado;
    cout << "PROGRAMA DIVISOR3 " << endl;
    try
    {
        cout << "Introduce Dividendo : " ;
        cin >> dividendo;
        cout << "Introduce Divisor : " ;
        cin >> divisor;
        if (divisor == 0)
            throw ExcepcionDividirPorCero();
        resultado = dividendo / divisor;
        cout << dividendo << "/" << divisor
             << "=" << resultado;
        return (0);
    }
    catch (ExcepcionDividirPorCero &exce)
    {
        cerr << "Ocurrio un error:" << exce.what();
    }
}
