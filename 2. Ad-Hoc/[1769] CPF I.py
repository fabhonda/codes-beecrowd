while True:
    try:
        cpf=[]
        entry=input()
        cpf=list(entry)
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
            #print(cpf[j],"x",i)
            b2 += (cpf[j]*(i))
            j+=1
        b2 = b2%11
        if(b1==10):
            b1=0
        if(b2==10):
            b2=0
        if(b1!=cpf[9] or b2!=cpf[10]):
            print("CPF invalido")
        else:
            print("CPF valido")
    except EOFError:
        break
