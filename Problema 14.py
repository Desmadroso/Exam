
print ("Inserta cuantos productos son ")
p=int(input())
lista = []
print ("Inserta las claves de los productos")
for i in range(0,p):
        n=int(input())
        lista.append(n)
print ("La lista es: ")
for i in range(0,len(lista)):
    print (lista[i])
def particionado (lista):
    pivote = lista[0]
    menores=[]
    mayores=[]
    
    for i in range(1,len(lista)):
        if lista[i]<pivote:
            menores.append(lista[i])
        else :
            mayores.append(lista[i])
    return menores, pivote, mayores
def quicksort(lista):
    if len(lista)<2:
        return lista
    menores,pivote,mayores = particionado(lista)
    return quicksort(menores) + [pivote] + quicksort(mayores)
print(quicksort(lista))