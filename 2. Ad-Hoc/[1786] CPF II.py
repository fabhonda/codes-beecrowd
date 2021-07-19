while True:
    try:
        cpf=[]
        entry=input()
        for i in range(len(entry)):
            cpf.append(int(entry[i]))
        soma=0
        for i in range(len(cpf)):
            soma += cpf[i]
        b1=0
        b2=0
        for i in range(9):
            b1 += (cpf[i]*(i+1))
        b1 = b1%11
        j=0
        for i in range(9,0,-1):
            b2 += (cpf[j]*(i))
            j+=1
        b2 = b2%11
        if(b1==10):
            b1=0
        if(b2==10):
            b2=0
        cpf.append(b1)
        cpf.append(b2)
        cpf.insert(3,".")
        cpf.insert(7,".")
        cpf.insert(11,"-")
        for i in range(len(cpf)):
            print(cpf[i],end="")
        print()
    except EOFError:
        break
