# Measurement Methodology
Three programs were measured: `baseline_loop.c`, `comparison_algorithms.c` and `instrumentation_lab.c`. Each was compiled with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long` and run 3 times in a row.

Timing used the C `clock()` function, which measures CPU time rather than wall-clock time. Each reading was converted to seconds by dividing the difference between two `clock()` values by `CLOCKS_PER_SEC`.

In `baseline_loop.c` and `comparison_algorithms.c`, `clock()` was called directly before and after the code being tested: the `ITERATION_COUNT` loop, and the `count_even_naive` and `count_even_single_pass` functions.

In `instrumentation_lab.c`, four checkpoints (`time0` to `time3`) were placed around the three phases. Each checkpoint marked the end of one phase and the start of the next, so there were no gaps and nothing was counted twice. TOTAL was measured from `time0` to `time3`, so it was always greater than or equal to any single phase.

The `printf` calls and the checksum check were kept outside all timed regions. Printing is I/O and would add time that has nothing to do with the computation being measured.

# Observed Performance Differences
For `baseline_loop.c`, the three runs took 0.073182, 0.072897 and 0.073009 seconds. Run 2 was the fastest, 0.000285 seconds quicker than the slowest, even though the computation was identical each time.

For `comparison_algorithms.c`, Implementation A took 0.935135, 0.938444 and 0.935688 seconds, an average of 0.936422 seconds. Implementation B took 0.000031, 0.000032 and 0.000032 seconds, an average of 0.000032 seconds. A was about 29,263 times slower than B.

For `instrumentation_lab.c`, the output was TOTAL 0.000349, BUILD_DATA 0.000158, PROCESS 0.000146 and REDUCE 0.000045 seconds. BUILD_DATA was the slowest phase, and the three phases add up exactly to TOTAL.

# Relation Between Runtime and Energy Consumption
`clock()` measures CPU time, the time the processor spent actively working on the program. A CPU draws power while it works, and energy is roughly power multiplied by time, so CPU time can be used as an indirect indicator of energy use.

In `comparison_algorithms.c`, A averaged 0.936422 seconds and B averaged 0.000032 seconds. Both produced the same result, so A used far more processor time, and likely far more energy, to do the same job.

This is an estimate based on measured CPU time, not a measured energy value. If code like A ran millions of times, the difference would grow, because the wasted CPU time is repeated on every run.

# Limitations of the Experiment
Only CPU time was measured, not energy, so any conclusions about energy use are estimates.

The tests were not run in an isolated environment. Other programs were running on the machine, which may have affected the results. This shows in `baseline_loop.c`, where the same computation ranged from 0.072897 to 0.073182 seconds.

Only 3 runs were done for each program. More runs would give a more reliable average, because one unusual run would have less effect on the result.

Some measurements were very small. Implementation B averaged only 0.000032 seconds, close to the smallest step `clock()` can measure. A difference of one tick changes B's average noticeably, so the ratio between A and B could shift with more runs.

# Practical Engineering Takeaway
Implementations A and B produced the same result, but A took 0.936422 seconds compared to B's 0.000032 seconds. When writing real code, I would choose the better algorithm first, before trying to optimise anything else.

Timing each phase separately in `instrumentation_lab.c` showed where the time was actually spent. BUILD_DATA took the longest, so that would be the first place to look for improvements.

In future, I would run benchmarks more times and on a quieter machine to get more reliable results.


