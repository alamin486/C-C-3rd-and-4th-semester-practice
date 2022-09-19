#include<stdio.h>
int main()

BFS(G, s) {
initialize vertices;
Q = {s};
while (Q not empty) {
u = RemoveTop(Q);
for each v ∈ u->adj {
if (v->color == WHITE)
v->color = GREY;
v->d = u->d + 1;
v->p = u;
Enqueue(Q, v);
}
u->color = BLACK;
}
}
}

