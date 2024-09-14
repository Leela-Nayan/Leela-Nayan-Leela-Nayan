def retrieve_items(N, states):
    count = 0
    
    for i in range(N):
        if states[i] == 1:
            count += 1
            
            for j in range(N):
                if states[j] == 0:
                    states[j] = 1
                else:
                    states[j] = 0
    
    return count

def run_program():
    N = int(input("Enter the number of dungeons: ").strip())
    
    states_input = input("Enter the dungeon states as a string of 0s and 1s: ").strip()
    
    if len(states_input) != N:
        print("Error: The length of the dungeon states does not match the number of dungeons.")
        return
    
    states = []
    for char in states_input:
        states.append(int(char))
    
    items_retrieved = retrieve_items(N, states)
    
    print("Number of valuable items retrieved:", items_retrieved)

if __name__ == "__main__":
    run_program()
