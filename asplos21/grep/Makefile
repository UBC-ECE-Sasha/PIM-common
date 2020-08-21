
grep.pdf: grep.csv ../chart_dpu_vs_host.py
	../chart_dpu_vs_host.py -r $< -o $@ \
		--xlab "Number of Tasklets" --ylab "Speedup" --speedup
