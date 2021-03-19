# for ((i = 1; ;i++)); do
# 	./gen > int
# 	diff -w <(./sol < int) <(./sol2 < int) || break
# 	echo TEST $i OK
# done

for ((i = 1; i <= 12;i++)); do
	diff -w <(./sol2 < input$i.txt) output$i.txt || break
	echo TEST $i OK
done