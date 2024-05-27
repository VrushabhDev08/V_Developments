def write_to_file(data, filename='shared_data.txt'):
    with open(filename, 'w') as file:
        file.write(data)

# Example usage:
arg1 = "value1"
arg2 = "value2"
data_to_share = f"Argument 1: {arg1}\nArgument 2: {arg2}"

write_to_file(data_to_share)
