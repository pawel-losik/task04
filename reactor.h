typedef struct event_handler_ctx ehc;
typedef struct event_handler{
ehc* ctx;
void(*handle)(struct event handler* self,uint32_t events);
int get_fd(struct event_handler* self);
} event_handler;


