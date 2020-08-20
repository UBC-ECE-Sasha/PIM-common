

all: aes.pdf

aes.pdf: aes.csv ./chart_dpu_vs_host.py
	./chart_dpu_vs_host.py -r $< -o $@ \
		--xlab "Data size" --ylab "Speedup"
