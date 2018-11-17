import smtplib
import random
import serial
import time
ser = serial.Serial("COM3", 9600)   # open serial port that Arduino is using
print (ser)
from tkinter import *
from PIL import ImageTk

root=Tk()
root.overrideredirect(True)
root.config(bg="grey")
root.geometry("{0}x{1}+0+0".format(root.winfo_screenwidth(), root.winfo_screenheight()))

canvas = Canvas(width = 600, height = 600, bg = 'white')
canvas.pack(expand = YES, fill = BOTH)

image = ImageTk.PhotoImage(file = "home1.jpg")
canvas.create_image(10, 10, image = image, anchor = NW)
ser.write(b"0")
global password
gate_status=0
def gen():
    global password
    chars='1234567890'
    length=4
    password=''
    for c in range(length):
     password=password+random.choice(chars)
    mail=smtplib.SMTP('smtp.gmail.com',587)
    mail.starttls()
    mail.login('madhusri51998@gmail.com','abc')
    mail.sendmail('madhusri51998@gmail.com','abc@gmail.com',password)
    print("otp sent successfully")
    mail.quit()
def passw():
    global password
    chars='1234567890'
    length=4
    password=''
    for c in range(length):
     password=password+random.choice(chars)
def g_open():
     ser.write(b"1")
     Label(root,text="Sucess and Gate Open",bg="grey",fg="white").place(x=600,y=250)
     b=Button(root,text="CLOSE",bg="red",fg="white",command=g_close).place(x=900,y=300)
     
     return 0
def g_close():
     global password
     Label(root,text="Gate Close                    ",bg="grey",fg="white").place(x=600,y=250)
     ser.write(b"0")
     password=passw()
     return 0
def sub():
   def evaluate(event):
       k=str(e.get())
       print(k)
       if password==k:
         g_open()
       else:
          p=Label(root,text="not success",bg="grey",fg="white").place(x=600,y=250)
   e=Entry(root,bg='white')
   e.bind("<Return>",evaluate)
   e.place(x=600,y=200)
c=Button(root,text="Generate key",bg="blue",fg="white",command=gen).place(x=500,y=300)
b=Button(root,text="enter otp",bg="green",fg="white",command=sub).place(x=700,y=300)
root.mainloop()
