<?php
// echo error_reporting (0);
 include "config/koneksi.php";
?>
<!DOCTYPE html>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	<link href="css/metro-bootstrap.css" rel="stylesheet">
    <link href="css/metro-bootstrap-responsive.css" rel="stylesheet">
    <link href="css/iconFont.css" rel="stylesheet">
	<link href="css/docs.css" rel="stylesheet">

    <!-- Load JavaScript Libraries -->
    <script src="js/jquery/jquery.min.js"></script>
    <script src="js/jquery/jquery.widget.min.js"></script>
    <script src="js/jquery/jquery.mousewheel.js"></script>

    <!-- Metro UI CSS JavaScript plugins -->
    <script src="js/load-metro.js"></script>
	<script src="js/docs.js"></script>

    <style>
	</style>

<title>Selamat Datang di Website Kami</title>

</head>

<body class="metro"><div id="scroll"></div>
	<header class="bg-darkCobalt" data-load="atasan.php"></header>

    <div class="" data-load="sampul.html"></div>
	<br />
	<div class="container row">
        <div class="grid fluid">
            <div class="border padding20">
				<legend class="text-right"><h2>Daftar Paket Wisata</h2></legend>
					<div class="accordion" data-role="accordion" data-closeany="true">
                        <?php
                            $query = "SELECT * FROM tbl_paket,tbl_kategori WHERE tbl_paket.id_kategori=tbl_kategori.id_kategori order by tbl_paket.id_kategori";
                            $comot=	mysqli_query($con, $query);
                            while($ngisi = mysqli_fetch_array($comot)){
						?>

						<div class="accordion-frame">
							<a class="heading bg-darkCobalt fg-white" href="#">[<?php echo $ngisi['kategori']; ?>] <?php echo $ngisi['nama_paket']; ?><span class="place-right"><?php echo $ngisi['harga_paket']; ?> IDR</span></a>
							<div class="content">
								<?php echo $ngisi['ket_paket']; ?>
							</div>
						</div>
						<?php
						}
						?>
					</div>
            </div>
        </div>
    </div>

    <?php include "bawahan.php" ?>
</body>
</html>
