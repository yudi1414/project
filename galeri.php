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

<body class="metro">
	<header class="bg-darkCobalt" data-load="atasan.php"></header>

    <div class="" data-load="slider.php"></div>
	<br />
    <div class="container grid">
		<div class="border padding15">
        <div class="row">
			<div class="span7">
				<legend>Galeri Lembah Harau</legend>
				<div class="carousel" id="imgSlide">
					<div class="slide">
						<img src="images/galeri/harau/Lembah Harau.jpg" class="cover1" />
					</div>
                    <div class="slide">
                        <img src="images/galeri/harau/4B.jpg" class="cover1" />
                    </div>
                    <div class="slide">
                        <img src="images/galeri/harau/harau_3.jpg" class="cover1" />
                    </div>

				</div>
			</div>
			<div class="span7">
				<legend>Galeri Jam Gadang</legend>
				<div class="carousel" id="imgSlide1">
					<div class="slide">
						<img src="images/galeri/jam-gadang/gadang.jpg" class="cover1" />
					</div>
					<div class="slide">
						<img src="images/galeri/jam-gadang/rocky01.jpg" class="cover1" />
					</div>
					<div class="slide">
						<img src="images/galeri/jam-gadang/photo1jpg.jpg" class="cover1"/>
					</div>
				</div>
			</div>
        </div>
		</div>

		<div class="border padding15">
        <div class="row">
			<div class="span7">
				<legend>Galeri Kepulauan Mentawai</legend>
				<div class="carousel" id="imgSlide2">
					<div class="slide">
						<img src="images/galeri/Kepuluan Mentawai/Kandui-Beach-Villas.jpg" class="cover1" />
					</div>
					<div class="slide">
						<img src="images/galeri/Kepuluan Mentawai/pulau-mentawai-padang-1.jpg" class="cover1"/>
					</div>
					<div class="slide">
						<img src="images/galeri/Kepuluan Mentawai/pantai-kepulauan-mentawai-sumatera.jpg" class="cover1" />
					</div>
					<div class="slide">
						<img src="images/galeri/Kepuluan Mentawai/wavepark-mentawai-resort.jpg" class="cover1" />
					</div>
				</div>
			</div>
			<div class="span7">
				<legend>Galeri Ngarai Sianok</legend>
				<div class="carousel" id="imgSlide3">
					<div class="slide">
						<img src="images/galeri/sianok/ngarai_sianok.jpg" class="cover1" />
					</div>
					<div class="slide">
						<img src="images/galeri/sianok/1A.jpg" class="cover1" />
					</div>
					<div class="slide">
						<img src="images/galeri/sianok/NgaraiSianok01.jpg" class="cover1" />
					</div>
				</div>
			</div>
        </div>
		</div>

		      <?php include "bawahan.php" ?>

	<script>
		$(function(){
			$("#imgSlide").carousel({
				effect: 'slide',
				period: 3000,
				markers: {
					show: true,
					type: 'default',
					position: 'bottom-right'
				}
			});
			$("#imgSlide1").carousel({
				effect: 'fade',
				period: 3000,
				markers: {
					show: true,
					type: 'default',
					position: 'bottom-right'
				}
			});
			$("#imgSlide2").carousel({
				effect: 'slowdown',
				period: 3000,
				markers: {
					show: true,
					type: 'default',
					position: 'bottom-right'
				}
			});
			$("#imgSlide3").carousel({
				effect: 'switch',
				period: 3000,
				markers: {
					show: true,
					type: 'default',
					position: 'bottom-right'
				}
			});
			$("#imgSlide4").carousel({
				effect: 'switch',
				period: 3000,
				markers: {
					show: true,
					type: 'default',
					position: 'bottom-right'
				}
			});
		})
	</script>
</body>
</html>
