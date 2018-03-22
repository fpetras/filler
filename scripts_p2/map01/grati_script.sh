echo "===============================" >> grati_map01.result
../resources/filler_vm -f ../resources/maps/map01 -p2 ../fpetras.filler -p1 ../resources/players/grati.filler -q | tail -n2 >> grati_map01.result
echo "===============================" >> grati_map01.result
sed -i orig 's/O/grati.filler       /g' grati_map01.result
sed -i orig 's/X/fpetras.filler     /g' grati_map01.result
rm grati_map01.resultorig
