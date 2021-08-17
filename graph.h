




typedef interface_ {
   char interface_name[IF_SIZE_NAME];
   struct node_ *attached_node;
   struct link_t *link;
}interface_t;

typedef link_{
   interface_t *if_1;
   interface_t *if_2;
   unsigned int cost;
}

typedef node_ {
   char name[MAX_NODE_NAME];      //confusion here. what is the number of slots?
   interface_t *interface[MAX_INTERFACE_PER_NODE];
   
}node_t;
//defining graph
typedef graph_ {

   char[50] name;                      //unique name for graph
   glthread_t node_list;               //linked list of nodes
}graph_t;

