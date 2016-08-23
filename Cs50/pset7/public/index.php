<?php

    // configuration
    require("../includes/config.php"); 
    
    $positions = [];
    foreach ($rows as $row)
    {
        $stock = lookup($row["symbol"]);
        if ($stock !== false)
        {
            $positions[] = [
                "name" => $stock["name"],
                "price" => $stock["price"],
                "shares" => $row["shares"],
                "symbol" => $row["symbol"]
            ];
        }
    }
    $cash = query("SELECT cash FROM users WHERE id = ?", $_SESSION["id"]);
    // render portfolio
    render("portfolio.php", ["cash0" => $cash[0], "positions" => $positions, "title" => "Portfolio"]);

?>
