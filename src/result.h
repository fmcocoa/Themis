#ifndef __result_h
#define __result_h

struct th_result {
    long    memory;
    int     cpu_time;
    int     real_time;
    int     exit_status;
    int     received_signal;
};

#endif  // __result_h
