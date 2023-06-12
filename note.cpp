


apt-get update
apt install composer

install phpmyadimn and laravel packages
=======================================
sudo apt install phpmyadmin openssl php8.1-common php8.1-curl php-json  php8.1-mysql php8.1-xml php8.1-zip php8.1-mbstring
service apache2 restart





switch php version
===================
sudo update-alternatives --config php

change phpmyadin passsword
==========================
ALTER USER 'root'@'localhost' IDENTIFIED WITH mysql_native_password BY 'userone';



install nodejs
==============
curl -sL https://deb.nodesource.com/setup_16.x | sudo -E bash -
apt-get install nodejs
apt install npm


Laravel Route Not Work
======================
apache2.conf
allowoveride All

a2enmod rewrite




Domain Add
==========
a2ensite mmc-web.se.ke.conf
a2distsite conf
systemctl reload apache2
