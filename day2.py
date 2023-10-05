#implementation of list to find occurence and position of words in a text file 
a=input("Enter exact name of file")
a=open(a+".txt","r")
b=a.read().split()
d=[]
for i in b:
    if i not in d:
        d.append(i)
for i in d:
    f=0
    e=[]
    for j in range(len(b)):
        if (i==b[j]):
            f+=1
            e.append(j)
    print(i,'\tposition=',e,"\tfrequency=",f)