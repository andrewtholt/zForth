
// Autogenerated, do not edit

#ifndef __ATL_SRC
#define __ATL_SRC

char *nvramrc[] = {": emit 0 sys ;",
": . 1 sys ;",
": tell 2 sys ;",
": quit 128 sys ;",
": sin 129 sys ;",
": include 130 sys ;",
": save 131 sys ;",
": ! 0 !! ;",
": @ 0 @@ ;",
": , 0 ,, ;",
": # 0 ## ;",
": [ 0 compiling ! ; immediate",
": ] 1 compiling ! ;",
": postpone 1 _postpone ! ; immediate",
": over 1 pick ;",
": +! dup @ rot + swap ! ;",
": inc 1 swap +! ;",
": dec -1 swap +! ;",
": < - <0 ;",
": > swap < ;",
": <= over over >r >r < r> r> = + ;",
": >= swap <= ;",
": =0 0 = ;",
": not =0 ;",
": != = not ;",
": cr 10 emit ;",
": .. dup . ;",
": here h @ ;",
": allot h +! ;",
": variable : postpone [ ' lit , here dup 5 + , ' exit , here swap ! 5 allot ;",
": begin here ; immediate",
": again ' jmp , , ; immediate",
": until ' jmp0 , , ; immediate",
": times ' 1 - , ' dup , ' =0 , postpone until ; immediate",
": if ' jmp0 , here 999 , ; immediate",
": unless ' not , postpone if ; immediate",
": else ' jmp , here 999 , swap here swap ! ; immediate",
": fi here swap ! ; immediate",
": then here swap ! ; immediate",
": i ' lit , 0 , ' pickr , ; immediate",
": j ' lit , 2 , ' pickr , ; immediate",
": do ' swap , ' >r , ' >r , here ; immediate",
": loop+ ' r> , ' + , ' dup , ' >r , ' lit , 1 , ' pickr , ' > , ' jmp0 , , ' r> , ' drop , ' r> , ' drop , ; immediate",
": loop ' lit , 1 , postpone loop+ ; immediate",
": s\" compiling @ if ' lits , here 0 , fi here begin key dup 34 = if drop",
"compiling @ if here swap - swap ! else dup here swap - fi exit else , fi",
"again ; immediate",
": .\" compiling @ if postpone s\" ' tell , else begin key dup 34 = if drop exit else emit fi again",
"fi ; immediate",
".\" Welcome to zForth, \" here . .\" bytes used\" cr ;",
"located at that address )",
": next dup # + ;",
": name dup @ 31 and swap next dup next rot tell @ ;",
": words latest @ begin name 32 emit dup 0 = until cr drop ;",
": .s",
"depth 0 = if",
".\" Empty\" cr",
"else",
"depth 1 - 0 do",
"i . .\" : \"",
"i pick . cr",
"loop",
"fi",
";",
};

#endif

