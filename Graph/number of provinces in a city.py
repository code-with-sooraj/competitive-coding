'''Number of Provinces in a city'''

def findCircleNum(roads):
    def dfs(i):
        for j in range(len(roads)):
            if roads[i][j] == 1 and j not in visited:
                visited.add(j)
                dfs(j)

    provinces = 0
    visited = set()
    for i in range(len(roads)):
        if i not in visited:
            provinces += 1
            visited.add(i)
            dfs(i)
    return provinces

roads = [[1,1,0],
         [1,1,0],
         [0,0,1]]
print(findCircleNum(roads))  # Output: 2

