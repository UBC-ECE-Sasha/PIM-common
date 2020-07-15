

all: example.pdf 

example.pdf: example.csv ./chart_dpu_vs_host.py
	./chart_dpu_vs_host.py -r $< -o $@ \
		--xlab "Number of DPUs" --ylab "Time (s)"
