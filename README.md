<div align="center">
	<span style="font-weight: bold"> <a> English </a> </span>
</div>

# geographiclib-go
> Go implementation of [GeographicLib(LocalCartesian)](https://geographiclib.sourceforge.io/)

[![GitHub release](https://img.shields.io/github/v/release/XayahSuSuSu/geographiclib-go?color=orange)](https://github.com/XayahSuSuSu/geographiclib-go/releases) [![License](https://img.shields.io/github/license/XayahSuSuSu/geographiclib-go?color=ff69b4)](./LICENSE)

## Installation and usage
1. Install
```
go get github.com/XayahSuSuSu/geographiclib-go
```

2. Download **library** from [Releases](https://github.com/XayahSuSuSu/geographiclib-go/releases/latest)

3. Put the **library** into project directory

4. Set up **cgo** environment

5. Enable **cgo**
```
go env -w CGO_ENABLED=1 
```

6. Set up `CGO_LDFLAGS` **before** building
* Windows
```
$env:CGO_LDFLAGS="-L${path_to_lib} $env:CGO_LDFLAGS"
```
* Linux
```
export CGO_LDFLAGS="-L${path_to_lib} ${CGO_LDFLAGS}"
```
Replace `${path_to_lib}` with your **own path**

7. Build
```
go build
```

8. Make sure that the library is **in the same directory** as the executable file

## Build library locally
1. Clone this repo recursively
```
git clone --recursive https://github.com/XayahSuSuSu/geographiclib-go
```

2. Build with [cmake](https://cmake.org/)
```
cd geographiclib-go/cgo
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
make
```

## LICENSE
[GNU General Public License v3.0](./LICENSE)
