from DICT import *

mydict = DICT()
option = 0

while option != 6:
    option = mydict.option()

    if option == 1:
        mydict.add()
    elif option == 2:
        mydict.delete()
    elif option == 3:
        mydict.print()
    elif option == 4:
        mydict.save()
    elif option == 5:
        mydict.load()