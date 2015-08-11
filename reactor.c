struct reactor_ctx {
user_list* ul;
mt epoll_fd;
const size_t size;
}

void add(reactor* self, event_handler* eh){
user* u=0;
int fd = eh->get_fd(eh);
epoll_ctx(self->ctx->epoll_fd; EPOLL_CTL_ADD,fd);

u=malloc(sizeof user);
u -> fd = fd;
u -> eh =eh;
self->ctx->ul->add_user(self->ctx->ul,u);

void event_loop(reactor* self){
int i=0;
struct epoll_event es[self->ctx->size];//nie wiem
memset(es,0,..)//nie wiem
for(;;){
i = epoll_wait(self->ctx->epoll_fd,es,self->ctx->size,-1);
//...ERROR #

for(-i;i>-1;--i){
user* u = self->ctx->ul->find_user_by_fd(self->ctx->ul,es[i].data_fd); //nie wiem
if(u)
u->eh->handle(u->eh,es[i].event);
}
}
}
}

