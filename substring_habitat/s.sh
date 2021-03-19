for ((i = 1; i <= 12; i++)); do
	echo TEST $i
	./gen > input$i.txt || break
	./sol < input$i.txt > output$i.txt || break
done