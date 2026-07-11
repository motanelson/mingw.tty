print("\033c\033[47;31m\ngive me a utf-16 .bin utf-16 file to encript ? ")
a=input().strip()
b=a.replace(".bin","")
f1=open(a,"r",encoding="utf-16-le")
f=f1.read()
f1.close()
r=f.encode("utf-8")
counter=0

f1=open(b+".txt","wb")
f1.write(r)
f1.close()