FT_DIFF=$(($FT_LINE2-$FT_LINE1))

cat /etc/passwd |
grep -v "#" |
cut -d : -f 1 |
awk "NR%2==0" |
rev  |
sort -r |
awk '{if(NR >= '$FT_LINE1' && NR <= '$FT_LINE2') next; print }' |
sed 's/$/,/g' |
tr "\n" " "

