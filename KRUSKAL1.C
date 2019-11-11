 #include <stdio.h>
  #include <stdlib.h>

  struct edge {
        int vertex1, vertex2, cost;
        struct edge *next;
  };

  int parentVertices[6], mstCost, count[6];

  /* node creation */
  struct edge * createNode(int val1, int val2, int cost) {
        struct edge *newnode;
        newnode = (struct edge *)malloc(sizeof(struct edge));
        newnode->vertex1 = val1;
        newnode->vertex2 = val2;
        newnode->cost = cost;
        newnode->next = NULL;
        return newnode;
  }

  /* construct minimum spanning tree */
  struct edge * kruskalMST(struct edge *rootNode, int n) {
        struct edge *temp = NULL, *x, *y;
        int i, parent1, parent2, edgeCount = 0;

        for (i = 0; i <= n; i++)
                parentVertices[i] = i;

        for (i = 0; i <= n; i++)
                count[i] = 0;

        while((edgeCount < (n - 1)) && rootNode) {
                x = rootNode;
                rootNode = rootNode->next;
                parent1 = parentVertices[x->vertex1];
                parent2 = parentVertices[x->vertex2];

                /* edge with minimum cost is selected */
                if (parent1 != parent2) {
                        if (parentVertices[x->vertex1] <
                                parentVertices[x->vertex2]) {
                                  parentVertices[x->vertex2] = x->vertex1;
                        } else {
                                parentVertices[x->vertex1] = x->vertex2;
                        }
                        edgeCount++;

                        /* calculating cost of MST */
                        mstCost = mstCost + x->cost;
                        if (!temp) {
                                temp = x;
                                y = temp;
                        } else {
                                y->next = x;
                                y = y->next;
                        }
                        y->next = NULL;
                }
        }
        return temp;
  }

  void deleteNodes(struct edge *myNode) {
        struct edge *temp;

        while (myNode != NULL) {
                temp = myNode;
                myNode = myNode->next;
                free(temp);
        }
  }

 main() {
        struct edge *rootNode, *temp;
        int i;

        /* create adjacency list with edges in sorted order */
        rootNode = createNode(2, 1, 1);
        rootNode->next = createNode(4, 2, 2);
        temp = rootNode->next;

        temp->next = createNode(3, 1, 3);
        temp = temp->next;

        temp->next = createNode(5, 3, 4);
        temp = temp->next;

        temp->next = createNode(6, 2, 5);
        temp = temp->next;

        temp->next = createNode(6, 3, 6);
        temp = temp->next;

        temp->next = createNode(6, 4, 7);
        temp = temp->next;

        temp->next = createNode(6, 5, 8);
        temp->next = NULL;

        rootNode = kruskalMST(rootNode, 6);

        for (i = 1; i <= 6; i++) {
                printf("Parent of %d is %d\n", i, parentVertices[i]);
        }

        printf("Cost of Minimum Spanning Tree: %d\n", mstCost);
        deleteNodes(rootNode);
	getch();
	return 0;
  }

