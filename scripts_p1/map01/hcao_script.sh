echo "===============================" >> hcao_map01.result
../resources/filler_vm -f ../resources/maps/map01 -p1 ../fpetras.filler -p2 ../resources/players/hcao.filler -q | tail -n2 >> hcao_map01.result
echo "===============================" >> hcao_map01.result
sed -i orig 's/O/fpetras.filler     /g' hcao_map01.result
sed -i orig 's/X/hcao.filler        /g' hcao_map01.result
rm hcao_map01.resultorig
