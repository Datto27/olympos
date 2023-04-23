# Graph Search algorithms example for airports
airports = ["PHX", "BKK", "OKC", "JFK", "LAX", "MEX", "EZE", "HEL", "LOS", "LAP", "LIM"]

# routes between airports
routes = [
  ["PHX", "LAX"],
  ["PHX", "JFK"],
  ["JFK", "OKC"],
  ["JFK", "HEL"],
  ["JFK", "LOS"],
  ["MEX", "LAX"],
  ["MEX", "BKK"],
  ["MEX", "LIM"],
  ["MEX", "EZE"],
  ["LIM", "BKK"],
]

# graph
adjacency_list = {}

def add_node(airport) {
  adjacency_list[airport] = []
}

def add_edge(origin, destination) {
  
}

