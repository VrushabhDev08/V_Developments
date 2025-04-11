import tkinter as tk
from tkinter import ttk
from collections import defaultdict
import matplotlib.pyplot as plt

# Dictionary to hold category totals
category_totals = defaultdict(float)

# Function to add value to the selected category automatically upon category change
def add_value_on_category_change(*args):  # Triggered by category selection change
    try:
        category = category_var.get()
        value = float(value_entry.get())
        if category:
            category_totals[category] += value
            update_totals_display()
        # We no longer show pop-up messages
    except ValueError:
        pass  # Do nothing if there's an error in the input (like non-numeric values)
    
    value_entry.delete(0, tk.END)  # Clear input field after adding

# Function to generate a pie chart report
def generate_report():
    if not category_totals:
        return  # No pop-up for warning when no data is available

    categories = list(category_totals.keys())
    totals = list(category_totals.values())
    
    plt.figure(figsize=(6, 6))
    plt.pie(totals, labels=categories, autopct='%1.1f%%', startangle=140)
    plt.title("Category Wise Distribution")
    plt.show()

# Function to clear the current input
def clear_input():
    value_entry.delete(0, tk.END)

# Function to update the category totals display
def update_totals_display():
    totals_display.delete(*totals_display.get_children())  # Clear the treeview
    for category, total in category_totals.items():
        totals_display.insert('', 'end', values=(category, total))

# Create the main window
window = tk.Tk()
window.title("Expense Tracker")
window.geometry("500x500")  # Adjusted to a larger size

# Frame for input section
input_frame = tk.Frame(window, padx=10, pady=10)
input_frame.pack(pady=10)

# Dropdown menu for categories
categories = ["rent", "travel", "food", "recharge", "shopping", "health", "enter", "study", "other"]
category_var = tk.StringVar(window)
category_var.set(categories[0])  # Set default value

category_label = tk.Label(input_frame, text="Select Category:", font=("Arial", 12))
category_label.grid(row=0, column=0, padx=10, pady=5)

category_menu = tk.OptionMenu(input_frame, category_var, *categories)
category_menu.grid(row=0, column=1, padx=10, pady=5)

# Bind category change to automatically add value
category_var.trace("w", add_value_on_category_change)

# Entry for inputting value
value_label = tk.Label(input_frame, text="Enter Value:", font=("Arial", 12))
value_label.grid(row=1, column=0, padx=10, pady=5)

value_entry = tk.Entry(input_frame, font=("Arial", 12))
value_entry.grid(row=1, column=1, padx=10, pady=5)

# Buttons for clearing input and generating report
button_frame = tk.Frame(input_frame)
button_frame.grid(row=2, column=0, columnspan=2, pady=10)

clear_button = tk.Button(button_frame, text="Clear Input", command=clear_input, font=("Arial", 12))
clear_button.grid(row=0, column=0, padx=5)

report_button = tk.Button(button_frame, text="Generate Report", command=generate_report, font=("Arial", 12))
report_button.grid(row=0, column=1, padx=5)

# Frame for displaying current totals
totals_frame = tk.Frame(window, padx=10, pady=10)
totals_frame.pack(pady=10)

totals_label = tk.Label(totals_frame, text="Category Totals:", font=("Arial", 14))
totals_label.pack()

# Treeview to display category totals
totals_display = ttk.Treeview(totals_frame, columns=("Category", "Total"), show="headings", height=6)
totals_display.column("Category", anchor=tk.W, width=150)
totals_display.column("Total", anchor=tk.W, width=100)
totals_display.heading("Category", text="Category")
totals_display.heading("Total", text="Total")

totals_display.pack()

# Run the application
window.mainloop()
