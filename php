<?php
$ontario_data = [
    "name" => "Ontario",
    "capital" => "Toronto",
    "official_language" => "English",
    "time_zones" => ["Eastern", "Central"],
    "pincode_prefix" => "K, L, M, N, P"
];

echo "<h2>Administrative Data: " . $ontario_data['name'] . "</h2>";
echo "<ul>";
echo "<li><strong>Provincial Capital:</strong> " . $ontario_data['capital'] . "</li>";
echo "<li><strong>Time Zones:</strong> " . implode(" & ", $ontario_data['time_zones']) . "</li>";
echo "<li><strong>Postal Prefixes:</strong> " . $ontario_data['pincode_prefix'] . "</li>";
echo "</ul>";
?>
