// See LICENSE for license details.


#define DATA_SIZE 1024 

float input1_data[DATA_SIZE] = 
{
  41.59, 833.98, 564.92, 187.40, 749.75, 350.86, 132.42, 949.90, 584.06, 805.70, 621.44, 6.57, 931.73, 890.19, 392.50, 694.30, 961.50, 110.85, 116.64, 296.64, 
  426.15, 314.26, 659.38, 774.03, 319.50, 678.95, 875.15, 376.99, 474.52, 938.39, 539.64, 569.21, 203.10, 280.59, 759.17, 606.49, 511.73, 657.85, 195.14, 81.76, 
  267.13, 229.11, 337.80, 944.31, 902.33, 241.76, 913.03, 826.41, 933.10, 985.95, 195.94, 960.23, 566.85, 350.87, 649.08, 657.11, 181.07, 111.93, 859.03, 65.38, 
  288.41, 349.32, 141.62, 905.27, 886.09, 264.13, 576.69, 979.62, 761.15, 241.01, 478.77, 499.56, 403.08, 222.09, 444.00, 721.13, 676.11, 317.98, 224.02, 937.91, 
  288.16, 119.49, 615.12, 606.02, 389.63, 351.17, 455.08, 278.19, 367.94, 358.65, 584.29, 62.81, 985.38, 403.31, 346.66, 517.64, 559.24, 908.23, 775.53, 255.22, 
  778.76, 598.70, 143.67, 33.87, 125.22, 941.32, 933.58, 799.68, 553.00, 431.48, 648.92, 952.26, 287.81, 19.55, 49.85, 86.34, 95.37, 441.32, 587.26, 614.94, 
  382.15, 280.93, 808.48, 971.60, 819.34, 344.75, 450.92, 512.61, 965.23, 347.78, 808.67, 882.45, 537.55, 946.57, 701.25, 356.05, 567.96, 891.59, 22.08, 568.05, 
  665.92, 423.06, 434.34, 158.95, 2.47, 84.01, 247.70, 49.41, 435.28, 792.95, 869.12, 486.44, 414.24, 369.14, 548.71, 518.09, 888.38, 682.27, 284.83, 264.53, 
  499.48, 290.72, 897.15, 215.27, 731.10, 688.62, 251.21, 786.26, 555.77, 302.26, 528.37, 544.63, 322.31, 947.49, 287.49, 824.15, 304.91, 788.79, 733.63, 959.89, 
  366.53, 722.70, 294.29, 975.54, 653.47, 748.94, 91.37, 378.81, 105.56, 102.96, 381.89, 651.77, 825.56, 840.65, 356.91, 148.28, 54.55, 140.19, 955.46, 343.09, 
  533.74, 757.52, 521.69, 837.60, 592.30, 13.14, 173.27, 63.12, 121.08, 133.74, 758.23, 372.02, 951.71, 39.51, 129.91, 110.98, 847.87, 437.05, 255.51, 269.43, 
  409.58, 628.32, 399.16, 549.49, 753.43, 564.11, 171.44, 19.41, 727.43, 501.57, 777.90, 43.09, 753.99, 81.39, 202.47, 853.24, 153.74, 760.34, 357.21, 943.33, 
  922.66, 328.36, 496.72, 442.71, 516.93, 641.63, 276.71, 786.16, 113.96, 842.51, 907.08, 275.40, 237.13, 32.98, 784.54, 565.19, 357.36, 803.66, 819.14, 751.19, 
  280.22, 85.45, 458.79, 454.92, 710.83, 459.50, 41.90, 253.04, 377.89, 508.40, 700.13, 860.38, 480.43, 741.22, 499.72, 709.19, 49.82, 371.43, 873.84, 945.74, 
  992.29, 526.88, 721.83, 435.40, 232.94, 497.20, 697.84, 30.97, 348.62, 250.71, 350.43, 250.94, 573.58, 784.02, 749.08, 502.35, 823.63, 826.56, 170.19, 160.43, 
  674.95, 32.57, 202.49, 143.61, 853.30, 90.19, 394.67, 107.54, 855.13, 106.95, 157.48, 6.02, 765.70, 204.09, 194.97, 574.49, 218.68, 526.07, 177.51, 239.54, 
  698.98, 757.04, 706.64, 49.59, 84.46, 799.94, 893.26, 512.93, 373.43, 492.61, 14.70, 621.34, 83.22, 103.52, 794.61, 921.52, 643.16, 880.32, 834.18, 239.95, 
  462.18, 114.13, 561.17, 529.93, 10.30, 997.07, 904.66, 387.08, 407.57, 105.47, 559.17, 936.96, 512.84, 409.16, 302.62, 202.29, 427.86, 613.96, 359.16, 521.47, 
  684.36, 22.07, 185.67, 312.54, 107.15, 274.79, 387.52, 242.91, 486.42, 105.59, 698.95, 899.65, 770.03, 644.88, 80.86, 161.95, 407.27, 946.13, 30.14, 768.55, 
  870.70, 113.84, 148.93, 62.24, 147.22, 838.37, 845.09, 432.80, 141.35, 211.37, 817.36, 821.24, 562.79, 364.45, 615.83, 495.66, 812.02, 916.81, 159.62, 430.76, 
  803.39, 180.32, 544.52, 840.69, 458.36, 786.87, 872.83, 795.63, 806.35, 758.10, 104.71, 401.72, 254.16, 984.58, 136.35, 729.51, 584.46, 794.56, 414.82, 528.59, 
  707.41, 554.08, 378.44, 766.91, 977.14, 236.84, 947.69, 229.98, 165.43, 505.78, 105.10, 704.89, 796.28, 140.34, 303.80, 795.40, 635.19, 560.05, 119.19, 8.94, 
  532.12, 814.18, 37.37, 584.99, 739.88, 619.35, 767.29, 478.11, 57.63, 958.75, 784.42, 985.67, 837.44, 307.64, 67.92, 824.29, 996.62, 749.22, 171.61, 826.01, 
  621.55, 155.29, 826.10, 43.35, 694.11, 80.98, 236.29, 747.66, 744.26, 265.92, 124.29, 731.39, 941.95, 425.61, 370.26, 320.28, 269.25, 542.98, 763.36, 752.33, 
  915.79, 14.49, 1.02, 906.26, 995.56, 809.80, 560.98, 873.76, 972.51, 289.40, 509.58, 558.76, 970.08, 405.61, 579.55, 293.55, 251.18, 849.74, 129.09, 452.87, 
  716.20, 86.61, 678.77, 181.77, 240.86, 335.99, 793.87, 641.72, 1.47, 320.21, 987.27, 646.93, 754.87, 958.84, 203.62, 142.11, 180.16, 299.98, 165.92, 761.46, 
  974.39, 646.84, 559.81, 619.82, 422.99, 260.82, 565.90, 542.16, 492.49, 991.70, 745.63, 207.65, 372.46, 932.61, 664.40, 34.84, 533.95, 478.47, 908.95, 203.05, 
  33.64, 214.19, 365.78, 892.41, 781.43, 680.21, 705.21, 688.64, 947.17, 386.39, 50.40, 101.30, 474.97, 399.09, 679.01, 330.13, 952.98, 471.66, 477.47, 725.77, 
  713.76, 937.76, 529.17, 870.41, 77.99, 545.34, 907.70, 853.57, 143.68, 979.57, 239.21, 105.80, 365.64, 98.64, 54.56, 98.04, 440.05, 764.95, 315.62, 336.77, 
  697.12, 774.98, 726.37, 324.62, 282.73, 536.06, 622.47, 594.54, 890.74, 75.13, 290.61, 496.26, 726.27, 449.55, 548.04, 135.51, 644.61, 838.43, 290.24, 767.27, 
  162.90, 415.87, 491.71, 985.23, 116.70, 617.91, 859.64, 235.61, 282.59, 571.64, 913.20, 560.56, 194.94, 242.05, 782.79, 985.66, 728.32, 344.06, 430.86, 613.14, 
  759.90, 176.81, 309.64, 333.97, 354.41, 310.11, 699.67, 46.29, 487.22, 503.74, 100.74, 393.42, 268.61, 314.32, 75.11, 345.99, 987.79, 600.60, 908.74, 384.95, 
  92.09, 545.17, 277.13, 668.55, 351.48, 853.73, 863.11, 312.76, 100.68, 532.50, 567.78, 836.25, 370.79, 989.97, 461.42, 912.55, 182.04, 268.37, 160.27, 771.80, 
  22.69, 854.15, 644.93, 17.22, 779.43, 911.42, 855.52, 137.54, 983.70, 717.12, 565.26, 719.22, 253.48, 785.55, 154.54, 196.92, 253.81, 447.04, 899.47, 5.34, 
  325.97, 616.42, 309.07, 175.28, 159.88, 123.45, 838.83, 715.65, 550.54, 230.32, 82.39, 627.26, 324.56, 927.11, 103.12, 17.97, 966.92, 159.09, 177.28, 593.36, 
  372.91, 393.86, 599.09, 745.91, 377.05, 865.47, 591.44, 553.27, 440.27, 345.91, 593.69, 290.57, 908.14, 544.77, 377.87, 456.22, 781.05, 110.18, 495.91, 896.30, 
  806.64, 700.92, 548.12, 340.34, 29.42, 829.88, 630.52, 546.09, 613.55, 972.27, 116.31, 313.81, 904.18, 971.17, 607.11, 794.60, 169.61, 896.60, 507.27, 916.31, 
  431.26, 339.73, 147.92, 224.85, 112.36, 580.34, 834.44, 134.00, 948.54, 201.62, 488.69, 396.03, 797.99, 478.84, 769.12, 574.12, 485.10, 339.64, 721.39, 451.01, 
  821.46, 744.32, 0.32, 594.88, 277.92, 120.10, 680.48, 757.52, 555.46, 847.72, 517.32, 379.19, 505.76, 904.86, 246.20, 243.02, 394.14, 430.59, 214.70, 244.51, 
  524.70, 399.78, 172.96, 304.80, 620.47, 594.89, 535.34, 698.85, 159.58, 750.18, 809.80, 454.71, 76.00, 93.16, 167.76, 16.56, 853.29, 494.86, 324.64, 78.75, 
  52.12, 112.44, 10.83, 342.60, 730.66, 680.71, 287.57, 961.30, 92.22, 626.09, 912.54, 616.39, 860.45, 744.11, 744.54, 478.60, 615.31, 508.17, 914.51, 810.39, 
  288.65, 974.52, 129.30, 581.07, 548.96, 868.10, 981.49, 270.03, 623.03, 653.03, 626.15, 990.32, 386.70, 323.86, 472.86, 164.65, 239.77, 189.69, 865.12, 231.99, 
  356.20, 152.84, 825.88, 328.59, 390.54, 848.08, 38.56, 402.90, 616.86, 546.07, 206.41, 2.50, 783.35, 890.15, 815.17, 831.95, 665.61, 410.53, 94.20, 246.60, 
  422.12, 211.55, 675.13, 9.90, 374.19, 426.82, 64.89, 53.51, 758.63, 811.88, 500.64, 437.97, 335.95, 328.20, 237.48, 415.70, 468.47, 684.52, 565.24, 305.75, 
  449.18, 597.90, 136.86, 882.80, 383.10, 938.05, 268.60, 115.02, 908.44, 50.25, 952.61, 366.36, 397.07, 257.43, 231.61, 667.39, 35.32, 990.98, 443.25, 213.68, 
  389.05, 13.39, 621.15, 52.84, 612.70, 934.69, 953.51, 828.93, 462.31, 621.74, 812.65, 522.67, 672.37, 57.38, 313.44, 352.52, 55.66, 972.52, 753.45, 416.32, 
  879.66, 864.63, 572.40, 163.63, 721.06, 12.23, 643.51, 507.11, 968.33, 781.67, 840.17, 242.23, 630.38, 810.57, 795.03, 435.93, 885.97, 599.49, 696.83, 643.98, 
  93.08, 710.36, 785.04, 112.34, 581.66, 12.82, 923.01, 615.98, 652.77, 359.69, 261.90, 233.64, 609.49, 686.46, 539.88, 118.11, 560.80, 739.29, 20.45, 317.91, 
  976.37, 573.39, 386.70, 772.54, 663.59, 504.89, 212.06, 888.98, 907.19, 420.67, 737.06, 516.55, 25.06, 219.92, 798.00, 716.93, 452.20, 692.03, 683.97, 459.81, 
  815.55, 323.78, 612.76, 247.55, 116.16, 352.60, 281.43, 738.83, 290.13, 909.66, 645.24, 625.86, 932.73, 220.19, 685.31, 373.01, 876.04, 646.60, 412.10, 955.61, 
  664.07, 850.22, 783.40, 392.65, 707.73, 422.19, 523.39, 682.29, 37.63, 156.05, 43.20, 767.99, 124.71, 549.18, 814.54, 251.25, 214.66, 212.34, 572.71, 898.81, 
  956.34, 608.88, 651.21, 434.82
};

float input2_data[DATA_SIZE] = 
{
  454.04, 335.65, 1.77, 989.44, 365.91, 572.77, 64.10, 153.41, 216.37, 140.33, 210.68, 572.73, 339.99, 593.28, 898.42, 228.37, 12.04, 883.21, 750.17, 646.05, 
  500.44, 436.35, 701.84, 812.45, 981.34, 150.82, 696.06, 564.27, 272.22, 258.80, 647.13, 509.06, 88.49, 703.96, 669.95, 375.24, 551.64, 936.95, 592.64, 569.16, 
  952.14, 800.96, 584.36, 643.10, 368.06, 489.01, 328.85, 313.03, 592.75, 388.47, 543.97, 649.72, 979.53, 997.36, 814.30, 79.21, 208.54, 998.28, 629.87, 847.38, 
  704.44, 997.07, 253.56, 715.50, 430.09, 415.56, 538.54, 700.34, 4.53, 494.85, 100.03, 864.77, 693.83, 416.61, 296.87, 285.92, 620.97, 78.51, 351.59, 540.87, 
  646.76, 169.92, 527.62, 289.32, 796.30, 801.60, 720.50, 758.92, 745.48, 92.20, 989.02, 271.26, 853.35, 788.60, 531.96, 222.70, 461.08, 241.60, 358.39, 332.17, 
  684.58, 740.02, 446.29, 311.97, 743.59, 557.40, 479.07, 557.42, 925.39, 796.31, 357.74, 891.05, 666.07, 514.82, 557.92, 870.02, 853.32, 440.22, 61.13, 678.78, 
  396.53, 9.60, 17.28, 170.59, 291.21, 380.26, 536.10, 185.83, 917.13, 539.78, 983.16, 887.64, 54.78, 612.25, 951.51, 479.91, 151.50, 7.63, 641.97, 335.43, 
  730.12, 95.14, 728.36, 280.47, 395.18, 688.69, 911.04, 476.88, 815.06, 729.61, 265.14, 127.81, 236.25, 214.41, 180.89, 6.46, 503.57, 596.12, 173.66, 643.66, 
  346.93, 599.78, 68.90, 849.86, 658.43, 619.45, 121.67, 131.85, 828.62, 667.11, 433.76, 487.96, 753.88, 125.79, 626.75, 14.42, 10.59, 403.62, 106.00, 703.45, 
  818.16, 964.09, 406.41, 874.40, 856.38, 86.58, 60.48, 660.95, 667.96, 153.07, 121.32, 98.11, 412.62, 236.34, 12.41, 423.64, 965.21, 216.22, 621.17, 361.66, 
  921.78, 715.22, 647.63, 299.72, 886.82, 682.62, 36.45, 493.97, 551.05, 537.23, 969.91, 643.13, 434.31, 415.39, 303.19, 438.67, 860.46, 203.12, 478.66, 988.42, 
  675.20, 719.24, 990.64, 338.47, 450.81, 633.17, 155.33, 646.75, 452.99, 427.23, 509.17, 988.99, 426.10, 12.74, 483.26, 142.23, 339.79, 390.81, 50.95, 171.16, 
  601.54, 105.47, 968.89, 121.26, 879.98, 81.89, 870.32, 600.55, 603.29, 871.73, 887.50, 610.56, 404.65, 234.16, 745.69, 526.44, 275.51, 441.57, 226.96, 752.86, 
  943.47, 726.29, 709.63, 201.25, 54.32, 758.41, 53.13, 397.79, 41.32, 141.48, 416.24, 747.81, 219.98, 478.11, 770.83, 180.06, 482.88, 691.56, 725.10, 173.62, 
  186.07, 914.28, 1.64, 963.17, 248.00, 464.70, 362.43, 521.93, 233.68, 120.84, 40.89, 779.34, 195.43, 161.24, 743.15, 439.32, 355.84, 403.26, 141.52, 633.14, 
  289.43, 782.40, 320.03, 636.26, 118.73, 852.98, 70.84, 816.16, 388.16, 954.73, 36.04, 16.68, 698.34, 695.97, 677.21, 598.79, 883.95, 824.68, 746.81, 462.54, 
  511.64, 534.37, 440.30, 428.71, 732.86, 726.51, 702.51, 547.02, 86.52, 798.67, 215.32, 21.88, 651.12, 59.56, 429.73, 657.72, 96.84, 973.02, 659.46, 966.03, 
  524.36, 62.55, 625.28, 303.09, 714.64, 409.32, 55.49, 728.91, 305.61, 436.34, 901.67, 592.86, 691.16, 796.54, 497.10, 177.90, 940.76, 995.51, 480.97, 158.27, 
  822.18, 611.21, 680.54, 14.69, 111.64, 797.48, 185.26, 0.42, 718.99, 96.96, 749.66, 739.06, 814.08, 435.19, 326.74, 37.87, 33.93, 605.81, 935.30, 27.08, 
  88.64, 441.48, 339.35, 344.49, 554.29, 365.36, 954.73, 639.24, 396.74, 991.69, 249.37, 338.14, 832.96, 974.16, 393.61, 266.20, 470.51, 348.21, 336.49, 419.51, 
  249.26, 215.93, 542.52, 903.45, 636.50, 729.85, 581.11, 820.51, 671.78, 979.39, 418.16, 670.72, 920.09, 568.34, 745.07, 662.81, 139.00, 385.86, 927.79, 173.18, 
  457.31, 316.41, 183.92, 477.45, 196.33, 399.89, 416.39, 805.73, 996.26, 270.14, 735.50, 696.71, 825.63, 528.63, 50.72, 623.80, 537.51, 87.46, 294.50, 867.57, 
  110.26, 398.60, 781.21, 646.64, 375.13, 943.34, 897.04, 589.48, 44.54, 288.17, 845.33, 742.83, 99.00, 522.57, 443.74, 432.33, 165.91, 930.88, 28.94, 461.66, 
  323.98, 272.51, 376.62, 340.73, 898.14, 158.37, 168.75, 443.51, 193.73, 631.20, 935.89, 274.02, 781.65, 185.57, 619.86, 292.35, 933.33, 156.41, 827.37, 88.76, 
  987.54, 629.48, 649.02, 32.15, 1.18, 744.89, 399.21, 915.37, 791.96, 554.59, 984.10, 530.66, 600.58, 401.77, 683.13, 540.36, 903.94, 120.85, 995.87, 521.86, 
  622.16, 224.65, 895.32, 530.33, 820.81, 651.71, 226.16, 96.13, 262.91, 569.20, 238.65, 126.49, 610.86, 191.60, 238.92, 796.97, 884.59, 573.09, 108.00, 140.59, 
  789.76, 852.96, 23.71, 704.58, 890.76, 480.51, 52.78, 372.43, 201.01, 546.61, 408.85, 119.89, 645.63, 464.84, 81.80, 293.26, 52.40, 880.11, 224.02, 744.84, 
  735.53, 886.00, 167.35, 1.88, 532.19, 321.39, 169.10, 485.71, 101.72, 177.67, 42.92, 708.17, 654.57, 915.79, 625.69, 242.14, 822.84, 795.34, 641.04, 252.42, 
  245.63, 151.34, 876.43, 333.05, 601.06, 938.92, 775.05, 397.50, 233.79, 755.78, 454.06, 424.44, 210.01, 962.37, 900.93, 923.02, 655.46, 529.87, 595.01, 90.89, 
  464.89, 685.58, 70.44, 754.90, 32.51, 494.81, 25.80, 389.38, 488.21, 37.40, 409.08, 639.86, 27.63, 950.87, 539.51, 80.51, 303.34, 723.69, 734.88, 125.98, 
  552.69, 248.59, 107.29, 362.31, 48.68, 869.57, 144.74, 841.18, 724.89, 335.10, 470.53, 263.38, 343.02, 809.49, 677.01, 339.36, 336.03, 410.43, 465.15, 56.81, 
  590.66, 485.63, 406.57, 993.51, 746.33, 238.91, 525.16, 336.30, 256.11, 134.76, 546.41, 722.96, 367.62, 943.94, 106.51, 629.33, 396.50, 208.74, 429.60, 523.82, 
  130.87, 355.83, 990.83, 673.36, 991.28, 719.97, 449.14, 84.94, 616.26, 211.40, 707.51, 737.36, 847.35, 452.81, 316.11, 974.19, 746.34, 796.57, 522.31, 618.19, 
  115.11, 727.59, 226.00, 165.86, 200.08, 830.23, 742.47, 187.65, 705.02, 671.77, 785.22, 886.33, 962.57, 657.86, 293.97, 620.08, 144.34, 173.29, 796.21, 72.50, 
  678.01, 80.06, 793.33, 685.03, 637.56, 967.37, 241.53, 898.52, 693.00, 372.64, 601.23, 721.30, 398.50, 553.18, 72.92, 174.85, 978.42, 325.01, 558.77, 185.25, 
  505.93, 860.00, 651.31, 573.60, 321.32, 349.19, 400.24, 890.35, 844.52, 885.04, 933.02, 980.84, 448.61, 989.45, 50.53, 332.36, 900.28, 716.93, 747.86, 444.23, 
  6.62, 394.55, 285.73, 703.44, 450.70, 652.55, 771.82, 485.17, 534.56, 559.01, 481.51, 507.24, 434.52, 343.63, 42.42, 784.26, 865.65, 421.89, 415.22, 871.79, 
  539.58, 162.47, 105.09, 481.92, 595.44, 115.11, 350.01, 964.58, 287.38, 232.55, 154.11, 602.37, 539.48, 943.16, 872.17, 121.26, 652.20, 811.95, 747.88, 362.25, 
  340.41, 910.73, 206.71, 572.95, 505.78, 973.87, 961.61, 354.74, 627.25, 849.72, 971.69, 910.80, 410.29, 770.61, 63.75, 874.84, 396.21, 482.65, 619.93, 646.52, 
  557.70, 328.81, 67.74, 884.16, 512.52, 972.25, 6.13, 513.12, 882.90, 562.88, 764.78, 366.50, 506.01, 786.96, 831.46, 382.69, 638.33, 452.86, 72.80, 83.99, 
  59.48, 932.56, 929.17, 924.31, 961.79, 69.09, 797.94, 985.49, 854.03, 885.08, 600.77, 389.36, 232.77, 793.58, 179.91, 773.67, 689.88, 775.80, 494.89, 139.65, 
  234.41, 431.79, 780.34, 371.94, 22.47, 653.95, 741.81, 815.30, 429.00, 139.33, 603.92, 315.04, 344.80, 889.48, 317.27, 260.28, 861.63, 377.78, 511.76, 304.06, 
  70.19, 35.87, 854.09, 576.98, 490.35, 326.55, 303.50, 431.21, 813.10, 708.96, 388.67, 962.18, 967.95, 442.52, 49.02, 831.49, 251.65, 321.36, 741.45, 179.51, 
  176.27, 117.00, 523.73, 764.26, 952.82, 704.67, 531.80, 804.94, 23.61, 611.10, 846.79, 375.26, 854.69, 971.77, 24.05, 639.17, 318.66, 723.53, 662.84, 647.47, 
  281.11, 158.85, 294.58, 885.85, 734.06, 866.60, 471.06, 296.09, 673.55, 472.93, 439.09, 5.93, 155.39, 506.79, 948.50, 600.40, 445.21, 222.05, 784.59, 349.77, 
  943.37, 150.14, 366.16, 444.22, 604.60, 720.40, 340.70, 972.58, 911.45, 321.49, 435.22, 50.43, 78.96, 761.04, 950.33, 238.41, 27.06, 226.17, 201.43, 176.53, 
  877.51, 450.94, 879.63, 99.89, 143.28, 31.66, 812.36, 771.31, 527.29, 488.63, 797.10, 194.25, 293.72, 966.52, 276.35, 345.26, 413.02, 197.52, 386.04, 116.36, 
  322.72, 680.35, 538.15, 554.00, 960.31, 874.79, 48.72, 506.93, 898.24, 539.71, 495.50, 764.01, 805.12, 286.44, 432.09, 836.98, 192.15, 825.36, 778.42, 586.55, 
  359.37, 352.70, 746.78, 11.34, 749.69, 5.98, 408.76, 643.32, 441.94, 368.15, 97.74, 169.62, 359.25, 527.49, 672.31, 69.39, 880.66, 298.11, 300.84, 327.09, 
  923.83, 829.55, 816.51, 497.50, 243.91, 981.12, 917.21, 713.38, 653.91, 503.75, 406.65, 543.57, 108.87, 304.66, 464.10, 954.74, 86.37, 802.71, 446.02, 28.16, 
  539.76, 655.37, 28.71, 470.59, 735.85, 941.08, 610.37, 451.33, 672.34, 237.47, 766.04, 713.35, 409.69, 869.06, 186.75, 475.83, 568.73, 44.08, 997.88, 139.85, 
  456.29, 470.05, 566.52, 408.79
};

float verify_data[DATA_SIZE] = 
{
  495.63, 1169.63, 566.69, 1176.85, 1115.65, 923.63, 196.52, 1103.31, 800.44, 946.03, 832.12, 579.30, 1271.72, 1483.47, 1290.93, 922.67, 973.54, 994.06, 866.81, 942.68, 
  926.59, 750.61, 1361.22, 1586.49, 1300.84, 829.78, 1571.21, 941.26, 746.74, 1197.19, 1186.78, 1078.26, 291.58, 984.55, 1429.12, 981.74, 1063.38, 1594.80, 787.78, 650.92, 
  1219.28, 1030.07, 922.15, 1587.41, 1270.39, 730.77, 1241.89, 1139.44, 1525.85, 1374.42, 739.91, 1609.95, 1546.39, 1348.24, 1463.38, 736.32, 389.61, 1110.21, 1488.91, 912.76, 
  992.84, 1346.40, 395.18, 1620.78, 1316.18, 679.69, 1115.23, 1679.96, 765.68, 735.85, 578.79, 1364.33, 1096.91, 638.70, 740.87, 1007.04, 1297.08, 396.49, 575.61, 1478.78, 
  934.92, 289.41, 1142.74, 895.34, 1185.93, 1152.77, 1175.57, 1037.12, 1113.42, 450.84, 1573.31, 334.07, 1838.73, 1191.90, 878.61, 740.34, 1020.32, 1149.83, 1133.92, 587.39, 
  1463.34, 1338.72, 589.95, 345.84, 868.80, 1498.73, 1412.65, 1357.10, 1478.39, 1227.79, 1006.65, 1843.31, 953.88, 534.37, 607.77, 956.35, 948.69, 881.54, 648.39, 1293.73, 
  778.68, 290.54, 825.76, 1142.18, 1110.55, 725.01, 987.02, 698.44, 1882.36, 887.56, 1791.84, 1770.09, 592.34, 1558.82, 1652.77, 835.96, 719.46, 899.23, 664.05, 903.48, 
  1396.04, 518.20, 1162.70, 439.42, 397.65, 772.71, 1158.74, 526.29, 1250.34, 1522.57, 1134.26, 614.25, 650.49, 583.54, 729.60, 524.55, 1391.95, 1278.39, 458.49, 908.20, 
  846.41, 890.50, 966.06, 1065.12, 1389.53, 1308.07, 372.88, 918.11, 1384.40, 969.38, 962.13, 1032.60, 1076.19, 1073.28, 914.24, 838.56, 315.50, 1192.41, 839.63, 1663.34, 
  1184.70, 1686.79, 700.69, 1849.94, 1509.85, 835.52, 151.84, 1039.76, 773.51, 256.03, 503.21, 749.88, 1238.18, 1076.99, 369.33, 571.92, 1019.76, 356.41, 1576.64, 704.75, 
  1455.51, 1472.74, 1169.31, 1137.32, 1479.12, 695.76, 209.72, 557.09, 672.13, 670.97, 1728.14, 1015.15, 1386.02, 454.90, 433.10, 549.65, 1708.33, 640.17, 734.17, 1257.85, 
  1084.79, 1347.56, 1389.80, 887.96, 1204.24, 1197.28, 326.78, 666.15, 1180.43, 928.80, 1287.07, 1032.07, 1180.09, 94.13, 685.73, 995.48, 493.52, 1151.15, 408.17, 1114.49, 
  1524.20, 433.83, 1465.62, 563.97, 1396.91, 723.51, 1147.02, 1386.71, 717.25, 1714.24, 1794.58, 885.95, 641.78, 267.14, 1530.24, 1091.63, 632.86, 1245.24, 1046.10, 1504.05, 
  1223.69, 811.73, 1168.43, 656.17, 765.15, 1217.91, 95.02, 650.84, 419.21, 649.88, 1116.37, 1608.19, 700.41, 1219.33, 1270.55, 889.25, 532.70, 1062.99, 1598.94, 1119.37, 
  1178.37, 1441.16, 723.46, 1398.57, 480.94, 961.90, 1060.27, 552.90, 582.30, 371.55, 391.32, 1030.28, 769.01, 945.25, 1492.23, 941.67, 1179.47, 1229.81, 311.71, 793.56, 
  964.38, 814.96, 522.52, 779.87, 972.03, 943.17, 465.51, 923.71, 1243.30, 1061.68, 193.53, 22.70, 1464.04, 900.06, 872.18, 1173.28, 1102.63, 1350.75, 924.32, 702.08, 
  1210.63, 1291.41, 1146.94, 478.30, 817.32, 1526.45, 1595.77, 1059.94, 459.94, 1291.29, 230.02, 643.22, 734.35, 163.08, 1224.35, 1579.24, 739.99, 1853.34, 1493.65, 1205.98, 
  986.54, 176.68, 1186.45, 833.02, 724.94, 1406.38, 960.15, 1115.99, 713.18, 541.81, 1460.84, 1529.83, 1204.00, 1205.70, 799.72, 380.19, 1368.62, 1609.47, 840.13, 679.74, 
  1506.54, 633.28, 866.21, 327.23, 218.80, 1072.27, 572.78, 243.33, 1205.41, 202.56, 1448.61, 1638.72, 1584.11, 1080.07, 407.61, 199.82, 441.20, 1551.94, 965.44, 795.64, 
  959.34, 555.31, 488.27, 406.73, 701.51, 1203.74, 1799.83, 1072.04, 538.08, 1203.05, 1066.74, 1159.37, 1395.75, 1338.61, 1009.44, 761.86, 1282.53, 1265.02, 496.10, 850.27, 
  1052.65, 396.25, 1087.04, 1744.14, 1094.86, 1516.72, 1453.94, 1616.13, 1478.13, 1737.48, 522.87, 1072.44, 1174.25, 1552.93, 881.42, 1392.32, 723.46, 1180.41, 1342.61, 701.77, 
  1164.72, 870.50, 562.36, 1244.36, 1173.48, 636.73, 1364.08, 1035.71, 1161.69, 775.92, 840.61, 1401.61, 1621.91, 668.97, 354.52, 1419.21, 1172.70, 647.51, 413.69, 876.51, 
  642.38, 1212.78, 818.58, 1231.63, 1115.00, 1562.69, 1664.33, 1067.59, 102.18, 1246.92, 1629.75, 1728.50, 936.44, 830.21, 511.66, 1256.62, 1162.52, 1680.10, 200.55, 1287.67, 
  945.54, 427.81, 1202.72, 384.08, 1592.24, 239.35, 405.04, 1191.17, 937.99, 897.12, 1060.18, 1005.41, 1723.60, 611.18, 990.11, 612.63, 1202.58, 699.39, 1590.74, 841.09, 
  1903.33, 643.97, 650.04, 938.41, 996.74, 1554.70, 960.19, 1789.12, 1764.47, 843.99, 1493.67, 1089.42, 1570.66, 807.37, 1262.68, 833.91, 1155.12, 970.59, 1124.96, 974.72, 
  1338.35, 311.26, 1574.08, 712.10, 1061.67, 987.70, 1020.03, 737.85, 264.38, 889.41, 1225.92, 773.42, 1365.73, 1150.43, 442.54, 939.08, 1064.75, 873.07, 273.93, 902.05, 
  1764.15, 1499.80, 583.52, 1324.39, 1313.75, 741.33, 618.68, 914.59, 693.50, 1538.31, 1154.48, 327.54, 1018.09, 1397.45, 746.21, 328.09, 586.35, 1358.57, 1132.98, 947.89, 
  769.17, 1100.19, 533.13, 894.29, 1313.62, 1001.59, 874.31, 1174.35, 1048.89, 564.06, 93.33, 809.48, 1129.55, 1314.88, 1304.70, 572.27, 1775.82, 1267.01, 1118.51, 978.19, 
  959.40, 1089.10, 1405.59, 1203.46, 679.05, 1484.27, 1682.75, 1251.06, 377.47, 1735.35, 693.27, 530.23, 575.65, 1061.01, 955.49, 1021.06, 1095.51, 1294.81, 910.64, 427.66, 
  1162.01, 1460.55, 796.81, 1079.52, 315.24, 1030.87, 648.27, 983.92, 1378.95, 112.53, 699.70, 1136.13, 753.89, 1400.42, 1087.55, 216.02, 947.95, 1562.12, 1025.12, 893.25, 
  715.59, 664.46, 599.00, 1347.54, 165.38, 1487.48, 1004.37, 1076.79, 1007.48, 906.74, 1383.74, 823.94, 537.97, 1051.54, 1459.79, 1325.02, 1064.35, 754.49, 896.01, 669.95, 
  1350.57, 662.43, 716.21, 1327.48, 1100.74, 549.02, 1224.82, 382.59, 743.32, 638.50, 647.15, 1116.38, 636.23, 1258.26, 181.62, 975.32, 1384.29, 809.34, 1338.34, 908.77, 
  222.96, 901.00, 1267.96, 1341.91, 1342.76, 1573.69, 1312.25, 397.71, 716.94, 743.90, 1275.29, 1573.61, 1218.13, 1442.78, 777.53, 1886.74, 928.38, 1064.95, 682.57, 1389.99, 
  137.80, 1581.75, 870.93, 183.08, 979.51, 1741.65, 1598.00, 325.19, 1688.71, 1388.89, 1350.48, 1605.55, 1216.06, 1443.41, 448.51, 816.99, 398.15, 620.33, 1695.69, 77.84, 
  1003.98, 696.49, 1102.40, 860.31, 797.44, 1090.82, 1080.36, 1614.18, 1243.54, 602.96, 683.61, 1348.56, 723.06, 1480.29, 176.04, 192.82, 1945.34, 484.10, 736.05, 778.60, 
  878.83, 1253.86, 1250.40, 1319.50, 698.36, 1214.66, 991.67, 1443.62, 1284.79, 1230.94, 1526.71, 1271.40, 1356.76, 1534.22, 428.41, 788.58, 1681.33, 827.11, 1243.77, 1340.54, 
  813.27, 1095.47, 833.86, 1043.78, 480.13, 1482.43, 1402.35, 1031.26, 1148.11, 1531.28, 597.82, 821.05, 1338.69, 1314.80, 649.53, 1578.87, 1035.26, 1318.49, 922.49, 1788.10, 
  970.84, 502.20, 253.02, 706.77, 707.80, 695.45, 1184.45, 1098.58, 1235.92, 434.17, 642.81, 998.40, 1337.46, 1422.00, 1641.30, 695.39, 1137.30, 1151.58, 1469.27, 813.26, 
  1161.87, 1655.05, 207.04, 1167.83, 783.70, 1093.98, 1642.08, 1112.26, 1182.71, 1697.44, 1489.02, 1289.98, 916.05, 1675.47, 309.95, 1117.86, 790.35, 913.24, 834.63, 891.03, 
  1082.40, 728.59, 240.69, 1188.95, 1132.99, 1567.14, 541.47, 1211.96, 1042.48, 1313.06, 1574.58, 821.21, 582.01, 880.12, 999.23, 399.25, 1491.61, 947.72, 397.45, 162.75, 
  111.60, 1045.00, 940.01, 1266.90, 1692.45, 749.80, 1085.51, 1946.78, 946.25, 1511.17, 1513.31, 1005.75, 1093.23, 1537.69, 924.45, 1252.27, 1305.19, 1283.97, 1409.40, 950.03, 
  523.06, 1406.31, 909.64, 953.01, 571.43, 1522.05, 1723.30, 1085.33, 1052.03, 792.36, 1230.06, 1305.36, 731.50, 1213.35, 790.13, 424.94, 1101.40, 567.48, 1376.87, 536.06, 
  426.39, 188.71, 1679.97, 905.57, 880.88, 1174.62, 342.05, 834.11, 1429.95, 1255.03, 595.08, 964.68, 1751.30, 1332.67, 864.20, 1663.44, 917.26, 731.89, 835.65, 426.11, 
  598.39, 328.55, 1198.86, 774.17, 1327.00, 1131.50, 596.69, 858.45, 782.24, 1422.98, 1347.43, 813.23, 1190.64, 1299.97, 261.53, 1054.87, 787.13, 1408.05, 1228.08, 953.22, 
  730.28, 756.75, 431.44, 1768.64, 1117.16, 1804.65, 739.66, 411.11, 1581.98, 523.18, 1391.70, 372.29, 552.46, 764.22, 1180.11, 1267.78, 480.53, 1213.03, 1227.84, 563.46, 
  1332.42, 163.53, 987.30, 497.06, 1217.30, 1655.09, 1294.21, 1801.51, 1373.76, 943.23, 1247.88, 573.11, 751.33, 818.42, 1263.77, 590.93, 82.72, 1198.69, 954.88, 592.85, 
  1757.16, 1315.57, 1452.03, 263.52, 864.34, 43.90, 1455.87, 1278.42, 1495.61, 1270.29, 1637.27, 436.48, 924.10, 1777.09, 1071.38, 781.19, 1298.99, 797.01, 1082.87, 760.34, 
  415.80, 1390.71, 1323.19, 666.33, 1541.97, 887.62, 971.73, 1122.91, 1551.00, 899.40, 757.40, 997.65, 1414.61, 972.90, 971.97, 955.10, 752.96, 1564.64, 798.87, 904.46, 
  1335.73, 926.08, 1133.48, 783.88, 1413.28, 510.87, 620.83, 1532.29, 1349.13, 788.82, 834.80, 686.17, 384.31, 747.41, 1470.31, 786.32, 1332.86, 990.15, 984.81, 786.91, 
  1739.38, 1153.33, 1429.27, 745.05, 360.07, 1333.72, 1198.64, 1452.21, 944.04, 1413.41, 1051.90, 1169.43, 1041.60, 524.85, 1149.41, 1327.75, 962.41, 1449.32, 858.12, 983.77, 
  1203.83, 1505.59, 812.11, 863.24, 1443.57, 1363.27, 1133.76, 1133.62, 709.97, 393.53, 809.24, 1481.34, 534.41, 1418.23, 1001.29, 727.08, 783.39, 256.43, 1570.59, 1038.65, 
  1412.63, 1078.93, 1217.72, 843.61
};

