if [ -z "$1" ]
then
	echo "usage: sh run_map02.sh [number]"
else
	echo "champely matches in progress..."
	for i in `seq $1`; do sh map02/champely_script.sh; done
	echo "abanlin matches in progress..."
	for i in `seq $1`; do sh map02/abanlin_script.sh; done
	echo "carli matches in progress..."
	for i in `seq $1`; do sh map02/carli_script.sh; done
	echo "grati matches in progress..."
	for i in `seq $1`; do sh map02/grati_script.sh; done
	echo "hcao matches in progress..."
	for i in `seq $1`; do sh map02/hcao_script.sh; done
	echo "superjeannot matches in progress..."
	for i in `seq $1`; do sh map02/superjeannot_script.sh; done
	echo "done ✅"
fi
