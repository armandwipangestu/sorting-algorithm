<?php
  
function bubbleSort(&$data) {

    $n = sizeof($data);
  
    for($i = 0; $i < $n; $i++) 
    {
        for ($j = 0; $j < $n - $i - 1; $j++) 
        {
            if ($data[$j] > $data[$j+1])
            {
                $t = $data[$j];
                $data[$j] = $data[$j+1];
                $data[$j+1] = $t;
            }
        }
    }
}

function calculateMicroSeconds($duration) {
  $hours = (int)($duration/60/60);
  $minutes = (int)($duration/60)-$hours*60;
  $seconds = (int)$duration-$hours*60*60-$minutes*60;
  $str = "$hours jam $minutes menit $seconds detik.";
  return $str;
}

$data = [];

for ( $i = 0; $i < 10000; $i++ ) {
  $data[$i] = rand( 0, 100 );
}

$len = sizeof($data);

echo "Data Sebelum di Sorting: \n";
for ( $i = 0; $i < $len; $i++ ) {
  #echo "[" . $i + 1 . "]" . $data[$i] . " ";
  echo $data[$i] . " ";
}

echo "\n\n";

echo "Data Setelah di Sorting: \n";

$start = microtime(true);
bubbleSort($data);
$stop = microtime(true);
$duration = ($stop - $start);

for ( $i = 0; $i < $len; $i++ ) {
  #echo "[" . $i + 1 . "]" . $data[$i] . " ";
  echo $data[$i] . " ";
}

echo "\n\n";
echo "Jumlah Data: " . $len . " data\n";
#echo "Total Waktu Sorting: " . $duration . " microseconds.";
echo "Total Waktu Sorting: " . calculateMicroSeconds($duration);
