import customtkinter as ctk

window = ctk.CTk()

window.geometry('500x500')


def quit_btn():
     window.destroy()
     print('karl')

button = ctk.CTkButton(window, command=quit_btn, text='Quit').pack()

window.mainloop()
