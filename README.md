# RayTracing
Environment : VS2022,Win10
在VS中需要设置重定向(调试->默认参数)为 >image.ppm
PPM图像格式是由Jef Poskanzer 在1991年所创造的。
PPM（Portable Pixmap Format）还有两位兄长，大哥名叫「PBM」，二哥人称「PGM」，他们三兄弟各有所长，下面为你们一一介绍：
PBM 是位图（bitmap），仅有黑与白，没有灰
PGM 是灰度图（grayscale）
PPM 是通过RGB三种颜色显现的图像（pixmaps）

测试用例：
#include <iostream>  
int main() {
    // Image  
    int image_width = 256;
    int image_height = 256;

    // Write PPM header to the file  
    outputFile << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j < image_height; j++) {
        std::cerr << "\rScanlines remaining: " << j << ' ' << std::flush;
        for (int i = 0; i < image_width; i++) {
            auto r = double(i) / (image_width - 1);
            auto g = double(j) / (image_height - 1);
            auto b = 0;
            int ir = static_cast<int>(255.99 * r);
            int ig = static_cast<int>(255.99 * g);
            int ib = static_cast<int>(255.99 * b);
        }
    }

    std::cerr << "\nDone.\n";
    return 0;
}
运行完毕后，可以看见在所在文件夹中生成image.ppm图像文件，在你的控制台你可以看见二进制文本。
下面是一些在学习RayTracing in One Weekend过程中生成的图片：
1.测试用例图片：

![BC{$KQ(7LST0`L5)6@)DACN](https://github.com/q931326/RayTracing/assets/124950885/b7a2517f-6487-4396-9c0a-ba491c1167d3)

2.
![P%X9B}A $~1XF@L9OU2R$R](https://github.com/q931326/RayTracing/assets/124950885/de2b7051-62a1-49a1-bc41-c5b9279bb53c)

3.
![T48(T6VYYCI Y(_`6Q9GRFJ](https://github.com/q931326/RayTracing/assets/124950885/60d5cca1-d635-4a11-b388-28bfa77382ab)

4.
![_15IZKJ3 2Q(YT94)1H9YO](https://github.com/q931326/RayTracing/assets/124950885/f21a8b3c-547b-4152-89c7-17e08225920e)

5.
![5LN300$9YV2GRG$KMOO25IN](https://github.com/q931326/RayTracing/assets/124950885/889b90a4-c22c-44ca-96e9-6100ba2d923d)

6.
![J$`4}DEBZZGS((TGI`O@R)W](https://github.com/q931326/RayTracing/assets/124950885/a9fb7cee-76b6-4846-b557-72e9a6cc03ce)

7.
![AAC0Z8( I$XOD~ 06U~_XF](https://github.com/q931326/RayTracing/assets/124950885/1ce530f4-3715-4418-9d8c-145870ad7e45)

8.最终图像（RayTracing in One Weekend）
![XL$2J{DI@9 UX5}04YVD`H0](https://github.com/q931326/RayTracing/assets/124950885/c48e30e4-1e89-4986-bff3-6ac88edabb56)
由于前面图像比较简单，在《RayTracing in One Weekend》中能直接用现有代码并且我没有保存之前的代码，所以就略过了（O.0）
