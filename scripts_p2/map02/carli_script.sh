echo "===============================" >> carli_map02.result
../resources/filler_vm -f ../resources/maps/map01 -p1 ../resources/players/carli.filler -p2 ../fpetras.filler -q | tail -n2 >> carli_map02.result
echo "===============================" >> carli_map02.result
sed -i orig 's/O/carli.filler       /g' carli_map02.result
sed -i orig 's/X/fpetras.filler     /g' carli_map02.result
rm carli_map02.resultorig
