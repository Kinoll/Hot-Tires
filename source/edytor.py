import csv
import re
import random
from operator import itemgetter

'''

Nowa wersja, zgodna z klasa zawodnik z wiki projektu.
Do zrobienie jest jeszcze generowanie losowych zawodnikow.
Reszta funkcji dziala.
Jezeli macie pomysl na rozszerzenie funkcjonalnosci, to piszcie gg: 7996633

'''


def sorted_nicely(l, key):
    """ Sort the given iterable in the way that humans expect."""
    convert = lambda text: int(text) if text.isdigit() else text
    alphanum_key = lambda item: [convert(c) for c in re.split('([0-9]+)', key(item))]
    return sorted(l, key=alphanum_key)


def loadFile(filename):
    #Wczytuje plik o podanej nazwie
    riders = []
    with open(filename, 'rb') as csvfile:
        filereader = csv.reader(csvfile)
        for row in filereader:
            riders.append(row)
    return riders


def saveFile(filename, listOf):
    #Zapisuje plik o podanej nazwie
    returnFile = ''
    for row in listOf:
        returnFile += (','.join(row) + '\n')
    with open(filename, 'wb') as f:
        f.write(returnFile)


def randomFill(numberOfRiders, numberOfSkills):
    '''
    Losuje okreslona przez numberOfRiders liczbe zawodnikow
    numberOfSkills okresla liczbe losowanych statystyk
    Statystyka dotyczaca umiejetnosci zawodnika nie moze przekroczyc 20
    W losowaniu korzystamy z rozkladu Gaussa o sigma = 3
    !!! riderId nie jest losowe,
    a teamId ma wartosc 0, co domyslnie oznacza brak druzyny
    '''
    riders = []
    riderId = 0
    for x in range(numberOfRiders):
        temp = [str(riderId)]
        temp.append('0')
        riderId += 1
        for y in range(numberOfSkills):
            temp.append(str(int(random.gauss(10, 3))))
        riders.append(temp)
    return riders


def getUniqueId(riders):
    #wyszukuje nastepne unikalne riderId
    try:
        return str(int(riders[-1][0]) + 1)
    except:
        return '0'


def createRider(riderId, teamId, nation, strength,
                psyche, reflex, ridingSkills,
                startingSkills, prepared, tactic,
                docility, courage, bravery,
                experience, talent, condition,
                name, surname, teamName, nationName, age):
    #tworzy zawodnika zgodnie z danymi
    info = []
    info = [riderId, teamId, nation, strength,
            psyche, reflex, ridingSkills,
            startingSkills, prepared, tactic,
            docility, courage, bravery,
            experience, talent, condition,
            name, surname, teamName, nationName, age]
    return info


def deleteRider(riderId, ridersList):
    for rider in ridersList:
        if rider[0] == riderId:
            ridersList.remove(rider)


def sortBy(riders, statIndex):
    L = riders
    return sorted_nicely(L, itemgetter(int(statIndex)))


class Rider(object):
    #Klasa Rider, ktora budowana jest za pomoca danych z pliku .csv
    def __init__(self, listOfSkills):
        self.info = listOfSkills
        self.riderId = self.info[0]
        self.teamId = self.info[1]
        self.nation = self.info[2]
        self.strength = self.info[3]
        self.psyche = self.info[4]
        self.reflex = self.info[5]
        self.ridingSkills = self.info[6]
        self.startingSkills = self.info[7]
        self.prepared = self.info[8]
        self.tactic = self.info[9]
        self.docility = self.info[10]
        self.courage = self.info[11]
        self.bravery = self.info[12]
        self.experience = self.info[13]
        self.talent = self.info[14]
        self.condition = self.info[15]
        self.name = self.info[16]
        self.surname = self.info[17]
        self.teamName = self.info[18]
        self.nationName = self.info[19]
        self.age = self.info[20]

    def __str__(self):
        return self.riderId

    def stats(self):
        return (
                   "Id: %s, Id druzyny: %s, Id kraju: %s, Sila: %s\n, Psychika: %s, Refleks: %s, Technika jazdy: %s\n, Technika startu: %s, Przygotowanie: %s, Taktyka: %s, Podatnosc na sugestie: %s\n, Odwaga: %s, Walecznosc: %s, Doswiadczenie: %s, Talent %s\n, Kondycja: %s, Imie: %s, Nazwisko: %s, Druzyna: %s, Narodowosc: %s, Wiek: %s") % (
                   self.riderId, self.teamId, self.nation, self.strength, self.psyche, self.reflex, self.ridingSkills,
                   self.startingSkills, self.prepared, self.tactic, self.docility, self.courage, self.bravery,
                   self.experience, self.talent, self.condition, self.name, self.surname, self.teamName, self.nationName,
                   self.age)

    def makeList(self):
        info = []
        info = [self.riderId, self.teamId, self.nation, self.strength,
                self.psyche, self.reflex, self.ridingSkills,
                self.startingSkills, self.prepared, self.tactic,
                self.docility, self.courage, self.bravery,
                self.experience, self.talent, self.condition,
                self.name, self.surname, self.teamName, self.nationName, self.age]
        return info

    def edit(self):
        print "Edytujesz dane zawodnika nr " + self.riderId
        print "Jesli jakies dane nie zostana wpisane, pozostana one niezmienione!"
        temp = raw_input(self.riderId + " Podaj unikalne Id zawodnika: ")
        if not temp == "":
            self.riderId = temp
        temp = raw_input(self.teamId + " Id druzyny: ")
        if not temp == "":
            self.teamId = temp
        temp = raw_input(self.nation + " Id kraju pochodzenia: ")
        if not temp == "":
            self.nation = temp
        temp = raw_input(self.strength + " Sila: ")
        if not temp == "":
            self.strength = temp
        temp = raw_input(self.psyche + " Psychika: ")
        if not temp == "":
            self.psyche = temp
        temp = raw_input(self.reflex + " Refleks: ")
        if not temp == "":
            self.reflex = temp
        temp = raw_input(self.ridingSkills + " Technika jazdy: ")
        if not temp == "":
            self.ridingSkills = temp
        temp = raw_input(self.startingSkills + " Technika startu: ")
        if not temp == "":
            self.startingSkills = temp
        temp = raw_input(self.prepared + " Przygotowanie do sezonu: ")
        if not temp == "":
            self.prepared = temp
        temp = raw_input(self.tactic + " Takytka: ")
        if not temp == "":
            self.tactic = temp
        temp = raw_input(self.docility + " Podatnosc na sugestie: ")
        if not temp == "":
            self.docility = temp
        temp = raw_input(self.bravery + " Walecznosc: ")
        if not temp == "":
            self.bravery = temp
        temp = raw_input(self.courage + " Odwaga: ")
        if not temp == "":
            self.courage = temp
        temp = raw_input(self.experience + " Doswiadczenie: ")
        if not temp == "":
            self.experience = temp
        temp = raw_input(self.talent + " Talent: ")
        if not temp == "":
            self.talent = temp
        temp = raw_input(self.condition + " Kondycja: ")
        if not temp == "":
            self.condition = temp
        temp = raw_input(self.name + " Imie: ")
        if not temp == "":
            self.name = temp
        temp = raw_input(self.surname + " Nazwisko: ")
        if not temp == "":
            self.surname = temp
        temp = raw_input(self.teamName + " Nazwa Druzyny: ")
        if not temp == "":
            self.teamName = temp
        temp = raw_input(self.nationName + " Kraj: ")
        if not temp == "":
            self.nationName = temp
        temp = raw_input(self.age + " Wiek: ")
        if not temp == "":
            self.age = temp


def editor():
    ridersList = []
    close = False
    choise = ''
    while close == False:
        print 'Wpisz: help, aby wyswietlic liste komend'
        choise = raw_input()
        if choise == 'help':
            print "Lista komend:\ngenerate <generuje liste lsoowych zawodnikow>" #### uzupelnic!!!
            print "load <wczytuje plik .csv>"
            print "create <dodawanie nowego zawodnika>"
            print "delete <usuwanie zawodnika>"
            print "edit <edytuje istniejacego zawodnika>"
            print "close <konczy dzialanie edytora>"
            print "show <pokazuje zawodnika>"
            print "show_all <pokazuje liste zawodnikow>"
            print "sort <ustawia kryteria sortowania>"
        elif choise == 'close':
            close = True
        elif choise == 'load':
            print "Podaj nazwe pliku(musi sie on znajdowac w lokalizacji programu): "
            temp = raw_input()
            try:
                ridersList = loadFile(temp)
                print "Lista zaladowana."
            except:
                print "Nie udalo sie otworzyc pliku."
            temp = ''
        elif choise == 'generate':
            try:
                print 'Ilu zawodnikow chcesz wygenerowac?'
                temp = int(raw_input())
                a = temp
                print 'Liczba umiejetnosci do wygenerowania: (5)'
                temp = int(raw_input())
                b = temp
                ridersList = randomFill(a, b)
                print "Wygenerowano liste zawodnikow."
            except:
                print "Wystapil blad."
        elif choise == 'create':
            ridersList = sortBy(ridersList, 0)
            riderId = getUniqueId(ridersList)
            print "Tworzysz zawodnika nr " + riderId
            try:
                z = createRider(riderId, '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0',
                                '0', '0', '0', '0')
                ridersList.append(z)
                rid = Rider(ridersList[int(riderId)])
                rid.edit()
                ridersList[int(riderId)] = rid.makeList()
                print 'Zawodnik zostal stworzony.'
            except:
                print 'Wystapil blad.'
        elif choise == 'delete':
            try:
                deleteRider(raw_input('Podaj Id zawodnika, ktorego chcesz usunac: '), ridersList)
            except:
                print 'Wystapil blad.'
        elif choise == 'save':
            print "Podaj nazwe pliku: "
            try:
                filename = raw_input()
                saveFile(filename, ridersList)
            except:
                print "Wystapil blad."
        elif choise == 'edit':
            print "Podaj id zawodnika: "
            tempId = str(raw_input())
            r = ''
            try:
                r = Rider(ridersList[int(tempId)])
                r.edit()
                ridersList[int(tempId)] = r.makeList()
            except:
                print "Wystapil blad."
        elif choise == 'sort':
            print "Wybierz typ sortowania: "
            print "0 - riderId"
            print "1 - teamId"
            print "2 - nation"
            print "3 - strength"
            print "4 - psyche"
            print "5 - relfex"
            print "6 - ridingSkills"
            print "7 - startingSkills"
            print "8 - preparedd"
            print "9 - tactic"
            print "10 - docility"
            print "11 - courage"
            print "12 - bravery"
            print "13 - experience"
            print "14 - talent"
            print "15 - condition"
            print "16 - name"
            print "17 - surname"
            print "18 - teamName"
            print "19 - nationName"
            print "20 - age"
            index = raw_input()
            try:
                ridersList = sortBy(ridersList, int(index))
                print "Sortowanie zakonczone pomyslnie, aby wyswietlic zawodnikow wpisz 'show'"
            except:
                print "Wystapil blad."
        elif choise == 'show_all':
            for p in ridersList:
                print p
        elif choise == 'show':
            tempId = ''
            tempId = raw_input('Podaj Id zawdonika: ')
            try:
                r = Rider(ridersList[int(tempId)])
                print r.stats()
            except:
                print 'Wystapil blad.'


editor()                    
                
        
        
    
        
