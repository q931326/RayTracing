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

![YV@26~9_W(SC_AE)RSEN5HE](https://github.com/q931326/RayTracing/assets/124950885/23408de3-9503-4c19-9959-156631b61549)

由于前面图像比较简单，在《RayTracing in One Weekend》中能直接用现有代码并且我没有保存之前的代码，所以就略过了（O.0）

第二部分：
RayTracing the next Week
一些过程中的图片：

1.
![FH66HTO$W%ATP81%ATPE5{P](https://github.com/q931326/RayTracing/assets/124950885/4b96687a-bf73-4ff2-b145-da44d168fb5b)

2.
![AK_G@D9M~ {QTUC( 6NE$_0](https://github.com/q931326/RayTracing/assets/124950885/a6edb370-16d9-43d6-9935-710ee629b970)

3.![%AAK8}%FG~F1UYWA0ZY)3XQ](https://github.com/q931326/RayTracing/assets/124950885/964826fc-6150-4e7a-bacc-10d91cc7372c)

4.
![8 _E(9) CE~FVM@PNFY7){K](https://github.com/q931326/RayTracing/assets/124950885/29ba8f56-61b0-4b61-b7a7-76a2b5b6aad8)

5.
![YG{_`2`R~RN$44V KG @W6](https://github.com/q931326/RayTracing/assets/124950885/d27f89e1-29f5-4567-bfb1-9043b123f6ff)

6.
![T7Q(O05B 7 QPZC2YM2@MDU](https://github.com/q931326/RayTracing/assets/124950885/782c03f2-902f-4711-aeea-8296aa576d34)

7.
![(HR6BGFSLOLSZ%21{0AY}N9](https://github.com/q931326/RayTracing/assets/124950885/ec7a76fa-26e0-4874-8b15-92253b803ca8)

8.
![2L~E$3JOLIS8X1A19{ 9$CM](https://github.com/q931326/RayTracing/assets/124950885/9f1022f1-7829-482d-8c94-57cc19eb4250)

9.
![T91N5TU@AAVV L)D} 6H`{X](https://github.com/q931326/RayTracing/assets/124950885/c4bf685d-9b93-4c46-add8-b025a4be7efa)

10.
![ZKL NZWRJ2GM `GS2X590PY](https://github.com/q931326/RayTracing/assets/124950885/b46cd137-81f5-4508-a3ee-cb40e6e60623)

11.
![O~9`}~BQ9JMSG8HVV~E~IVW](https://github.com/q931326/RayTracing/assets/124950885/95394583-3d27-404e-9ba2-a3ad7c2437e4)

12.
![ARNCFQ37}VE`SSD}KFLJ{50](https://github.com/q931326/RayTracing/assets/124950885/a177f547-44df-45ba-abd7-c8553fc820a7)

13.
![R6XL(9`KZ${}%55IQ4%Y V5](https://github.com/q931326/RayTracing/assets/124950885/8c50387f-ebdd-4d64-a0a3-c7863c4f2fbd)
14.
![7RWW5~@6@J574{@_V_@MXNU](https://github.com/q931326/RayTracing/assets/124950885/5da1004c-cdae-4a5f-bcb9-ba60e71e144d)
15.
![7LLE2)ZLTNHD{0PB~IT$X)H](https://github.com/q931326/RayTracing/assets/124950885/d59f392d-8d3d-4d4f-b41a-59bb1256f18b)
