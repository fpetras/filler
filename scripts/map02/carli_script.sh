echo "===============================" >> carli_map02.result
../resources/filler_vm -f ../resources/maps/map01 -p2 ../resources/players/carli.filler -p1 ../fpetras.filler -q | tail -n2 >> carli_map02.result
echo "===============================" >> carli_map02.result
sed -i orig 's/O/fpetras.filler     /g' carli_map02.result
sed -i orig 's/X/carli.filler       /g' carli_map02.result
rm carli_map02.resultorig
