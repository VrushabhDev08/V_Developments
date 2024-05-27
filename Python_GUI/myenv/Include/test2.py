import tkinter as tk
from tkinter import ttk

class SmartIrrigationSystemGUI:
    def __init__(self, root):
        self.root = root
        self.root.title("Smart Irrigation System")

        # Variables
        self.crop_var = tk.StringVar()
        self.stage_var = tk.StringVar()
        self.days_countdown_var = tk.StringVar()
        self.moisture_sensor_values = [tk.DoubleVar() for _ in range(4)]
        self.npk_sensor_values = [tk.DoubleVar() for _ in range(2)]
        self.humidity_var = tk.DoubleVar()
        self.valve_states = [tk.BooleanVar() for _ in range(3)]

        # GUI Components
        self.create_widgets()

    def create_widgets(self):
        # Crop Selection
        crop_label = tk.Label(self.root, text="Select Crop:")
        crop_label.grid(row=0, column=0, padx=10, pady=10, sticky="w")

        crops = ["Tomato", "Onion", "Potato"]
        crop_dropdown = ttk.Combobox(self.root, textvariable=self.crop_var, values=crops, font=('Arial', 16))
        crop_dropdown.grid(row=0, column=1, padx=10, pady=10)

        # Stage Selection
        stage_label = tk.Label(self.root, text="Select Crop Stage:")
        stage_label.grid(row=1, column=0, padx=10, pady=10, sticky="w")

        stages = ["Seedling", "Vegetative", "Flowering", "Fruiting"]
        stage_dropdown = ttk.Combobox(self.root, textvariable=self.stage_var, values=stages, font=('Arial', 16))
        stage_dropdown.grid(row=1, column=1, padx=10, pady=10)

        # Display Minimum Moisture and NPK Requirements
        requirements_label = tk.Label(self.root, text="Minimum Requirements:", font=('Arial', 18, 'bold'))
        requirements_label.grid(row=2, column=0, columnspan=2, pady=10)

        # Countdown Display
        countdown_label = tk.Label(self.root, text="Days Remaining for Stage:", font=('Arial', 16))
        countdown_label.grid(row=3, column=0, padx=10, pady=10, sticky="w")

        countdown_entry = tk.Entry(self.root, textvariable=self.days_countdown_var, state="readonly", font=('Arial', 16))
        countdown_entry.grid(row=3, column=1, padx=10, pady=10)

        # Sensor Values Display
        sensor_values_label = tk.Label(self.root, text="Sensor Values:", font=('Arial', 18, 'bold'))
        sensor_values_label.grid(row=4, column=0, columnspan=2, pady=10)

        sensor_labels = ["Moisture Sensor 1", "Moisture Sensor 2", "Moisture Sensor 3", "Moisture Sensor 4",
                          "NPK Sensor 1", "NPK Sensor 2"]

        for i, label in enumerate(sensor_labels):
            sensor_label = tk.Label(self.root, text=label, font=('Arial', 16))
            sensor_label.grid(row=i + 5, column=0, padx=10, pady=5, sticky="w")

            sensor_entry = tk.Entry(self.root, textvariable=self.get_variable_by_index(i), state="readonly", font=('Arial', 16))
            sensor_entry.grid(row=i + 5, column=1, padx=10, pady=5)

        # Valve Toggle Switches
        valve_label = tk.Label(self.root, text="Valves:", font=('Arial', 18, 'bold'))
        valve_label.grid(row=len(sensor_labels) + 5, column=0, pady=10)

        valve_labels = ["Valve 1", "Valve 2", "Valve 3"]

        for i, label in enumerate(valve_labels):
            valve_label = tk.Label(self.root, text=label, font=('Arial', 16))
            valve_label.grid(row=i + len(sensor_labels) + 5, column=0, padx=10, pady=5, sticky="w")

            valve_toggle = tk.Checkbutton(self.root, variable=self.valve_states[i], text="Open", font=('Arial', 16))
            valve_toggle.grid(row=i + len(sensor_labels) + 5, column=1, padx=10, pady=5)

        # Update Button
        update_button = tk.Button(self.root, text="Update Values", command=self.update_values, font=('Arial', 16))
        update_button.grid(row=len(sensor_labels) + len(valve_labels) + 6, column=0, columnspan=2, pady=10)

    def update_values(self):
        selected_crop, selected_stage = self.get_selected_crop_and_stage()
        print(f"Selected Crop: {selected_crop}, Selected Stage: {selected_stage}")

    def get_variable_by_index(self, index):
        all_variables = [
            self.moisture_sensor_values[0],
            self.moisture_sensor_values[1],
            self.moisture_sensor_values[2],
            self.moisture_sensor_values[3],
            self.npk_sensor_values[0],
            self.npk_sensor_values[1],
            self.humidity_var
        ]
        return all_variables[index]

    def get_selected_crop_and_stage(self):
        return self.crop_var.get(), self.stage_var.get()

if __name__ == "__main__":
    root = tk.Tk()
    app = SmartIrrigationSystemGUI(root)
    root.mainloop()
