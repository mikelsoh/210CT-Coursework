"""
WEEK 7 TASKS 1 AND 2 "GRAPHS, BFS AND DFS"
"""
def addNode(node, graph):                   #NODE CREATE FUNCTION
    graph[node] = []                        #TAKES ARGUMENTS (VALUE OF THE NODE, A DICTIONARY)
                                            #SETS THE VALUE OF THE NODE AS THE KEY AND KEEPS THE VALUE EMPTY
    return graph                            #RETURNS THE UPDATED GRAPH

def addConnection(node, edge, graph ):      #ADDING EDGES FUNCTION
    graph[node].append(edge)                #APPENDS THE SPECIFIED VALUE(edge) TO THE KEY(node)
    return graph


def DFS(graph, start, visited = []):        #DEPTH-FIRST SEARCH FUNCTION  
    visited.append(start)                   #TAKES ARGUMENTS (A DICTIONARY WITH NODE CONNECTIONS, STARTING NODE)
    for node in graph[start]:               #THE START NODE GETS ADDED TO THE VISITED LIST
        if node not in visited:             #FOR LOOP CHECKS IF THE VALUE IS IN THE VISITED AND MOVES TO THE NEXT CONNECTED NODE
            DFS(graph,node,visited)
    print (visited)
    output = open("W7T2.txt", "w")          #OPENS THE TEXT DOCUMENT IN WRITE MODE
    output.write("DFS: " )      
    output.write(str(visited))              #STORES THE DFS VISITED LIST PATH IN THE DOCUMENT
    output.close()                          #CLOSES THE DOCUMENT
    return visited

def BFS(graph, start, visited = []):        #BREADTH-FIRST SEATCH FUNCTION
    queue = []                              #TAKES THE SAME ARGUMENTS AS DFS FUNCTION
    queue.append(start)                     #USES A QUEUE TO STORE THE VISITED VERTICES
    while queue:        
        vertex = queue.pop(0)               #CHECKS ALL THE CONNECTIONS AND ADDS THEM TO VISITED FIRST BEFORE MOVING TO THE NEXT NODE
        if vertex not in visited:
            visited.append(vertex)
            queue += graph[vertex]
    print(visited)
    output = open("W7T2.txt", "a")          #INSTEAD OF WRITE MODE, OPENS THE FILE IN APPEND MODE TO NOT OVERWRITE THE PREVIOUS DFS RESULTS
    output.write('\n'"BFS: ")
    output.write(str(visited))
    output.close()
    return visited
       
graph = {}

addNode(1, graph)                           #VALUES OF THE NODES GO FROM 1 TO 11
addNode(2, graph)
addNode(3, graph)
addNode(4, graph)
addNode(5, graph)
addNode(6, graph)
addNode(7, graph)
addNode(8, graph)
addNode(9, graph)
addNode(10, graph)
addNode(11,graph)

addConnection(1,2,graph)                    #ALL CONNECTIONS ARE MADE TO REPRESENT AN UNDIRECTED GRAPH
addConnection(1,9,graph)
addConnection(2,1,graph)
addConnection(2,3,graph)
addConnection(2,4,graph)
addConnection(3,2,graph)
addConnection(3,6,graph)
addConnection(4,2,graph)
addConnection(4,5,graph)
addConnection(4,6,graph)
addConnection(5,4,graph)
addConnection(6,3,graph)
addConnection(6,4,graph)
addConnection(6,7,graph)
addConnection(7,6,graph)
addConnection(7,8,graph)
addConnection(8,7,graph)
addConnection(8,9,graph)
addConnection(8,10,graph)
addConnection(9,1,graph)
addConnection(9,8,graph)
addConnection(9,10,graph)
addConnection(10,8,graph)
addConnection(10,9,graph)
addConnection(11,1,graph)                   #USED TO DEMONSTRATE SEARCH FUNCTIONS IF THE CONNECTION IS DIRECTED


DFS(graph,1)
BFS(graph,1)
output = open("W7T2.txt", "a")             
output.write('\n'"Graph: ")     
output.write(str(graph))                    #OUTPUTS THE GRAPH TO THE TEXT FILE IN APPEND MODE
output.close()
print(graph)
