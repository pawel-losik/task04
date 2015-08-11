#include "server.eh.h"
#include "client_eh.h"

struct event_handler_ctx {
int fd;
reactor* r;
};
int get_fd(event_handler* self){
return self->ctx->fd;
}

void handle_event(event_handler* self,uint32_t eh){
event_handler* eh=0;
int eh-fd=-1;
struct sockaddr_in eh_addr;
socklen_t ch_addr_len = sizeof(struct sockaadr_in);
ch-fd = accept(self->ctx->fd;&eh_addr,&eh_addr_len);
eh = alloc_client_eh(eh-fd);
self->ctx->r->add(self->ctx->r,eh);
}

event_handler* alloc server_eh(reactor *r){
event_handler* sch=0;
event_handler_ctx* ctx=0;
mt fd = socket(); // ??????
bind(&fd,...);
listen(&fd,...);
seh=malloc(sizeof(event_handler));
ctx = malloc(sizeof(event_handler_ctx));
ctx->fd=fd;
ctx->r=r;
seh->ctx=ctx;
seh->get_fd=get_fd;
seh->handle=handle_event;
return seh;
}

