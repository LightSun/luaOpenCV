#sudo apt-get install ffmpeg
#sudo apt-get install pkg-config libavcodec-dev libavformat-dev libswscale-dev libavutil-dev libavresample-dev
#sudo apt-get install libgstreamer1.0-dev gstreamer1.0-libav gstreamer1.0-doc gstreamer1.0-tools gstreamer1.0-x gstreamer1.0-alsa gstreamer1.0-gl gstreamer1.0-gtk3 
#opt: gstreamer1.0-qt5 gstreamer1.0-pulseaudio
#sudo apt-get install libv4l-dev

root_path=$(pwd)
install_path=${root_path}/_install
build_dir=${root_path}/_build

#export FFMPEG_PATH=/opt/ffmpeg
#export LD_LIBRARY_PATH=$FFMPEG_PATH/lib/:$LD_LIBRARY_PATH
#export PKG_CONFIG_PATH=$FFMPEG_PATH/lib/pkgconfig:$PKG_CONFIG_PATH

# 如果不用 '/opt/ffmpeg'方式安装
#apt-get install pkg-config 
#	libavcodec-dev libavformat-dev libswscale-dev libavutil-dev libavresample-dev


rm -rf ${build_dir}
mkdir ${build_dir}
cd ${build_dir}

opencv_contrib_dir=/home/heaven7/HsyPro/medtest/opencv_contrib-4.5.4

# build JPEG_TURBO error. why?
cmake -G Ninja .. \
    -DCMAKE_INSTALL_PREFIX=${install_path} \
    -DCMAKE_BUILD_TYPE=Release \
    -DBUILD_SHARED_LIBS=ON \
	-DOPENCV_EXTRA_MODULES_PATH=${opencv_contrib_dir}/modules \
    -DWITH_IPP=OFF \
    -DBUILD_IPP_IW=OFF \
    -DWITH_LAPACK=OFF \
    -DWITH_EIGEN=OFF \
    -DCMAKE_INSTALL_LIBDIR=lib64 \
    -DWITH_ZLIB=ON \
    -DBUILD_ZLIB=ON \
    -DWITH_JPEG=ON \
    -DBUILD_JPEG=ON \
    -DWITH_PNG=ON \
    -DBUILD_PNG=ON \
    -DWITH_TIFF=ON \
	-DWITH_FFMPEG=ON \
	-DWITH_LIBV4L=ON \
	-DBUILD_JPEG_TURBO_DISABLE=ON \
    -DBUILD_TIFF=ON

#make -j8
#make install
