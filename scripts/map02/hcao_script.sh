echo "===============================" >> hcao_map02.result
../resources/filler_vm -f ../resources/maps/map01 -p1 ../resources/players/hcao.filler -p2 ../fpetras.filler -q | tail -n2 >> hcao_map02.result
echo "===============================" >> hcao_map02.result
sed -i orig 's/O/hcao.filler        /g' hcao_map02.result
sed -i orig 's/X/fpetras.filler     /g' hcao_map02.result
rm hcao_map02.resultorig
