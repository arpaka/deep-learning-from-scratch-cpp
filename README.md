# ゼロから作る Deep Learning 〜C++ Version〜

本リポジトリではオライリー・ジャパン発行書籍『ゼロから作る Deep Learning』のC++バージョンを作っていきます。  
本家のPythonバージョンは[こちら](https://github.com/oreilly-japan/deep-learning-from-scratch)。

## ファイル構成

本家に準じます。

## 必要条件

ソースコードを実行するには、下記のソフトウェアがインストールされている必要があります。

- make
- g++ 4.9 >=
- [matplotlib-cpp](https://github.com/lava/matplotlib-cpp)
- [xtensor](https://github.com/QuantStack/xtensor)
- [xtensor-blas](https://github.com/QuantStack/xtensor-blas)

### 事前準備

#### matplotlib-cpp

```sh
sudo apt-get install python-matplotlib python-numpy python2.7-dev python-tk
```

#### xtensor

```sh
sudo apt-get install build-essential cmake libgtest-dev
git clone https://github.com/QuantStack/xtensor.git
cd xtensor
mkdir build
cd build
cmake -DBUILD_TESTS=ON ../
make
test/test_xtensor
sudo make install
```

#### xtensor-blas

```sh
sudo apt-get install libopenblas-dev liblapack-dev
git clone https://github.com/QuantStack/xtensor-blas.git
cd xtensor-blas
sudo make install
```

## 実行方法

GitHubからソースコードを取得します。

```sh
git clone --recursive https://github.com/arpaka/deep-learning-from-scratch-cpp.git
cd deep-learning-from-scratch-cpp
```

各章のフォルダへ移動して、makeコマンドを実行します。

```sh
$ cd ch01
$ make
$ ./test/test_matplotlib

$ cd ../ch05
$ make
$ ./train_nueralnet
```

## ライセンス

本リポジトリのソースコードはMITライセンスです。 商用・非商用問わず、自由にご利用ください。
