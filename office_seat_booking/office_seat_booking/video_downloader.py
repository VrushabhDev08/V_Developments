import os
import yt_dlp
from tkinter import Tk, Label, Button, Entry, filedialog, messagebox

def download_audio(link, save_path):
    try:
        # Set up yt-dlp options for audio download and specify ffmpeg location
        ydl_opts = {
            'format': 'bestaudio/best',
            'outtmpl': os.path.join(save_path, '%(title)s.%(ext)s'),
            'ffmpeg_location': r'C:\path\to\ffmpeg\bin',  # Specify ffmpeg path here
            'postprocessors': [{
                'key': 'FFmpegExtractAudio',
                'preferredcodec': 'mp3',
                'preferredquality': '192',
            }],
        }

        # Download the audio file
        with yt_dlp.YoutubeDL(ydl_opts) as ydl:
            ydl.download([link])

        print("Download completed.")
        messagebox.showinfo("Success", "Download completed and saved as MP3!")
    except Exception as e:
        print(f"Error: {e}")
        messagebox.showerror("Error", f"An error occurred: {str(e)}")

def select_download_path():
    # Ask user to select folder for saving file
    folder_selected = filedialog.askdirectory()
    return folder_selected

def start_download():
    youtube_link = link_entry.get()
    if not youtube_link:
        messagebox.showwarning("Input Error", "Please enter a valid YouTube URL")
        return
    
    # Ask the user for a download path
    save_location = select_download_path()

    if save_location:
        download_audio(youtube_link, save_location)
    else:
        messagebox.showwarning("Path Error", "Download location not selected.")

# Create the main window using tkinter
root = Tk()
root.title("YouTube to MP3 Downloader")
root.geometry("400x200")

# Add a label and input field for the YouTube link
link_label = Label(root, text="Enter YouTube URL:")
link_label.pack(pady=10)

link_entry = Entry(root, width=50)
link_entry.pack(pady=5)

# Add a button to start the download process
download_button = Button(root, text="Download MP3", command=start_download, bg='green', fg='white')
download_button.pack(pady=20)

# Start the GUI event loop
root.mainloop()
