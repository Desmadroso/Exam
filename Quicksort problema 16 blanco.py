# -*- coding: utf-8 -*-
"""
Created on Thu Mar  3 11:21:12 2022

@author: Almon
"""

lista = [8,12,3,11,5,9,10,4,15,7]
print ("La lista es: ")
for i in range(1,len(lista)):
    print (lista[i])
def particionado (lista):
    pivote = lista[0]
    menores=[]
    mayores=[]
    
    for i in range(1,len(lista)):
        if lista[i]<pivote:
            menores.append(lista[i])
            print(str(lista[i])+ " Es menor al pivote " + str(pivote))
        else :
            mayores.append(lista[i])
            print(str(lista[i]) + " Es mayor al pivote " + str(pivote))
    return menores, pivote, mayores


def quicksort(lista):
    if len(lista)<2:
        return lista
    menores,pivote,mayores = particionado(lista)
    return quicksort(menores) + [pivote] + quicksort(mayores)

print(quicksort(lista))
