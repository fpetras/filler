echo "===============================" >> hcao_map01.result
../resources/filler_vm -f ../resources/maps/map01 -p2 ../fpetras.filler -p1 ../resources/players/hcao.filler -q | tail -n2 >> hcao_map01.result
echo "===============================" >> hcao_map01.result
sed -i orig 's/O/hcao.filler        /g' hcao_map01.result
sed -i orig 's/X/fpetras.filler     /g' hcao_map01.result
rm hcao_map01.resultorig
