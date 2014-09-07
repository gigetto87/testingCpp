#include <iostream>

using namespace std;
// Accedo al contenuto del namespace "std", quindi tutti gli identificatori verranno cercati nella libreria std
// OCCHIO!!! se utilizzo un altro "using namespace" che ha dichiarato all'interno un comando con lo stesso nome del namespace "std", si crea un conflitto
// Meglio quindi usare "using std::cout" oppure spostare la direttiva da globale a locale, quindi all'interno del blocco "main".

int main()
{
    cout << "Hello world!" << endl;

    cout << (3<<2) << endl;
	//shifta a sinistra il 3 di due posizioni (00000011 diventa 00001100) cioè 12
    // quindi è come dire che "Hello World" viene shiftato a sinistra sulla direttiva cout

    getchar();

    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

#define DEBUG	// definisce un nome (DEBUG, WINDOWS, LINUX ...)

int main()
{
    int euro = 0;

    cout << "Valore iniziale: " << euro << endl;
    cout << "Inserisci la somma in euro: ";
    cin >> euro;
	
	// se è definito il nome DEBUG allora esegui il codice seguente
    #ifdef DEBUG
        cout << "Debug:" << "...." << endl;
    #endif // DEBUG
	// questa procedura è utile se devo tradurre del codice solo per ambiente Windows o Linux o Mac

    cout << "Valore inserito: " << euro << endl;

	// in questo modo traduco la macro "a>b?a:b" in una funzione più comprensibile ovvero "getmax(a,b)"
	#define getmax(a,b) a>b?a:b

    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int euro = 0;
    double cambio = 0;

	cout << sizeof(int);	// ritorna il valore della lunghezza dell'int, cioè 4 (4 byte)

	cout << "Short int: " << sizeof(short int) << endl;
	cout << "Int: " << sizeof(int) << endl;
	cout << "Long int: " << sizeof(long int) << endl;
	cout << "Long long int: " << sizeof(long long int) << endl;
	// è possibile anche definire i tipi senza "int", cioè "short", "long" e "long long"
	
	// Esistono anche "unsigned short", "unsigned int", "unsigned long" e "unsigned long long"
	// cioè i tipi senza segno
	cout << numeric_limits<int>::max(); << endl;
	cout << numeric_limits<int>::min(); << endl;
	cout << numeric_limits<unsigned int>::max(); << endl;
	cout << numeric_limits<unsigned long long>::max(); << endl;
	// in questo caso uso la libreria "limits" che contiene la classe "numeric_limits" che contiene
	// delle funzioni, ad es. max(), per calcolare automaticamente la dimensione dei tipi 
	
    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int sosia1 = 060;       // costante ottale, quelle che iniziano per 0 (anche 0), (0*8^2 + 6*8^1 + 0*8^0)
	int sosia2 = 0x30;      // costante esadecimale (0x 3*16^1 + 0*16^0)
	int sosia3 = 48;        // costante letterale decimale
	int sosia4 = 0b110000;  // costante binaria (0b sta per binario, estensione extra)
	cout << "sosia 1: " << sosia1 << endl;
	cout << "sosia 2: " << sosia2 << endl;
	cout << "sosia 3: " << sosia3 << endl;
	cout << "sosia 4: " << sosia4 << endl;
}

//--------------------------------------------------------------------------------------------------------------------------------------------
// ES1) Calcola media tra tre numeri
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    double primo = 0, secondo = 0, terzo = 0, media = 0;

	cout << "Inserisci tre numeri interi: ";
	cin >> primo >> secondo >> terzo;	// prende tre valori da tastiera in un colpo solo

	media = (primo + secondo + terzo) / 3;
	cout << "Media: " << media << endl;

	if (primo == media)
	    cout << "Media uguale al primo numero" << endl;
	if (secondo == media)
		cout << "Media uguale al secondo numero" << endl;
	if (terzo == media)
	    cout << "Media uguale al terzo numero" << endl;
}