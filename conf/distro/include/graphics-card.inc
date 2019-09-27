#PREFERRED_VERSION_libdrm = "rk"
PREFERRED_PROVIDER_virtual/kernel    = "linux-rockchip"
PREFERRED_PROVIDER_virtual/egl       = "rockchip-libmali"
PREFERRED_PROVIDER_virtual/libgles1  = "rockchip-libmali"
PREFERRED_PROVIDER_virtual/libgles2  = "rockchip-libmali"
PREFERRED_PROVIDER_virtual/libopencl = "rockchip-libmali"
LICENSE_FLAGS_WHITELIST="commercial"

# For mali gpu
DISTRO_FEATURES_append += " egl"
PREFERRED_VERSION_ffmpeg = "git"

# Remove conflicting backends.
DISTRO_FEATURES_remove = "wayland x11"
