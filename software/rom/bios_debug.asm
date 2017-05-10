; epRISC development platform - BIOS debugging routines
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; These routines are for debugging. Will be retooled later.

!zone dbg_routines

:.str_warn      !str "\n\nAn error has occured.\n\0"
:.str_fatal     !str "\n\nA fatal error has occured.\n\0"
:.str_return    !str "Called at \0"
:.str_trace     !str "Stacktrace (top 16):\n\0";
:.str_regs      !str "Registers:\n\0";
:.str_resume    !str "Resuming.\n\n\0"
:.str_halt      !str "Halting.\n\n\0"

:dbg_warn       brch.a  a:dbg_eror
    
:dbg_eror       move.v  d:%Zz v:.str_fatal
                push.r  s:%Zz
                call.s  a:str_puts
                pops.r  d:%Zz                       ; Print fatal warning message
                
                move.v  d:%Zz v:.str_return
                push.r  s:%Zz
                call.s  a:str_puts
                pops.r  d:%Zz                       ; Print called-from message
                
                call.s  a:str_hnum                  ; Print called-from address
                
                halt.i                              ; Stop    

:dbg_trac       rtrn.s

:dbg_regs       rtrn.s
