echo "===============================" >> grati_map00.result
../resources/filler_vm -f ../resources/maps/map00 -p2 ../fpetras.filler -p1 ../resources/players/grati.filler -q | tail -n2 >> grati_map00.result
echo "===============================" >> grati_map00.result
sed -i orig 's/O/grati.filler       /g' grati_map00.result
sed -i orig 's/X/fpetras.filler     /g' grati_map00.result
rm grati_map00.resultorig
