

all: example.pdf breakdown_example.pdf

example.pdf: example.csv ./chart_dpu_vs_host.py
	./chart_dpu_vs_host.py -r $< -o $@ \
		--xlab "Number of DPUs" --ylab "Time (s)"


breakdown_example.pdf: breakdown_example.csv ./chart_breakdown.py
	./chart_breakdown.py -r $< -o $@ \
		--xlab "Raw Filtering Selectivity" --ylab "Time (s)"
