<?php

$handle = fopen ("php://stdin","r");
$arr = array();
for($arr_i = 0; $arr_i < 6; $arr_i++) {
   $arr_temp = fgets($handle);
   $arr[] = explode(" ",$arr_temp);
  array_walk($arr[$arr_i],'intval');
}

//print_r($arr);
$lmt    = count($arr) - 2;
$in_lmt = count($arr);
$sum    = 0;
$max    = 0;
$k = 0;
for( $i = 0; $i <= $lmt ; $i++ ){    
    for( $j = $i ; $j <= $in_lmt ; $j++){
        if($j < ($in_lmt/2)){
            $sum = $arr[$i][$j] + $sum;
            $sum = $arr[$i+2][$j] + $sum;
            //echo '<br>in sum--'.$sum;
        }
        if($j == ($in_lmt/2)){
            $sum = $sum + $arr[$i+1][$j/2];            
            $max = ($sum > $max ? $sum : $max );
            $sum = 0;
            //echo '<br>in else--'.$arr[$i+1][$j/2];//die;
        }
        //print 'max-->'.$k++;
        if($j > ($in_lmt/2)){
            $sum = $arr[$i][$j] + $sum;
            $sum = $arr[$i+2][$j] + $sum;            
        }
        if($j == $in_lmt){
            $sum = $sum + $arr[$i+1][$j/2];            
            $max = ($sum > $max ? $sum : $max );
            $sum = 0;
        }
        
    }
}
echo $max;
?>
