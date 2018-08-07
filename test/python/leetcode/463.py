grid = [[0,1,0,0],
        [1,1,1,0],
        [0,1,0,0],
        [1,1,0,0]]




island, neighbor = 0, 0

for i in range(len(grid)):
        for j in range(len(grid[0])):
                if grid[i][j]:
                        island += 1
                        if j < len(grid[0])-1 and grid[i][j+1]:
                                neighbor +=1
                        if i < len(grid)-1 and grid[i+1][j]:
                                neighbor += 1
print(island*4-neighbor*2)

                