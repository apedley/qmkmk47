# Matrix Diagram for MTBKeys MTB60 Solder

The layout options are my best guess as to the matrix; I was unable to find any
detailed information regarding this PCB.

                                                                 - @noroadsleft
                                                                    9 Mar, 2023

```
                                                    ┌───────┐
                                       2u Backspace │0E     │
                                                    └───────┘
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
│00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0A │0B │0C │0D │0E │    ISO Enter
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤      ┌─────┐
│11   │12 │13 │14 │15 │16 │17 │18 │19 │1A │1B │1C │1D │1E   │      │     │
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤   ┌──┴┐??  │
│20    │22 │23 │24 │25 │26 │27 │28 │29 │2A │2B │2C │2D      │   │?? │    │
└──────┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴────────┘   └───┴────┘
┌─ Shift Row ───────────────────────────────────────────────┐
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
│30 │31 │32 │33 │34 │35 │36 │37 │38 │39 │3A │3B │3C │3D │3E │
└───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
┌────┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬──────┬───┐
│30  │31 │32 │33 │34 │35 │36 │37 │38 │39 │3A │3B │3D    │3E │
└────┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴──────┴───┘
┌────────┐                                       ┌──────────┐
│30      │ 2.25u LShift             2.75u RShift │3D        │
└────────┘                                       └──────────┘
┌─ Bottom Row ──────────────────────────────────────────────┐
┌────┬────┬────┬────────┬────┬──────────┬───┬───┬───┬───┬───┐
│40  │41  │43  │44      │46  │48        │4A │4B │4C │4D │4E │
└────┴────┴────┴────────┴────┴──────────┴───┴───┴───┴───┴───┘
               ┌─ 6.25u Spacebar ───────┬─ Standard ────────┐
┌────┬────┬────┬────────────────────────┬────┬────┬────┬────┐
│40  │41  │43  │46                      │4A  │4B  │4C  │4E  │
└────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
┌─────┬───┬─────┬───────────────────────────┬─────┬───┬─────┐
│40   │41 │43   │46                         │4B   │4C │4E   │ Tsangan/WKL/HHKB
└─────┴───┴─────┴───────────────────────────┴─────┴───┴─────┘
```
