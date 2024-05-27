import tkinter as tk
from tkinter import messagebox
from PIL import Image, ImageTk  # For image display

# Create main window
root = tk.Tk()
root.title("2023 Year Ends")
root.geometry("800x400")  # Adjust size for image

# Load and display background image
background_image = Image.open("G:\study matrial\Python-code with harry\Python_GUI\myenv\_Background.jpg")  # Replace with your image path
#resized_image = background_image.resize((400, 300), Image.ANTIALIAS)  # Resize to fit window
photo = ImageTk.PhotoImage(resized_image)
background_label = tk.Label(root, image=photo)
background_label.place(x=0, y=0, relwidth=1, relheight=1)

# Create quote label with transparent background
quote_label = tk.Label(root, text="Enter your quote here:", bg="white", fg="black")
quote_label.place(relx=0.5, rely=0.3, anchor="center")  # Center label

# Create text entry box with transparent background
quote_entry = tk.Entry(root, bg="white", fg="black")
quote_entry.place(relx=0.5, rely=0.4, anchor="center")  # Center entry box

# Create button with custom image
display_button_image = ImageTk.PhotoImage(Image.open("G:\study matrial\Python-code with harry\Python_GUI\myenv\_Background.jpg"))  # Replace with your button image path
display_button = tk.Button(root, image=display_button_image, command=display_quote)
display_button.place(relx=0.5, rely=0.55, anchor="center")  # Center button

def display_quote():
    quote = quote_entry.get()
    messagebox.showinfo("2023 Year Ends", quote)

root.mainloop()
