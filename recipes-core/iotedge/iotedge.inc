DEPENDS += "openssl aziotctl"

export OPENSSL_DIR = "${STAGING_EXECPREFIXDIR}"
export LIBIOTHSM_NOBUILD="On"

SRC_URI +="file://0001-Change-panic-strategy-to-unwind.patch"

do_install () {
    # Binaries
    install -d  "${D}${bindir}"
    install -m 755 "${WORKDIR}/build/target/${TARGET_SYS}-gnu/release/iotedge" ${D}${bindir}/iotedge
}
