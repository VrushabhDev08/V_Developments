def read_from_file(filename='shared_data.txt'):
    with open(filename, 'r') as file:
        data = file.read()
    return data

# Example usage:
shared_data = read_from_file()
print("Shared Data:")
print(shared_data)
