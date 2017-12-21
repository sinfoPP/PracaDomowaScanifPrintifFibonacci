## Welcome to MarkdownPad 2 ##
printf


Za pomoca instrukcji printf, możesz nakazać wypisanie na ekran np. ciągu znaków. Robimy to 

wpisując następującą linijkę: 
np:

 1.    printf("Twój ciąg znaków"); 
Następuje wywołanie funkcji printf() z argumentem zawartym w nawiasach (ciag znaków musi 

znajdować się w cudzysłowiu). Wypisanie ciągu znaków jest tylko jedną z możliwości – możemy 

również wypisać wartość zmiennej. Jednak w tym przypadku, programista musi znać typ 

zmiennej, wówczas dla zmiennej o nazwie MojaZmienna typu integer możesz zrobić to 

nastepująco: 
np:

 1.    printf("%d", MojaZmienna); 
W takim wypadku, wywołana zostanie funkcja printf() a argumentem będzie ciąg znaków „%d” 

(znak % informuje program, że w tym miejscu zostanie użyta zmienna, natomiast literka po % - 

w naszym wypadku d – informuje program o typie tej zmiennej, tutaj jest to int), nastepnie 

po przecinku, wypisujemy nazwe zmiennej. Oczywiście istnieje możliwość wypisania kilku 

zmiennych, wtedy robisz to nastepująco: 
 1.    printf("%d + %d = %d", Skladnik1, Skladnik2, Wynik); 
Istotnym elementem jest fakt, że zmienne musza być wypisywane w odpowiedniej kolejności. W 

powyższym przykładzie operujemy na zmiennych typu integer – czyli liczbach całkowitych. Jak 

pewnie pamiętasz, w poprzednich rozdziałach, była też mowa o innych typach zmiennych - 

poniższa tabelka pokazuje, w jaki sposób w języku C odwoływać się do innych typów zmiennych.






scanf



Funkcja scanf służy do przekazywania znaków z klawiatury do programu. Jeżeli chcemy mówić o 

programie interaktywnym, niezbędna jest wymiana informacji - w naszym przypadku rozwiążemy 

to używając funkcji printf i scanf. Poniżej znajduje się przyklad użycia funkcji scanf:
 1.    scanf("%d", &zmienna);
Omówmy teraz krótko powyższą instrukcję. Na początku używamy słowa kluczowego scanf,  a 

następnie otwieramy nawias. W cudzysłowiu ustalamy typ zmiennej (w naszym przypadku będzie 

to %d, czyli integer), a następnie po przecinku wprowadzamy nazwę zmiennej, do której chcemy 

przypisać wartość, poprzedzoną znakiem "&".

np w takim użyciu:

 1.   #include<stdio.h>                             
 2. 
 3.   int main()                                        
 4.   {
 5.       printf("Wprowadz swoje imie \n");     
 6.       char imie[20];                               
 7.       scanf("%s", &imie);                       
 8.       printf("Witaj %s!", imie);               
 9.       getchar();
 10.     return 0;
 11.  } 

