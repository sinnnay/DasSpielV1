//L�schen Sie die Kommentare von den Funktionen, die Sie testen m�chten

#include "flowerMeadow.h"


int main()
{
    //Einmaliges Aufrufen der folgenden Funktion
    initialConnectToServer("192.168.2.100",5555,"Test");

    //DIESE FUNKTION MUSS IMMER AUFGERUFEN WERDEN!
    connectToServer("192.168.2.100",5555);

    //Spawnen eines Spielers
    //spawnPlayer();

    //Spieler bewegen
    //movePlayer(10);

    //Spieler um 90 Grad nach rechts drehen
    //rotatePlayer(90);

    //Funktionen k�nnen auch mit Schleifen benutzt werden
    /*
    for(int i = 0; i < 3; i++)
    {
        //Spieler erst bewegen...
        movePlayer(20);
        //...dann um 20 Grad drehen
        rotatePlayer(20);

        //Vorgang kann beliebig oft ausgef�hrt werden, hier 3 Mal
    }
    /*

    //Schie�t ein Projektil
    //shoot();

    //Schaltet das Zeichnen der Linie hinter dem Spieler ein, hier in Rot
    //startDrawing("Red");

    //movePlayer(50);

    //Linie wieder ausschalten und l�schen
    //stopAndClearDrawing();

    //Loescht den Spieler vom Spielfeld
    //deletePlayer();

    //Trennt die Verbindung zum Server
    //Zus�tzliche Konsolenausgaben k�nnen manuell eingerichtet werden:
    //disconnect();
    //printf("Feierabend!");

    //Die restlichen Funktionen werden auf dieselbe Weise aufgerufen.
    return 0;
	
	//Falls mit gcc kompiliert wird:
	//gcc -Wall Beispielprogramm_C.c flowerMeadow.c -o Beispielprogramm_C
	//Ausfuehrung mittels ./Beispielprogramm_C
}
