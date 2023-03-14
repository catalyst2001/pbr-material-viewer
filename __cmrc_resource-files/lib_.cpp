        #include <cmrc/cmrc.hpp>
#include <map>
#include <utility>

namespace cmrc {
namespace resources {

namespace res_chars {
// These are the files which are available in this resource library
// Pointers to D:/GITHUB/pbr-material-viewer/resources/shaders/shaderbrdf.fs
extern const char* const f_d25a_shaders_shaderbrdf_fs_begin;
extern const char* const f_d25a_shaders_shaderbrdf_fs_end;
// Pointers to D:/GITHUB/pbr-material-viewer/resources/shaders/shaderbrdf.vs
extern const char* const f_b433_shaders_shaderbrdf_vs_begin;
extern const char* const f_b433_shaders_shaderbrdf_vs_end;
// Pointers to D:/GITHUB/pbr-material-viewer/resources/shaders/shadercubemap.vs
extern const char* const f_2154_shaders_shadercubemap_vs_begin;
extern const char* const f_2154_shaders_shadercubemap_vs_end;
// Pointers to D:/GITHUB/pbr-material-viewer/resources/shaders/shaderequirectangular.fs
extern const char* const f_96f3_shaders_shaderequirectangular_fs_begin;
extern const char* const f_96f3_shaders_shaderequirectangular_fs_end;
// Pointers to D:/GITHUB/pbr-material-viewer/resources/shaders/shaderirradiance.fs
extern const char* const f_763a_shaders_shaderirradiance_fs_begin;
extern const char* const f_763a_shaders_shaderirradiance_fs_end;
// Pointers to D:/GITHUB/pbr-material-viewer/resources/shaders/shaderpbr.fs
extern const char* const f_83bb_shaders_shaderpbr_fs_begin;
extern const char* const f_83bb_shaders_shaderpbr_fs_end;
// Pointers to D:/GITHUB/pbr-material-viewer/resources/shaders/shaderpbr.vs
extern const char* const f_eac9_shaders_shaderpbr_vs_begin;
extern const char* const f_eac9_shaders_shaderpbr_vs_end;
// Pointers to D:/GITHUB/pbr-material-viewer/resources/shaders/shaderprefilter.fs
extern const char* const f_8e47_shaders_shaderprefilter_fs_begin;
extern const char* const f_8e47_shaders_shaderprefilter_fs_end;
// Pointers to D:/GITHUB/pbr-material-viewer/resources/shaders/shaderscreen.fs
extern const char* const f_f625_shaders_shaderscreen_fs_begin;
extern const char* const f_f625_shaders_shaderscreen_fs_end;
// Pointers to D:/GITHUB/pbr-material-viewer/resources/shaders/shaderscreen.vs
extern const char* const f_68be_shaders_shaderscreen_vs_begin;
extern const char* const f_68be_shaders_shaderscreen_vs_end;
// Pointers to D:/GITHUB/pbr-material-viewer/resources/shaders/shadersinglecolor.fs
extern const char* const f_7c9c_shaders_shadersinglecolor_fs_begin;
extern const char* const f_7c9c_shaders_shadersinglecolor_fs_end;
// Pointers to D:/GITHUB/pbr-material-viewer/resources/shaders/shadersinglecolor.vs
extern const char* const f_7c4f_shaders_shadersinglecolor_vs_begin;
extern const char* const f_7c4f_shaders_shadersinglecolor_vs_end;
// Pointers to D:/GITHUB/pbr-material-viewer/resources/shaders/shaderskybox.fs
extern const char* const f_6e8e_shaders_shaderskybox_fs_begin;
extern const char* const f_6e8e_shaders_shaderskybox_fs_end;
// Pointers to D:/GITHUB/pbr-material-viewer/resources/shaders/shaderskybox.vs
extern const char* const f_d618_shaders_shaderskybox_vs_begin;
extern const char* const f_d618_shaders_shaderskybox_vs_end;
// Pointers to D:/GITHUB/pbr-material-viewer/resources/shaders/shaderwireframe.fs
extern const char* const f_fc86_shaders_shaderwireframe_fs_begin;
extern const char* const f_fc86_shaders_shaderwireframe_fs_end;
// Pointers to D:/GITHUB/pbr-material-viewer/resources/shaders/shaderwireframe.vs
extern const char* const f_0e7a_shaders_shaderwireframe_vs_begin;
extern const char* const f_0e7a_shaders_shaderwireframe_vs_end;
// Pointers to resources/textures/albedo.png
extern const char* const f_145b_textures_albedo_png_begin;
extern const char* const f_145b_textures_albedo_png_end;
// Pointers to resources/textures/ao.png
extern const char* const f_c7d9_textures_ao_png_begin;
extern const char* const f_c7d9_textures_ao_png_end;
// Pointers to resources/textures/height.png
extern const char* const f_da90_textures_height_png_begin;
extern const char* const f_da90_textures_height_png_end;
// Pointers to resources/textures/metal.png
extern const char* const f_0e74_textures_metal_png_begin;
extern const char* const f_0e74_textures_metal_png_end;
// Pointers to resources/textures/normal.png
extern const char* const f_2e6b_textures_normal_png_begin;
extern const char* const f_2e6b_textures_normal_png_end;
// Pointers to resources/textures/rough.png
extern const char* const f_137e_textures_rough_png_begin;
extern const char* const f_137e_textures_rough_png_end;
// Pointers to resources/textures/default_env.hdr
extern const char* const f_f1e4_textures_default_env_hdr_begin;
extern const char* const f_f1e4_textures_default_env_hdr_end;
}

namespace {

const cmrc::detail::index_type&
get_root_index() {
    static cmrc::detail::directory root_directory_;
    static cmrc::detail::file_or_directory root_directory_fod{root_directory_};
    static cmrc::detail::index_type root_index;
    root_index.emplace("", &root_directory_fod);
    struct dir_inl {
        class cmrc::detail::directory& directory;
    };
    dir_inl root_directory_dir{root_directory_};
    (void)root_directory_dir;
    static auto f_1aa3_shaders_dir = root_directory_dir.directory.add_subdir("shaders");
    root_index.emplace("shaders", &f_1aa3_shaders_dir.index_entry);
    static auto f_c5e6_textures_dir = root_directory_dir.directory.add_subdir("textures");
    root_index.emplace("textures", &f_c5e6_textures_dir.index_entry);
    root_index.emplace(
        "shaders/shaderbrdf.fs",
        f_1aa3_shaders_dir.directory.add_file(
            "shaderbrdf.fs",
            res_chars::f_d25a_shaders_shaderbrdf_fs_begin,
            res_chars::f_d25a_shaders_shaderbrdf_fs_end
        )
    );
    root_index.emplace(
        "shaders/shaderbrdf.vs",
        f_1aa3_shaders_dir.directory.add_file(
            "shaderbrdf.vs",
            res_chars::f_b433_shaders_shaderbrdf_vs_begin,
            res_chars::f_b433_shaders_shaderbrdf_vs_end
        )
    );
    root_index.emplace(
        "shaders/shadercubemap.vs",
        f_1aa3_shaders_dir.directory.add_file(
            "shadercubemap.vs",
            res_chars::f_2154_shaders_shadercubemap_vs_begin,
            res_chars::f_2154_shaders_shadercubemap_vs_end
        )
    );
    root_index.emplace(
        "shaders/shaderequirectangular.fs",
        f_1aa3_shaders_dir.directory.add_file(
            "shaderequirectangular.fs",
            res_chars::f_96f3_shaders_shaderequirectangular_fs_begin,
            res_chars::f_96f3_shaders_shaderequirectangular_fs_end
        )
    );
    root_index.emplace(
        "shaders/shaderirradiance.fs",
        f_1aa3_shaders_dir.directory.add_file(
            "shaderirradiance.fs",
            res_chars::f_763a_shaders_shaderirradiance_fs_begin,
            res_chars::f_763a_shaders_shaderirradiance_fs_end
        )
    );
    root_index.emplace(
        "shaders/shaderpbr.fs",
        f_1aa3_shaders_dir.directory.add_file(
            "shaderpbr.fs",
            res_chars::f_83bb_shaders_shaderpbr_fs_begin,
            res_chars::f_83bb_shaders_shaderpbr_fs_end
        )
    );
    root_index.emplace(
        "shaders/shaderpbr.vs",
        f_1aa3_shaders_dir.directory.add_file(
            "shaderpbr.vs",
            res_chars::f_eac9_shaders_shaderpbr_vs_begin,
            res_chars::f_eac9_shaders_shaderpbr_vs_end
        )
    );
    root_index.emplace(
        "shaders/shaderprefilter.fs",
        f_1aa3_shaders_dir.directory.add_file(
            "shaderprefilter.fs",
            res_chars::f_8e47_shaders_shaderprefilter_fs_begin,
            res_chars::f_8e47_shaders_shaderprefilter_fs_end
        )
    );
    root_index.emplace(
        "shaders/shaderscreen.fs",
        f_1aa3_shaders_dir.directory.add_file(
            "shaderscreen.fs",
            res_chars::f_f625_shaders_shaderscreen_fs_begin,
            res_chars::f_f625_shaders_shaderscreen_fs_end
        )
    );
    root_index.emplace(
        "shaders/shaderscreen.vs",
        f_1aa3_shaders_dir.directory.add_file(
            "shaderscreen.vs",
            res_chars::f_68be_shaders_shaderscreen_vs_begin,
            res_chars::f_68be_shaders_shaderscreen_vs_end
        )
    );
    root_index.emplace(
        "shaders/shadersinglecolor.fs",
        f_1aa3_shaders_dir.directory.add_file(
            "shadersinglecolor.fs",
            res_chars::f_7c9c_shaders_shadersinglecolor_fs_begin,
            res_chars::f_7c9c_shaders_shadersinglecolor_fs_end
        )
    );
    root_index.emplace(
        "shaders/shadersinglecolor.vs",
        f_1aa3_shaders_dir.directory.add_file(
            "shadersinglecolor.vs",
            res_chars::f_7c4f_shaders_shadersinglecolor_vs_begin,
            res_chars::f_7c4f_shaders_shadersinglecolor_vs_end
        )
    );
    root_index.emplace(
        "shaders/shaderskybox.fs",
        f_1aa3_shaders_dir.directory.add_file(
            "shaderskybox.fs",
            res_chars::f_6e8e_shaders_shaderskybox_fs_begin,
            res_chars::f_6e8e_shaders_shaderskybox_fs_end
        )
    );
    root_index.emplace(
        "shaders/shaderskybox.vs",
        f_1aa3_shaders_dir.directory.add_file(
            "shaderskybox.vs",
            res_chars::f_d618_shaders_shaderskybox_vs_begin,
            res_chars::f_d618_shaders_shaderskybox_vs_end
        )
    );
    root_index.emplace(
        "shaders/shaderwireframe.fs",
        f_1aa3_shaders_dir.directory.add_file(
            "shaderwireframe.fs",
            res_chars::f_fc86_shaders_shaderwireframe_fs_begin,
            res_chars::f_fc86_shaders_shaderwireframe_fs_end
        )
    );
    root_index.emplace(
        "shaders/shaderwireframe.vs",
        f_1aa3_shaders_dir.directory.add_file(
            "shaderwireframe.vs",
            res_chars::f_0e7a_shaders_shaderwireframe_vs_begin,
            res_chars::f_0e7a_shaders_shaderwireframe_vs_end
        )
    );
    root_index.emplace(
        "textures/albedo.png",
        f_c5e6_textures_dir.directory.add_file(
            "albedo.png",
            res_chars::f_145b_textures_albedo_png_begin,
            res_chars::f_145b_textures_albedo_png_end
        )
    );
    root_index.emplace(
        "textures/ao.png",
        f_c5e6_textures_dir.directory.add_file(
            "ao.png",
            res_chars::f_c7d9_textures_ao_png_begin,
            res_chars::f_c7d9_textures_ao_png_end
        )
    );
    root_index.emplace(
        "textures/height.png",
        f_c5e6_textures_dir.directory.add_file(
            "height.png",
            res_chars::f_da90_textures_height_png_begin,
            res_chars::f_da90_textures_height_png_end
        )
    );
    root_index.emplace(
        "textures/metal.png",
        f_c5e6_textures_dir.directory.add_file(
            "metal.png",
            res_chars::f_0e74_textures_metal_png_begin,
            res_chars::f_0e74_textures_metal_png_end
        )
    );
    root_index.emplace(
        "textures/normal.png",
        f_c5e6_textures_dir.directory.add_file(
            "normal.png",
            res_chars::f_2e6b_textures_normal_png_begin,
            res_chars::f_2e6b_textures_normal_png_end
        )
    );
    root_index.emplace(
        "textures/rough.png",
        f_c5e6_textures_dir.directory.add_file(
            "rough.png",
            res_chars::f_137e_textures_rough_png_begin,
            res_chars::f_137e_textures_rough_png_end
        )
    );
    root_index.emplace(
        "textures/default_env.hdr",
        f_c5e6_textures_dir.directory.add_file(
            "default_env.hdr",
            res_chars::f_f1e4_textures_default_env_hdr_begin,
            res_chars::f_f1e4_textures_default_env_hdr_end
        )
    );
    return root_index;
}

}

cmrc::embedded_filesystem get_filesystem() {
    static auto& index = get_root_index();
    return cmrc::embedded_filesystem{index};
}

} // resources
} // cmrc
    