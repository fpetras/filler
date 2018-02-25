echo "===============================" >> grati_map02.result
../resources/filler_vm -f ../resources/maps/map01 -p2 ../resources/players/grati.filler -p1 ../fpetras.filler -q | tail -n2 >> grati_map02.result
echo "===============================" >> grati_map02.result
sed -i orig 's/O/fpetras.filler     /g' grati_map02.result
sed -i orig 's/X/grati.filler       /g' grati_map02.result
rm grati_map02.resultorig
