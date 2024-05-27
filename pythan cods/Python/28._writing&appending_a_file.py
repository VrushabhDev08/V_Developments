"""
1)python madye file handing che kahi defaults settings astat
jya veli aplyala file he open karayache aste
name_of_variable = open("name of file.txt",operation that we want to perform) -> ite file create hote
operation that we gonna perform is ->
i) writing - "w"
ii) reading - "r"
iii) appending - "a"
2) jya veli aplyala file madye ekdhi gost hi write karayachi aste
syntax ->
name_of_file.write(the content we wanna enter)
3) the most important things is ji file apn open keli ahe ti close karyala
reasons ->
i) others programs wanted to acess that files it will be easier

"""
# -> appending in the file
#v = open("vrushabh.txt","a")
#v.write("vrushabh is good boy\n")
#v.close()
# -> writing in the file
#v = open("vrushabh.txt","w")
#v.write("vrushabh is good boy\n")
#v.close()
# -> if we wanted both read and write
v = open("vrushabh.txt", "r+")
print(v.read())
v.write("vrushabh:")
print(v.read())
v.close()
