

all: example.pdf breakdown_example.pdf dpu-transfer.pdf

example.pdf: example.csv ./chart_dpu_vs_host.py
	./chart_dpu_vs_host.py -r $< -o $@ \
		--xlab "Number of DPUs" --ylab "Time (s)"


breakdown_example.pdf: breakdown_example.csv ./chart_breakdown.py
	./chart_breakdown.py -r $< -o $@ \
		--xlab "Raw Filtering Selectivity" --ylab "Time (s)"

dpu-transfer.pdf:
	./chart_dpu_data_xfer.py -r dpu_data_xfer_speed.csv -o dpu-transfer.pdf

bw_vs_size.png:
	./bw_vs_size.py -r dpu_data_xfer_speed.csv -o $@
