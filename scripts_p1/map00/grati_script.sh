echo "===============================" >> grati_map00.result
../resources/filler_vm -f ../resources/maps/map00 -p1 ../fpetras.filler -p2 ../resources/players/grati.filler -q | tail -n2 >> grati_map00.result
echo "===============================" >> grati_map00.result
sed -i orig 's/O/fpetras.filler     /g' grati_map00.result
sed -i orig 's/X/grati.filler       /g' grati_map00.result
rm grati_map00.resultorig
