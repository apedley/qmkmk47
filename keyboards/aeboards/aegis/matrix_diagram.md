# Matrix Diagram for AEboards Aegis

```
┌───┬───┬───┬───┐ ┌───┐   ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐
│00 │10 │01 │11 │ │02 │   │12 │03 │13 │04 │ │14 │05 │15 │06 │ │16 │07 │17 │08 │
└───┴───┴───┴───┘ └───┘   └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┴───┘
┌───┬───┬───┬───┐ ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐   ┌───────┐
│20 │30 │21 │31 │ │22 │32 │23 │33 │24 │34 │25 │35 │26 │36 │27 │37 │28 │38 │18 │   │38     │ 2u Backspace
├───┼───┼───┼───┤ ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤   └───────┘
│40 │50 │41 │51 │ │42   │52 │43 │53 │44 │54 │45 │55 │46 │56 │47 │57 │48 │58   │
├───┼───┼───┼───┤ ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
│60 │70 │61 │71 │ │62    │72 │63 │73 │64 │74 │65 │75 │66 │76 │67 │77 │68      │
├───┼───┼───┼───┤ └───┬──┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤   ┌──────────┐
│80 │90 │81 │91 │┌───┐│92  │83 │93 │84 │94 │85 │95 │86 │96 │87 │97 │88    │98 │   │88        │ 2.75u RShift
├───┼───┼───┼───┘│82 │└───┬┴───┼───┴┬──┴───┴───┴───┴───┴───┴─┬─┴───┼────┬─┴───┤   └──────────┘
│A0 │B0 │A1 │┌───┼───┼───┐│A3  │B3  │B5                      │B7   │A8  │B8   │
└───┴───┴───┘│B1 │A2 │B2 │└────┴────┴────────────────────────┴─────┴────┴─────┘
             └───┴───┴───┘
                          ┌───┬───┬───────────────────────────┬─────┬───┬─────┐
                          │A3 │B3 │B5                         │B7   │A8 │B8   │ 7u Space
                          └───┴───┴───────────────────────────┴─────┴───┴─────┘
[NUMPAD OPTIONS]───────────────────
┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐
│40 │50 │41 │51 │ │   │50 │41 │51 │
├───┼───┼───┼───┤ │60 ├───┼───┼───┤
│60 │70 │61 │   │ │   │70 │61 │71 │
├───┼───┼───┤91 │ ├───┼───┼───┼───┤
│80 │90 │81 │   │ │   │90 │81 │91 │
├───┴───┼───┼───┘ │80 ├───┴───┼───┘
│A0     │A1 │     │   │A1     │
└───────┴───┘     └───┴───────┘
```
