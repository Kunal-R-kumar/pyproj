#reading and finding position of a word from a file using dictionary 
fname=input("Enter the filename: ")
f1=open(fname)
d1=dict()
for i in f1:
    words=i.split()
    for word in words:
        if word in d1:
            d1[word]=d1[word]+1
        else:
            d1[word]=1         
print(d1)
d1.keys()
d2={}
b=[]
for i in d1:
    for j in range (len(words)):
        if i==words[j]:
            b.append(j)
    d2[i]=b
    b=[]
print("\npositions\n")
print(d2)
