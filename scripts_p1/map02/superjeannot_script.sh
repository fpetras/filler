echo "===============================" >> superjeannot_map02.result
../resources/filler_vm -f ../resources/maps/map01 -p2 ../resources/players/superjeannot.filler -p1 ../fpetras.filler -q | tail -n2 >> superjeannot_map02.result
echo "===============================" >> superjeannot_map02.result
sed -i orig 's/O/fpetras.filler     /g' superjeannot_map02.result
sed -i orig 's/X/superjeannot.filler/g' superjeannot_map02.result
rm superjeannot_map02.resultorig
