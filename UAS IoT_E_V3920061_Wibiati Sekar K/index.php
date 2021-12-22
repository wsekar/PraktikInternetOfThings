<?php
include 'config.php';
?>

<!doctype html>
<html lang="en">

<head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.6.0/dist/css/bootstrap.min.css" integrity="sha384-B0vP5xmATw1+K9KRQjQERJvTumQW0nPEzvF6L/Z6nronJ3oUOFUFpCjEUQouq2+l" crossorigin="anonymous">
    <link rel="stylesheet" type="text/css" href="admin.css">
    <link rel="stylesheet" type="text/css" href="../fontawesome/css/all.min.css">
    <title>UAS IoT</title>
</head>
<nav class="navbar navbar-expand-lg navbar-light bg-warning fixed-top">
    <a class="navbar-brand" href="#"><b>Welcome</b></a>
</nav>
<div class="row no-gutters mt-5">
    <div class="col-md-10 p-5 pt-2">
        <!-- <h3><i class="fas fa-share-alt-square mr-2"></i>MENU ADMIN</h3> -->
        <hr>
        <?php
        error_reporting(0);
        include 'config.php';
        ?>

        <head>
            <title>Edit Body</title>

            <head>

            <body>
                <div class="row">
                    <div class="col-lg-12">
                        <div class="table-responsive">
                            <table class="table table-bordered table-hover table-striped">
                                <tr>
                                    <th>ID</th>
                                    <th>Suhu</th>
                                    <th>Status</th>

                                </tr>
                                </thead>
                                <tbody>
                                    <?php
                                    $no = 0;
                                    $result = mysqLi_query($conn, "SELECT * FROM test ORDER BY id ASC");
                                    while ($row = mysqli_fetch_array($result)) {
                                        $no++
                                    ?>
                                        <tr>
                                            <td><?php echo $row['id']; ?></td>
                                            <td><?php echo $row['username']; ?></td>
                                            <td><?php echo $row['password']; ?></td>
                                        </tr>
                                    <?php } ?>
                                </tbody>
                            </table>

</html>