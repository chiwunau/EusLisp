static pointer UWP84934();
static pointer UWP84996();
static pointer UWP85046();
static pointer (*ftab[21])();

#define QUOTE_STRINGS_SIZE 91
static char *quote_strings[QUOTE_STRINGS_SIZE]={
    "unix:thr-setprio",
    "unix:thr-getprio",
    "thread",
    "function",
    "mapcar",
    "wait-thread",
    "list",
    "let",
    "mutex-lock",
    "unwind-protect",
    "progn",
    "mutex-unlock",
    "make-mutex-lock",
    "member",
    "delete",
    "cond-signal",
    "cond-wait",
    "sema-wait",
    "sema-post",
    "make-semaphore",
    ":write",
    ":read",
    "thread-self",
    ":stdio",
    "\"~A ~d error: ~A\"",
    "*program-name*",
    ":id",
    "\" ~A\"",
    "\" in ~s\"",
    ":thread-loop-again",
    "thread-error",
    "lisp::install-error-handler",
    ":thread-loop",
    "\"thr~d$ \"",
    "reploop",
    "\"thread-top ~d finished~%\"",
    "warn",
    "\"HOST\"",
    ":port",
    ":host",
    ":domain",
    "make-socket-address",
    "make-client-socket-stream",
    "thread-top",
    "thread-no-wait",
    "\"SYSTEM\"",
    "\"SYSTEM\"",
    "*package*",
    "\"no such package\"",
    "(plist mutex)",
    "(barrier-synch synch-memory-port)",
    "\"(self class)\"",
    ":priority",
    "\"(self class &optional n)\"",
    "plist",
    "\"(&rest forms)\"",
    "mutex",
    "\"(lock &rest forms)\"",
    "barrier-synch",
    ":global",
    ":super",
    "propertied-object",
    ":slots",
    "(threads n-threads count barrier-cond threads-lock count-lock)",
    ":metaclass",
    ":element-type",
    ":size",
    ":documentation",
    "make-class",
    ":init",
    "\"(self class)\"",
    ":add",
    "\"(self class thr)\"",
    ":remove",
    "\"(self class thr)\"",
    ":wait",
    "\"(self class)\"",
    "synch-memory-port",
    "(sema-in sema-out buf empty lock)",
    "\"(self class)\"",
    "\"(self class p)\"",
    "\"(self class)\"",
    "thread-eval",
    "\"(p1 p2)\"",
    "\"(code msg1 form &optional (msg2))\"",
    "\"(s)\"",
    "repwin",
    "\"(port &optional (host (unix:getenv \\\"HOST\\\")))\"",
    ":par",
    "\"@(#)$Id: par.l,v 1.1.1.1 2003/11/20 07:46:31 eus Exp $\"",
    "provide",
  };