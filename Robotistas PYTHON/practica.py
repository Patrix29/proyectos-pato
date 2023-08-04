from tkinter import*
import webbrowser as wb

ventana = Tk ()
frame = Frame()
frame.pack(fill = "both", expand = "true")
frame.config(bg = "purple", width=200, height=200, bd= 20, relief="ridge",cursor="hand2")

num1=0
num2=0
result=StringVar()

def simulator():
    wb.open('https://jcw87.github.io/c2-sans-fight/')

def suma():
    global num1
    global num2
    global result
    num1 = int(userentry.get())
    num2 = int(userentry2.get())
    resultg = num1 + num2
    resultg = str(resultg)
    
    if num1 == 9 and num2 == 10:
        result.set("21")
        texto1 = Label(frame, text="you stupid!")
        texto1.config(fg="black", background="white", font=("Comic Sans MS",30))
        texto1.place(x="800",y="70")

        for i in range (10000): 
            num1 = 1
        wb.open('https://jcw87.github.io/c2-sans-fight/')

    else:
        result.set(resultg)


def resta():
    global num1
    global num2
    global result
    num1 = int(userentry.get())
    num2 = int(userentry2.get())
    resultg = num1 - num2
    resultg = str(resultg)
    result.set(resultg)

texto = Label(frame, text="Calculator")
texto.config(fg="black", background="purple", font=("Comic Sans MS",30))
texto.grid(row= 0, column=0)

texto = Label(frame, text="First Number:")
texto.config(fg="black", background="purple", font=("Comic Sans MS",30))
texto.grid(row= 1, column=0)

texto = Label(frame, text="Second Number:")
texto.config(fg="black", background="purple", font=("Comic Sans MS",30))
texto.grid(row= 2, column=0)

userentry = Entry(frame)
userentry.config(justify="right", font=("Comic Sans MS",20))
userentry.grid(row = 1, column=1)

userentry2 = Entry(frame)
userentry2.config(justify="right",font=("Comic Sans MS",20))
userentry2.grid(row = 2, column=1)

Boton = Button(frame,text="Result",width=5,height=1)
Boton.config(font=("Comic Sans MS",20))
Boton.grid(column=0, row=3)

Boton = Button(frame,text="+",width=5,height=1,command=suma)
Boton.config(font=("Comic Sans MS",20))
Boton.grid(column=1, row=3)

Boton = Button(frame,text="-",width=5,height=1,command=resta)
Boton.config(font=("Comic Sans MS",20))
Boton.grid(column=2, row=3)

userentryr = Label(frame,textvariable=result)
userentryr.config(justify="right",font=("Comic Sans MS",20))
userentryr.grid(row = 4, column=2)

imagen = PhotoImage(file=r'C:\Users\OMNIK\Documents\GitHub\python\Robotistas PYTHON\Sans_overworld.png')
Label(frame,image=imagen).place(x="1020",y="30")
ventana.mainloop()