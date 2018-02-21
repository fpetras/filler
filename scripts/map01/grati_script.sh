echo "===============================" >> grati_map01.result
../resources/filler_vm -f ../resources/maps/map01 -p1 ../fpetras.filler -p2 ../resources/players/grati.filler -q | tail -n2 >> grati_map01.result
echo "===============================" >> grati_map01.result
sed -i orig 's/O/fpetras.filler     /g' grati_map01.result
sed -i orig 's/X/grati.filler       /g' grati_map01.result
rm grati_map01.resultorig
