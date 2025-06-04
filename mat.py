import tkinter as tk
from tkinter import filedialog
import matplotlib.pyplot as plt
import matplotlib.image as mpimg
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg

# Load the new image provided
image_path = '/mnt/data/fringe_capacitance_plot_fixed.jpg'  # Update this to the correct path if necessary
img = mpimg.imread(image_path)

# Create the main window
root = tk.Tk()
root.title("Matplotlib Plot Viewer")
root.geometry("700x600")

# Create a Matplotlib figure
fig, ax = plt.subplots()
ax.imshow(img)
ax.axis('off')  # Hide axes for a clean display

# Embed the plot into the Tkinter window
canvas = FigureCanvasTkAgg(fig, master=root)
canvas_widget = canvas.get_tk_widget()
canvas_widget.pack(fill=tk.BOTH, expand=True)

# Run the application
root.mainloop()
