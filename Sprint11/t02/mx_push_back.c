#include "list.h"

void mx_push_back(t_list **list, void *data) {
	*list = NULL;
	t_list *s = mx_create_node(data);
	s->data = data;
	s->next = NULL;

	if(*list == NULL) {
		*list = s;
	}
}
