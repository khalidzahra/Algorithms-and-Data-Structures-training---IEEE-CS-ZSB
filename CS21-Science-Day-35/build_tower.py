def tower_builder(n_floors):
    tower = []
    counter = 1
    spaceCounter = (2 * (n_floors - 1) + 1) // 2
    for i in range(n_floors):
        tower.append(spaceCounter * ' ' + '*' * counter + spaceCounter * ' ')
        counter += 2
        spaceCounter -= 1
    return tower