echo "===============================" >> grati_map02.result
../resources/filler_vm -f ../resources/maps/map01 -p1 ../resources/players/grati.filler -p2 ../fpetras.filler -q | tail -n2 >> grati_map02.result
echo "===============================" >> grati_map02.result
sed -i orig 's/O/grati.filler       /g' grati_map02.result
sed -i orig 's/X/fpetras.filler     /g' grati_map02.result
rm grati_map02.resultorig
