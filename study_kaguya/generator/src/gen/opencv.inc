// File generated automatically, do not modify 
namespace gen_wrap_cv{
identity<uchar (*)(uchar)>::type abs0 = &cv::abs;
identity<ushort (*)(ushort)>::type abs1 = &cv::abs;
identity<unsigned int (*)(unsigned int)>::type abs2 = &cv::abs;
identity<uint64 (*)(uint64)>::type abs3 = &cv::abs;
identity<MatExpr (*)(const Mat &)>::type abs4 = &cv::abs;
identity<MatExpr (*)(const MatExpr &)>::type abs5 = &cv::abs;
auto abs = kaguya::overload(abs0,abs1,abs2,abs3,abs4,abs5);
identity<void * (*)(size_t)>::type fastMalloc = &cv::fastMalloc;
identity<void (*)(void *)>::type fastFree = &cv::fastFree;
identity<std::string (*)(const std::string &)>::type toLowerCase = &cv::toLowerCase;
identity<std::string (*)(const std::string &)>::type toUpperCase = &cv::toUpperCase;
identity<void (*)(int,const String &,const char *,const char *,int)>::type error0 = &cv::error;
identity<void (*)(const Exception &)>::type error1 = &cv::error;
auto error = kaguya::overload(error0,error1);
identity<int (*)(uchar)>::type cv_abs0 = &cv::cv_abs;
identity<int (*)(schar)>::type cv_abs1 = &cv::cv_abs;
identity<int (*)(ushort)>::type cv_abs2 = &cv::cv_abs;
identity<int (*)(short)>::type cv_abs3 = &cv::cv_abs;
auto cv_abs = kaguya::overload(cv_abs0,cv_abs1,cv_abs2,cv_abs3);
identity<float (*)(const float *,const float *,int)>::type normL2Sqr = &cv::normL2Sqr;
identity<float (*)(const float *,const float *,int)>::type normL10 = &cv::normL1;
identity<int (*)(const uchar *,const uchar *,int)>::type normL11 = &cv::normL1;
auto normL1 = kaguya::overload(normL10,normL11);
identity<float (*)(float)>::type cubeRoot0 = &cv::cubeRoot;
identity<double (*)(double)>::type cubeRoot1 = &cv::cubeRoot;
auto cubeRoot = kaguya::overload(cubeRoot0,cubeRoot1);
identity<float (*)(float,float)>::type fastAtan2 = &cv::fastAtan2;
identity<int (*)(float *,size_t,int,float *,size_t,int)>::type LU0 = &cv::LU;
identity<int (*)(double *,size_t,int,double *,size_t,int)>::type LU1 = &cv::LU;
auto LU = kaguya::overload(LU0,LU1);
identity<bool (*)(float *,size_t,int,float *,size_t,int)>::type Cholesky0 = &cv::Cholesky;
identity<bool (*)(double *,size_t,int,double *,size_t,int)>::type Cholesky1 = &cv::Cholesky;
auto Cholesky = kaguya::overload(Cholesky0,Cholesky1);
identity<const char * (*)(int)>::type depthToString = &cv::depthToString;
identity<const String (*)(int)>::type typeToString = &cv::typeToString;
identity<InputOutputArray (*)()>::type noArray = &cv::noArray;
identity<MatExpr (*)(const Mat &,const Mat &)>::type min0 = &cv::min;
identity<MatExpr (*)(const Mat &,double)>::type min1 = &cv::min;
identity<MatExpr (*)(double,const Mat &)>::type min2 = &cv::min;
identity<void (*)(InputArray,InputArray,OutputArray)>::type min3 = &cv::min;
identity<void (*)(const Mat &,const Mat &,Mat &)>::type min4 = &cv::min;
identity<void (*)(const UMat &,const UMat &,UMat &)>::type min5 = &cv::min;
auto min = kaguya::overload(min0,min1,min2,min3,min4,min5);
identity<MatExpr (*)(const Mat &,const Mat &)>::type max0 = &cv::max;
identity<MatExpr (*)(const Mat &,double)>::type max1 = &cv::max;
identity<MatExpr (*)(double,const Mat &)>::type max2 = &cv::max;
identity<void (*)(InputArray,InputArray,OutputArray)>::type max3 = &cv::max;
identity<void (*)(const Mat &,const Mat &,Mat &)>::type max4 = &cv::max;
identity<void (*)(const UMat &,const UMat &,UMat &)>::type max5 = &cv::max;
auto max = kaguya::overload(max0,max1,max2,max3,max4,max5);
identity<void (*)(FileStorage &,const String &,int)>::type write0 = &cv::write;
identity<void (*)(FileStorage &,const String &,float)>::type write1 = &cv::write;
identity<void (*)(FileStorage &,const String &,double)>::type write2 = &cv::write;
identity<void (*)(FileStorage &,const String &,const String &)>::type write3 = &cv::write;
identity<void (*)(FileStorage &,const String &,const Mat &)>::type write4 = &cv::write;
identity<void (*)(FileStorage &,const String &,const SparseMat &)>::type write5 = &cv::write;
identity<void (*)(FileStorage &,const String &,const std::vector<KeyPoint> &)>::type write6 = &cv::write;
identity<void (*)(FileStorage &,const String &,const std::vector<DMatch> &)>::type write7 = &cv::write;
identity<void (*)(FileStorage &,const Range &)>::type write8 = &cv::write;
identity<void (*)(FileStorage &,const String &,const Range &)>::type write9 = &cv::write;
identity<void (*)(FileStorage &,const String &,const KeyPoint &)>::type write10 = &cv::write;
identity<void (*)(FileStorage &,const String &,const DMatch &)>::type write11 = &cv::write;
identity<void (*)(FileStorage &,const KeyPoint &)>::type write12 = &cv::write;
identity<void (*)(FileStorage &,const DMatch &)>::type write13 = &cv::write;
identity<void (*)(FileStorage &,const std::vector<KeyPoint> &)>::type write14 = &cv::write;
identity<void (*)(FileStorage &,const std::vector<DMatch> &)>::type write15 = &cv::write;
auto write = kaguya::overload(write0,write1,write2,write3,write4,write5,write6,write7,write8,write9,write10,write11,write12,write13,write14,write15);
identity<void (*)(FileStorage &,int)>::type writeScalar0 = &cv::writeScalar;
identity<void (*)(FileStorage &,float)>::type writeScalar1 = &cv::writeScalar;
identity<void (*)(FileStorage &,double)>::type writeScalar2 = &cv::writeScalar;
identity<void (*)(FileStorage &,const String &)>::type writeScalar3 = &cv::writeScalar;
auto writeScalar = kaguya::overload(writeScalar0,writeScalar1,writeScalar2,writeScalar3);
identity<void (*)(const FileNode &,int &,int)>::type read0 = &cv::read;
identity<void (*)(const FileNode &,float &,float)>::type read1 = &cv::read;
identity<void (*)(const FileNode &,double &,double)>::type read2 = &cv::read;
identity<void (*)(const FileNode &,std::string &,const std::string &)>::type read3 = &cv::read;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( read_wrap_obj4, cv::read,  2, 3, void (*)(const FileNode &,Mat &,const Mat &));
auto read4 = read_wrap_obj4();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( read_wrap_obj5, cv::read,  2, 3, void (*)(const FileNode &,SparseMat &,const SparseMat &));
auto read5 = read_wrap_obj5();
identity<void (*)(const FileNode &,std::vector<KeyPoint> &)>::type read6 = &cv::read;
identity<void (*)(const FileNode &,std::vector<DMatch> &)>::type read7 = &cv::read;
identity<void (*)(const FileNode &,KeyPoint &,const KeyPoint &)>::type read8 = &cv::read;
identity<void (*)(const FileNode &,DMatch &,const DMatch &)>::type read9 = &cv::read;
identity<void (*)(const FileNode &,Range &,const Range &)>::type read10 = &cv::read;
identity<void (*)(const FileNode &,bool &,bool)>::type read11 = &cv::read;
identity<void (*)(const FileNode &,uchar &,uchar)>::type read12 = &cv::read;
identity<void (*)(const FileNode &,schar &,schar)>::type read13 = &cv::read;
identity<void (*)(const FileNode &,ushort &,ushort)>::type read14 = &cv::read;
identity<void (*)(const FileNode &,short &,short)>::type read15 = &cv::read;
identity<void (*)(const FileNode &,std::vector<KeyPoint> &,const std::vector<KeyPoint> &)>::type read16 = &cv::read;
identity<void (*)(const FileNode &,std::vector<DMatch> &,const std::vector<DMatch> &)>::type read17 = &cv::read;
auto read = kaguya::overload(read0,read1,read2,read3,read4,read5,read6,read7,read8,read9,read10,read11,read12,read13,read14,read15,read16,read17);
identity<int (*)(int,int,int)>::type borderInterpolate = &cv::borderInterpolate;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( copyMakeBorder_wrap_obj, cv::copyMakeBorder,  7, 8, void (*)(InputArray,OutputArray,int,int,int,int,int,const Scalar &));
auto copyMakeBorder = copyMakeBorder_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( add_wrap_obj, cv::add,  3, 5, void (*)(InputArray,InputArray,OutputArray,InputArray,int));
auto add = add_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( subtract_wrap_obj, cv::subtract,  3, 5, void (*)(InputArray,InputArray,OutputArray,InputArray,int));
auto subtract = subtract_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( multiply_wrap_obj, cv::multiply,  4, 5, void (*)(InputArray,InputArray,OutputArray,double,int));
auto multiply = multiply_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( divide_wrap_obj0, cv::divide,  4, 5, void (*)(InputArray,InputArray,OutputArray,double,int));
auto divide0 = divide_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( divide_wrap_obj1, cv::divide,  3, 4, void (*)(double,InputArray,OutputArray,int));
auto divide1 = divide_wrap_obj1();
auto divide = kaguya::overload(divide0,divide1);
identity<void (*)(InputArray,double,InputArray,OutputArray)>::type scaleAdd = &cv::scaleAdd;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( addWeighted_wrap_obj, cv::addWeighted,  6, 7, void (*)(InputArray,double,InputArray,double,double,OutputArray,int));
auto addWeighted = addWeighted_wrap_obj();
identity<void (*)(InputArray,OutputArray,double,double)>::type convertScaleAbs = &cv::convertScaleAbs;
identity<void (*)(InputArray,OutputArray)>::type convertFp16 = &cv::convertFp16;
identity<void (*)(InputArray,InputArray,OutputArray)>::type LUT = &cv::LUT;
identity<Scalar (*)(InputArray)>::type sum = &cv::sum;
identity<int (*)(InputArray)>::type countNonZero = &cv::countNonZero;
identity<void (*)(InputArray,OutputArray)>::type findNonZero = &cv::findNonZero;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( mean_wrap_obj, cv::mean,  1, 2, Scalar (*)(InputArray,InputArray));
auto mean = mean_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( meanStdDev_wrap_obj, cv::meanStdDev,  3, 4, void (*)(InputArray,OutputArray,OutputArray,InputArray));
auto meanStdDev = meanStdDev_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( norm_wrap_obj0, cv::norm,  2, 3, double (*)(InputArray,int,InputArray));
auto norm0 = norm_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( norm_wrap_obj1, cv::norm,  3, 4, double (*)(InputArray,InputArray,int,InputArray));
auto norm1 = norm_wrap_obj1();
identity<double (*)(const SparseMat &,int)>::type norm2 = &cv::norm;
auto norm = kaguya::overload(norm0,norm1,norm2);
identity<double (*)(InputArray,InputArray,double)>::type PSNR = &cv::PSNR;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( batchDistance_wrap_obj, cv::batchDistance,  9, 10, void (*)(InputArray,InputArray,OutputArray,int,OutputArray,int,int,InputArray,int,bool));
auto batchDistance = batchDistance_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( normalize_wrap_obj0, cv::normalize,  5, 7, void (*)(InputArray,InputOutputArray,double,double,int,int,InputArray));
auto normalize0 = normalize_wrap_obj0();
identity<void (*)(const SparseMat &,SparseMat &,double,int)>::type normalize1 = &cv::normalize;
auto normalize = kaguya::overload(normalize0,normalize1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( minMaxLoc_wrap_obj0, cv::minMaxLoc,  5, 6, void (*)(InputArray,double *,double *,Point *,Point *,InputArray));
auto minMaxLoc0 = minMaxLoc_wrap_obj0();
identity<void (*)(const SparseMat &,double *,double *,int *,int *)>::type minMaxLoc1 = &cv::minMaxLoc;
auto minMaxLoc = kaguya::overload(minMaxLoc0,minMaxLoc1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( minMaxIdx_wrap_obj, cv::minMaxIdx,  5, 6, void (*)(InputArray,double *,double *,int *,int *,InputArray));
auto minMaxIdx = minMaxIdx_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( reduce_wrap_obj, cv::reduce,  4, 5, void (*)(InputArray,OutputArray,int,int,int));
auto reduce = reduce_wrap_obj();
identity<void (*)(const Mat *,size_t,OutputArray)>::type merge0 = &cv::merge;
identity<void (*)(InputArrayOfArrays,OutputArray)>::type merge1 = &cv::merge;
auto merge = kaguya::overload(merge0,merge1);
identity<void (*)(const Mat &,Mat *)>::type split0 = &cv::split;
identity<void (*)(InputArray,OutputArrayOfArrays)>::type split1 = &cv::split;
auto split = kaguya::overload(split0,split1);
identity<void (*)(const Mat *,size_t,Mat *,size_t,const int *,size_t)>::type mixChannels0 = &cv::mixChannels;
identity<void (*)(InputArrayOfArrays,InputOutputArrayOfArrays,const int *,size_t)>::type mixChannels1 = &cv::mixChannels;
identity<void (*)(InputArrayOfArrays,InputOutputArrayOfArrays,const std::vector<int> &)>::type mixChannels2 = &cv::mixChannels;
auto mixChannels = kaguya::overload(mixChannels0,mixChannels1,mixChannels2);
identity<void (*)(InputArray,OutputArray,int)>::type extractChannel = &cv::extractChannel;
identity<void (*)(InputArray,InputOutputArray,int)>::type insertChannel = &cv::insertChannel;
identity<void (*)(InputArray,OutputArray,int)>::type flip = &cv::flip;
identity<void (*)(InputArray,OutputArray,int)>::type rotate = &cv::rotate;
identity<void (*)(InputArray,int,int,OutputArray)>::type repeat0 = &cv::repeat;
identity<Mat (*)(const Mat &,int,int)>::type repeat1 = &cv::repeat;
auto repeat = kaguya::overload(repeat0,repeat1);
identity<void (*)(const Mat *,size_t,OutputArray)>::type hconcat0 = &cv::hconcat;
identity<void (*)(InputArray,InputArray,OutputArray)>::type hconcat1 = &cv::hconcat;
identity<void (*)(InputArrayOfArrays,OutputArray)>::type hconcat2 = &cv::hconcat;
auto hconcat = kaguya::overload(hconcat0,hconcat1,hconcat2);
identity<void (*)(const Mat *,size_t,OutputArray)>::type vconcat0 = &cv::vconcat;
identity<void (*)(InputArray,InputArray,OutputArray)>::type vconcat1 = &cv::vconcat;
identity<void (*)(InputArrayOfArrays,OutputArray)>::type vconcat2 = &cv::vconcat;
auto vconcat = kaguya::overload(vconcat0,vconcat1,vconcat2);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( bitwise_and_wrap_obj, cv::bitwise_and,  3, 4, void (*)(InputArray,InputArray,OutputArray,InputArray));
auto bitwise_and = bitwise_and_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( bitwise_or_wrap_obj, cv::bitwise_or,  3, 4, void (*)(InputArray,InputArray,OutputArray,InputArray));
auto bitwise_or = bitwise_or_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( bitwise_xor_wrap_obj, cv::bitwise_xor,  3, 4, void (*)(InputArray,InputArray,OutputArray,InputArray));
auto bitwise_xor = bitwise_xor_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( bitwise_not_wrap_obj, cv::bitwise_not,  2, 3, void (*)(InputArray,OutputArray,InputArray));
auto bitwise_not = bitwise_not_wrap_obj();
identity<void (*)(InputArray,InputArray,OutputArray)>::type absdiff = &cv::absdiff;
identity<void (*)(InputArray,OutputArray,InputArray)>::type copyTo = &cv::copyTo;
identity<void (*)(InputArray,InputArray,InputArray,OutputArray)>::type inRange = &cv::inRange;
identity<void (*)(InputArray,InputArray,OutputArray,int)>::type compare = &cv::compare;
identity<void (*)(InputArray,OutputArray)>::type sqrt = &cv::sqrt;
identity<void (*)(InputArray,double,OutputArray)>::type pow = &cv::pow;
identity<void (*)(InputArray,OutputArray)>::type exp = &cv::exp;
identity<void (*)(InputArray,OutputArray)>::type log = &cv::log;
identity<void (*)(InputArray,InputArray,OutputArray,OutputArray,bool)>::type polarToCart = &cv::polarToCart;
identity<void (*)(InputArray,InputArray,OutputArray,OutputArray,bool)>::type cartToPolar = &cv::cartToPolar;
identity<void (*)(InputArray,InputArray,OutputArray,bool)>::type phase = &cv::phase;
identity<void (*)(InputArray,InputArray,OutputArray)>::type magnitude = &cv::magnitude;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( checkRange_wrap_obj, cv::checkRange,  4, 5, bool (*)(InputArray,bool,Point *,double,double));
auto checkRange = checkRange_wrap_obj();
identity<void (*)(InputOutputArray,double)>::type patchNaNs = &cv::patchNaNs;
identity<void (*)(InputArray,InputArray,double,InputArray,double,OutputArray,int)>::type gemm = &cv::gemm;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( mulTransposed_wrap_obj, cv::mulTransposed,  4, 6, void (*)(InputArray,OutputArray,bool,InputArray,double,int));
auto mulTransposed = mulTransposed_wrap_obj();
identity<void (*)(InputArray,OutputArray)>::type transpose = &cv::transpose;
identity<void (*)(InputArray,OutputArray,InputArray)>::type transform = &cv::transform;
identity<void (*)(InputArray,OutputArray,InputArray)>::type perspectiveTransform = &cv::perspectiveTransform;
identity<void (*)(InputOutputArray,bool)>::type completeSymm = &cv::completeSymm;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( setIdentity_wrap_obj, cv::setIdentity,  1, 2, void (*)(InputOutputArray,const Scalar &));
auto setIdentity = setIdentity_wrap_obj();
identity<double (*)(InputArray)>::type determinant = &cv::determinant;
identity<Scalar (*)(InputArray)>::type trace = &cv::trace;
identity<double (*)(InputArray,OutputArray,int)>::type invert = &cv::invert;
identity<bool (*)(InputArray,InputArray,OutputArray,int)>::type solve = &cv::solve;
identity<void (*)(InputArray,OutputArray,int)>::type sort = &cv::sort;
identity<void (*)(InputArray,OutputArray,int)>::type sortIdx = &cv::sortIdx;
identity<int (*)(InputArray,OutputArray)>::type solveCubic = &cv::solveCubic;
identity<double (*)(InputArray,OutputArray,int)>::type solvePoly = &cv::solvePoly;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( eigen_wrap_obj, cv::eigen,  2, 3, bool (*)(InputArray,OutputArray,OutputArray));
auto eigen = eigen_wrap_obj();
identity<void (*)(InputArray,OutputArray,OutputArray)>::type eigenNonSymmetric = &cv::eigenNonSymmetric;
identity<void (*)(const Mat *,int,Mat &,Mat &,int,int)>::type calcCovarMatrix0 = &cv::calcCovarMatrix;
identity<void (*)(InputArray,OutputArray,InputOutputArray,int,int)>::type calcCovarMatrix1 = &cv::calcCovarMatrix;
auto calcCovarMatrix = kaguya::overload(calcCovarMatrix0,calcCovarMatrix1);
identity<void (*)(InputArray,InputOutputArray,OutputArray,int)>::type PCACompute0 = &cv::PCACompute;
identity<void (*)(InputArray,InputOutputArray,OutputArray,OutputArray,int)>::type PCACompute1 = &cv::PCACompute;
identity<void (*)(InputArray,InputOutputArray,OutputArray,double)>::type PCACompute2 = &cv::PCACompute;
identity<void (*)(InputArray,InputOutputArray,OutputArray,OutputArray,double)>::type PCACompute3 = &cv::PCACompute;
auto PCACompute = kaguya::overload(PCACompute0,PCACompute1,PCACompute2,PCACompute3);
identity<void (*)(InputArray,InputArray,InputArray,OutputArray)>::type PCAProject = &cv::PCAProject;
identity<void (*)(InputArray,InputArray,InputArray,OutputArray)>::type PCABackProject = &cv::PCABackProject;
identity<void (*)(InputArray,OutputArray,OutputArray,OutputArray,int)>::type SVDecomp = &cv::SVDecomp;
identity<void (*)(InputArray,InputArray,InputArray,InputArray,OutputArray)>::type SVBackSubst = &cv::SVBackSubst;
identity<double (*)(InputArray,InputArray,InputArray)>::type Mahalanobis = &cv::Mahalanobis;
identity<void (*)(InputArray,OutputArray,int,int)>::type dft = &cv::dft;
identity<void (*)(InputArray,OutputArray,int,int)>::type idft = &cv::idft;
identity<void (*)(InputArray,OutputArray,int)>::type dct = &cv::dct;
identity<void (*)(InputArray,OutputArray,int)>::type idct = &cv::idct;
identity<void (*)(InputArray,InputArray,OutputArray,int,bool)>::type mulSpectrums = &cv::mulSpectrums;
identity<int (*)(int)>::type getOptimalDFTSize = &cv::getOptimalDFTSize;
identity<RNG & (*)()>::type theRNG = &cv::theRNG;
identity<void (*)(int)>::type setRNGSeed = &cv::setRNGSeed;
identity<void (*)(InputOutputArray,InputArray,InputArray)>::type randu = &cv::randu;
identity<void (*)(InputOutputArray,InputArray,InputArray)>::type randn = &cv::randn;
identity<void (*)(InputOutputArray,double,RNG *)>::type randShuffle = &cv::randShuffle;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( kmeans_wrap_obj, cv::kmeans,  6, 7, double (*)(InputArray,int,InputOutputArray,TermCriteria,int,int,OutputArray));
auto kmeans = kmeans_wrap_obj();
identity<int (*)(Ptr<Formatted>,FILE *)>::type print0 = &cv::print;
identity<int (*)(const Mat &,FILE *)>::type print1 = &cv::print;
identity<int (*)(const UMat &,FILE *)>::type print2 = &cv::print;
auto print = kaguya::overload(print0,print1,print2);
identity<bool (*)(bool)>::type setBreakOnError = &cv::setBreakOnError;
identity<String (*)(const char *)>::type tempfile = &cv::tempfile;
identity<void (*)(String,std::vector<String> &,bool)>::type glob = &cv::glob;
identity<void (*)(int)>::type setNumThreads = &cv::setNumThreads;
identity<int (*)()>::type getNumThreads = &cv::getNumThreads;
identity<int (*)()>::type getThreadNum = &cv::getThreadNum;
identity<const String & (*)()>::type getBuildInformation = &cv::getBuildInformation;
identity<String (*)()>::type getVersionString = &cv::getVersionString;
identity<int (*)()>::type getVersionMajor = &cv::getVersionMajor;
identity<int (*)()>::type getVersionMinor = &cv::getVersionMinor;
identity<int (*)()>::type getVersionRevision = &cv::getVersionRevision;
identity<int64 (*)()>::type getTickCount = &cv::getTickCount;
identity<double (*)()>::type getTickFrequency = &cv::getTickFrequency;
identity<int64 (*)()>::type getCPUTickCount = &cv::getCPUTickCount;
identity<bool (*)(int)>::type checkHardwareSupport = &cv::checkHardwareSupport;
identity<String (*)(int)>::type getHardwareFeatureName = &cv::getHardwareFeatureName;
identity<std::string (*)()>::type getCPUFeaturesLine = &cv::getCPUFeaturesLine;
identity<int (*)()>::type getNumberOfCPUs = &cv::getNumberOfCPUs;
identity<size_t (*)(size_t,int)>::type alignSize = &cv::alignSize;
identity<int (*)(int,unsigned int)>::type divUp0 = &cv::divUp;
identity<size_t (*)(size_t,unsigned int)>::type divUp1 = &cv::divUp;
auto divUp = kaguya::overload(divUp0,divUp1);
identity<int (*)(int,unsigned int)>::type roundUp0 = &cv::roundUp;
identity<size_t (*)(size_t,unsigned int)>::type roundUp1 = &cv::roundUp;
auto roundUp = kaguya::overload(roundUp0,roundUp1);
identity<void (*)(bool)>::type setUseOptimized = &cv::setUseOptimized;
identity<bool (*)()>::type useOptimized = &cv::useOptimized;
identity<size_t (*)(int)>::type getElemSize = &cv::getElemSize;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( parallel_for__wrap_obj0, cv::parallel_for_,  2, 3, void (*)(const Range &,const ParallelLoopBody &,double));
auto parallel_for_0 = parallel_for__wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( parallel_for__wrap_obj1, cv::parallel_for_,  2, 3, void (*)(const Range &,std::function<void (const Range &)>,double));
auto parallel_for_1 = parallel_for__wrap_obj1();
auto parallel_for_ = kaguya::overload(parallel_for_0,parallel_for_1);
identity<int (*)(InputArray,InputArray,OutputArray)>::type solveLP = &cv::solveLP;
identity<bool (*)()>::type haveOpenVX = &cv::haveOpenVX;
identity<bool (*)()>::type useOpenVX = &cv::useOpenVX;
identity<void (*)(bool)>::type setUseOpenVX = &cv::setUseOpenVX;
identity<void (*)(InputArray,std::vector<KeyPoint> &,int,bool)>::type FAST0 = &cv::FAST;
identity<void (*)(InputArray,std::vector<KeyPoint> &,int,bool,FastFeatureDetector::DetectorType)>::type FAST1 = &cv::FAST;
auto FAST = kaguya::overload(FAST0,FAST1);
identity<void (*)(InputArray,std::vector<KeyPoint> &,int,bool)>::type AGAST0 = &cv::AGAST;
identity<void (*)(InputArray,std::vector<KeyPoint> &,int,bool,AgastFeatureDetector::DetectorType)>::type AGAST1 = &cv::AGAST;
auto AGAST = kaguya::overload(AGAST0,AGAST1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( drawKeypoints_wrap_obj, cv::drawKeypoints,  3, 5, void (*)(InputArray,const std::vector<KeyPoint> &,InputOutputArray,const Scalar &,DrawMatchesFlags));
auto drawKeypoints = drawKeypoints_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( drawMatches_wrap_obj0, cv::drawMatches,  6, 10, void (*)(InputArray,const std::vector<KeyPoint> &,InputArray,const std::vector<KeyPoint> &,const std::vector<DMatch> &,InputOutputArray,const Scalar &,const Scalar &,const std::vector<char> &,DrawMatchesFlags));
auto drawMatches0 = drawMatches_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( drawMatches_wrap_obj1, cv::drawMatches,  7, 11, void (*)(InputArray,const std::vector<KeyPoint> &,InputArray,const std::vector<KeyPoint> &,const std::vector<DMatch> &,InputOutputArray,const int,const Scalar &,const Scalar &,const std::vector<char> &,DrawMatchesFlags));
auto drawMatches1 = drawMatches_wrap_obj1();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( drawMatches_wrap_obj2, cv::drawMatches,  6, 10, void (*)(InputArray,const std::vector<KeyPoint> &,InputArray,const std::vector<KeyPoint> &,const std::vector<std::vector<DMatch>> &,InputOutputArray,const Scalar &,const Scalar &,const std::vector<std::vector<char>> &,DrawMatchesFlags));
auto drawMatches2 = drawMatches_wrap_obj2();
auto drawMatches = kaguya::overload(drawMatches0,drawMatches1,drawMatches2);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( evaluateFeatureDetector_wrap_obj, cv::evaluateFeatureDetector,  7, 8, void (*)(const Mat &,const Mat &,const Mat &,std::vector<KeyPoint> *,std::vector<KeyPoint> *,float &,int &,const Ptr<FeatureDetector> &));
auto evaluateFeatureDetector = evaluateFeatureDetector_wrap_obj();
identity<void (*)(const std::vector<std::vector<DMatch>> &,const std::vector<std::vector<uchar>> &,std::vector<Point2f> &)>::type computeRecallPrecisionCurve = &cv::computeRecallPrecisionCurve;
identity<float (*)(const std::vector<Point2f> &,float)>::type getRecall = &cv::getRecall;
identity<int (*)(const std::vector<Point2f> &,float)>::type getNearestPoint = &cv::getNearestPoint;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( Rodrigues_wrap_obj, cv::Rodrigues,  2, 3, void (*)(InputArray,OutputArray,OutputArray));
auto Rodrigues = Rodrigues_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findHomography_wrap_obj0, cv::findHomography,  6, 7, Mat (*)(InputArray,InputArray,int,double,OutputArray,const int,const double));
auto findHomography0 = findHomography_wrap_obj0();
identity<Mat (*)(InputArray,InputArray,OutputArray,int,double)>::type findHomography1 = &cv::findHomography;
identity<Mat (*)(InputArray,InputArray,OutputArray,const UsacParams &)>::type findHomography2 = &cv::findHomography;
auto findHomography = kaguya::overload(findHomography0,findHomography1,findHomography2);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( RQDecomp3x3_wrap_obj, cv::RQDecomp3x3,  3, 6, Vec3d (*)(InputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray));
auto RQDecomp3x3 = RQDecomp3x3_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( decomposeProjectionMatrix_wrap_obj, cv::decomposeProjectionMatrix,  4, 8, void (*)(InputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray));
auto decomposeProjectionMatrix = decomposeProjectionMatrix_wrap_obj();
identity<void (*)(InputArray,InputArray,OutputArray,OutputArray)>::type matMulDeriv = &cv::matMulDeriv;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( composeRT_wrap_obj, cv::composeRT,  6, 14, void (*)(InputArray,InputArray,InputArray,InputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray));
auto composeRT = composeRT_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( projectPoints_wrap_obj, cv::projectPoints,  7, 8, void (*)(InputArray,InputArray,InputArray,InputArray,InputArray,OutputArray,OutputArray,double));
auto projectPoints = projectPoints_wrap_obj();
identity<bool (*)(InputArray,InputArray,InputArray,InputArray,OutputArray,OutputArray,bool,int)>::type solvePnP = &cv::solvePnP;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( solvePnPRansac_wrap_obj0, cv::solvePnPRansac,  11, 12, bool (*)(InputArray,InputArray,InputArray,InputArray,OutputArray,OutputArray,bool,int,float,double,OutputArray,int));
auto solvePnPRansac0 = solvePnPRansac_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( solvePnPRansac_wrap_obj1, cv::solvePnPRansac,  7, 8, bool (*)(InputArray,InputArray,InputOutputArray,InputArray,OutputArray,OutputArray,OutputArray,const UsacParams &));
auto solvePnPRansac1 = solvePnPRansac_wrap_obj1();
auto solvePnPRansac = kaguya::overload(solvePnPRansac0,solvePnPRansac1);
identity<int (*)(InputArray,InputArray,InputArray,InputArray,OutputArrayOfArrays,OutputArrayOfArrays,int)>::type solveP3P = &cv::solveP3P;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( solvePnPRefineLM_wrap_obj, cv::solvePnPRefineLM,  6, 7, void (*)(InputArray,InputArray,InputArray,InputArray,InputOutputArray,InputOutputArray,TermCriteria));
auto solvePnPRefineLM = solvePnPRefineLM_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( solvePnPRefineVVS_wrap_obj, cv::solvePnPRefineVVS,  7, 8, void (*)(InputArray,InputArray,InputArray,InputArray,InputOutputArray,InputOutputArray,TermCriteria,double));
auto solvePnPRefineVVS = solvePnPRefineVVS_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( solvePnPGeneric_wrap_obj, cv::solvePnPGeneric,  8, 11, int (*)(InputArray,InputArray,InputArray,InputArray,OutputArrayOfArrays,OutputArrayOfArrays,bool,SolvePnPMethod,InputArray,InputArray,OutputArray));
auto solvePnPGeneric = solvePnPGeneric_wrap_obj();
identity<Mat (*)(InputArrayOfArrays,InputArrayOfArrays,Size,double)>::type initCameraMatrix2D = &cv::initCameraMatrix2D;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findChessboardCorners_wrap_obj, cv::findChessboardCorners,  3, 4, bool (*)(InputArray,Size,OutputArray,int));
auto findChessboardCorners = findChessboardCorners_wrap_obj();
identity<bool (*)(InputArray,Size)>::type checkChessboard = &cv::checkChessboard;
identity<bool (*)(InputArray,Size,OutputArray,int,OutputArray)>::type findChessboardCornersSB0 = &cv::findChessboardCornersSB;
identity<bool (*)(InputArray,Size,OutputArray,int)>::type findChessboardCornersSB1 = &cv::findChessboardCornersSB;
auto findChessboardCornersSB = kaguya::overload(findChessboardCornersSB0,findChessboardCornersSB1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( estimateChessboardSharpness_wrap_obj, cv::estimateChessboardSharpness,  5, 6, Scalar (*)(InputArray,Size,InputArray,float,bool,OutputArray));
auto estimateChessboardSharpness = estimateChessboardSharpness_wrap_obj();
identity<bool (*)(InputArray,InputOutputArray,Size)>::type find4QuadCornerSubpix = &cv::find4QuadCornerSubpix;
identity<void (*)(InputOutputArray,Size,InputArray,bool)>::type drawChessboardCorners = &cv::drawChessboardCorners;
identity<void (*)(InputOutputArray,InputArray,InputArray,InputArray,InputArray,float,int)>::type drawFrameAxes = &cv::drawFrameAxes;
identity<bool (*)(InputArray,Size,OutputArray,int,const Ptr<FeatureDetector> &,const CirclesGridFinderParameters &)>::type findCirclesGrid0 = &cv::findCirclesGrid;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findCirclesGrid_wrap_obj1, cv::findCirclesGrid,  4, 5, bool (*)(InputArray,Size,OutputArray,int,const Ptr<FeatureDetector> &));
auto findCirclesGrid1 = findCirclesGrid_wrap_obj1();
auto findCirclesGrid = kaguya::overload(findCirclesGrid0,findCirclesGrid1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( calibrateCamera_wrap_obj0, cv::calibrateCamera,  11, 12, double (*)(InputArrayOfArrays,InputArrayOfArrays,Size,InputOutputArray,InputOutputArray,OutputArrayOfArrays,OutputArrayOfArrays,OutputArray,OutputArray,OutputArray,int,TermCriteria));
auto calibrateCamera0 = calibrateCamera_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( calibrateCamera_wrap_obj1, cv::calibrateCamera,  8, 9, double (*)(InputArrayOfArrays,InputArrayOfArrays,Size,InputOutputArray,InputOutputArray,OutputArrayOfArrays,OutputArrayOfArrays,int,TermCriteria));
auto calibrateCamera1 = calibrateCamera_wrap_obj1();
auto calibrateCamera = kaguya::overload(calibrateCamera0,calibrateCamera1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( calibrateCameraRO_wrap_obj0, cv::calibrateCameraRO,  14, 15, double (*)(InputArrayOfArrays,InputArrayOfArrays,Size,int,InputOutputArray,InputOutputArray,OutputArrayOfArrays,OutputArrayOfArrays,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,int,TermCriteria));
auto calibrateCameraRO0 = calibrateCameraRO_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( calibrateCameraRO_wrap_obj1, cv::calibrateCameraRO,  10, 11, double (*)(InputArrayOfArrays,InputArrayOfArrays,Size,int,InputOutputArray,InputOutputArray,OutputArrayOfArrays,OutputArrayOfArrays,OutputArray,int,TermCriteria));
auto calibrateCameraRO1 = calibrateCameraRO_wrap_obj1();
auto calibrateCameraRO = kaguya::overload(calibrateCameraRO0,calibrateCameraRO1);
identity<void (*)(InputArray,Size,double,double,double &,double &,double &,Point2d &,double &)>::type calibrationMatrixValues = &cv::calibrationMatrixValues;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( stereoCalibrate_wrap_obj0, cv::stereoCalibrate,  14, 15, double (*)(InputArrayOfArrays,InputArrayOfArrays,InputArrayOfArrays,InputOutputArray,InputOutputArray,InputOutputArray,InputOutputArray,Size,InputOutputArray,InputOutputArray,OutputArray,OutputArray,OutputArray,int,TermCriteria));
auto stereoCalibrate0 = stereoCalibrate_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( stereoCalibrate_wrap_obj1, cv::stereoCalibrate,  13, 14, double (*)(InputArrayOfArrays,InputArrayOfArrays,InputArrayOfArrays,InputOutputArray,InputOutputArray,InputOutputArray,InputOutputArray,Size,OutputArray,OutputArray,OutputArray,OutputArray,int,TermCriteria));
auto stereoCalibrate1 = stereoCalibrate_wrap_obj1();
auto stereoCalibrate = kaguya::overload(stereoCalibrate0,stereoCalibrate1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( stereoRectify_wrap_obj, cv::stereoRectify,  15, 17, void (*)(InputArray,InputArray,InputArray,InputArray,Size,InputArray,InputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,int,double,Size,Rect *,Rect *));
auto stereoRectify = stereoRectify_wrap_obj();
identity<bool (*)(InputArray,InputArray,InputArray,Size,OutputArray,OutputArray,double)>::type stereoRectifyUncalibrated = &cv::stereoRectifyUncalibrated;
identity<float (*)(InputArray,InputArray,InputArray,InputArray,InputArray,InputArray,InputArrayOfArrays,InputArrayOfArrays,Size,InputArray,InputArray,InputArray,InputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,double,Size,Rect *,Rect *,int)>::type rectify3Collinear = &cv::rectify3Collinear;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( getOptimalNewCameraMatrix_wrap_obj, cv::getOptimalNewCameraMatrix,  6, 7, Mat (*)(InputArray,InputArray,Size,double,Size,Rect *,bool));
auto getOptimalNewCameraMatrix = getOptimalNewCameraMatrix_wrap_obj();
identity<void (*)(InputArrayOfArrays,InputArrayOfArrays,InputArrayOfArrays,InputArrayOfArrays,OutputArray,OutputArray,HandEyeCalibrationMethod)>::type calibrateHandEye = &cv::calibrateHandEye;
identity<void (*)(InputArrayOfArrays,InputArrayOfArrays,InputArrayOfArrays,InputArrayOfArrays,OutputArray,OutputArray,OutputArray,OutputArray,RobotWorldHandEyeCalibrationMethod)>::type calibrateRobotWorldHandEye = &cv::calibrateRobotWorldHandEye;
identity<void (*)(InputArray,OutputArray)>::type convertPointsToHomogeneous = &cv::convertPointsToHomogeneous;
identity<void (*)(InputArray,OutputArray)>::type convertPointsFromHomogeneous = &cv::convertPointsFromHomogeneous;
identity<void (*)(InputArray,OutputArray)>::type convertPointsHomogeneous = &cv::convertPointsHomogeneous;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findFundamentalMat_wrap_obj0, cv::findFundamentalMat,  6, 7, Mat (*)(InputArray,InputArray,int,double,double,int,OutputArray));
auto findFundamentalMat0 = findFundamentalMat_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findFundamentalMat_wrap_obj1, cv::findFundamentalMat,  5, 6, Mat (*)(InputArray,InputArray,int,double,double,OutputArray));
auto findFundamentalMat1 = findFundamentalMat_wrap_obj1();
identity<Mat (*)(InputArray,InputArray,OutputArray,int,double,double)>::type findFundamentalMat2 = &cv::findFundamentalMat;
identity<Mat (*)(InputArray,InputArray,OutputArray,const UsacParams &)>::type findFundamentalMat3 = &cv::findFundamentalMat;
auto findFundamentalMat = kaguya::overload(findFundamentalMat0,findFundamentalMat1,findFundamentalMat2,findFundamentalMat3);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findEssentialMat_wrap_obj0, cv::findEssentialMat,  7, 8, Mat (*)(InputArray,InputArray,InputArray,int,double,double,int,OutputArray));
auto findEssentialMat0 = findEssentialMat_wrap_obj0();
identity<Mat (*)(InputArray,InputArray,InputArray,int,double,double,OutputArray)>::type findEssentialMat1 = &cv::findEssentialMat;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findEssentialMat_wrap_obj2, cv::findEssentialMat,  7, 9, Mat (*)(InputArray,InputArray,double,Point2d,int,double,double,int,OutputArray));
auto findEssentialMat2 = findEssentialMat_wrap_obj2();
identity<Mat (*)(InputArray,InputArray,double,Point2d,int,double,double,OutputArray)>::type findEssentialMat3 = &cv::findEssentialMat;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findEssentialMat_wrap_obj4, cv::findEssentialMat,  9, 10, Mat (*)(InputArray,InputArray,InputArray,InputArray,InputArray,InputArray,int,double,double,OutputArray));
auto findEssentialMat4 = findEssentialMat_wrap_obj4();
identity<Mat (*)(InputArray,InputArray,InputArray,InputArray,InputArray,InputArray,OutputArray,const UsacParams &)>::type findEssentialMat5 = &cv::findEssentialMat;
auto findEssentialMat = kaguya::overload(findEssentialMat0,findEssentialMat1,findEssentialMat2,findEssentialMat3,findEssentialMat4,findEssentialMat5);
identity<void (*)(InputArray,OutputArray,OutputArray,OutputArray)>::type decomposeEssentialMat = &cv::decomposeEssentialMat;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( recoverPose_wrap_obj0, cv::recoverPose,  11, 13, int (*)(InputArray,InputArray,InputArray,InputArray,InputArray,InputArray,OutputArray,OutputArray,OutputArray,int,double,double,InputOutputArray));
auto recoverPose0 = recoverPose_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( recoverPose_wrap_obj1, cv::recoverPose,  6, 7, int (*)(InputArray,InputArray,InputArray,InputArray,OutputArray,OutputArray,InputOutputArray));
auto recoverPose1 = recoverPose_wrap_obj1();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( recoverPose_wrap_obj2, cv::recoverPose,  6, 8, int (*)(InputArray,InputArray,InputArray,OutputArray,OutputArray,double,Point2d,InputOutputArray));
auto recoverPose2 = recoverPose_wrap_obj2();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( recoverPose_wrap_obj3, cv::recoverPose,  7, 9, int (*)(InputArray,InputArray,InputArray,InputArray,OutputArray,OutputArray,double,InputOutputArray,OutputArray));
auto recoverPose3 = recoverPose_wrap_obj3();
auto recoverPose = kaguya::overload(recoverPose0,recoverPose1,recoverPose2,recoverPose3);
identity<void (*)(InputArray,int,InputArray,OutputArray)>::type computeCorrespondEpilines = &cv::computeCorrespondEpilines;
identity<void (*)(InputArray,InputArray,InputArray,InputArray,OutputArray)>::type triangulatePoints = &cv::triangulatePoints;
identity<void (*)(InputArray,InputArray,InputArray,OutputArray,OutputArray)>::type correctMatches = &cv::correctMatches;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( filterSpeckles_wrap_obj, cv::filterSpeckles,  4, 5, void (*)(InputOutputArray,double,int,double,InputOutputArray));
auto filterSpeckles = filterSpeckles_wrap_obj();
identity<Rect (*)(Rect,Rect,int,int,int)>::type getValidDisparityROI = &cv::getValidDisparityROI;
identity<void (*)(InputOutputArray,InputArray,int,int,int)>::type validateDisparity = &cv::validateDisparity;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( reprojectImageTo3D_wrap_obj, cv::reprojectImageTo3D,  4, 5, void (*)(InputArray,OutputArray,InputArray,bool,int));
auto reprojectImageTo3D = reprojectImageTo3D_wrap_obj();
identity<double (*)(InputArray,InputArray,InputArray)>::type sampsonDistance = &cv::sampsonDistance;
identity<int (*)(InputArray,InputArray,OutputArray,OutputArray,double,double)>::type estimateAffine3D0 = &cv::estimateAffine3D;
identity<cv::Mat (*)(InputArray,InputArray,double *,bool)>::type estimateAffine3D1 = &cv::estimateAffine3D;
auto estimateAffine3D = kaguya::overload(estimateAffine3D0,estimateAffine3D1);
identity<int (*)(InputArray,InputArray,OutputArray,OutputArray,double,double)>::type estimateTranslation3D = &cv::estimateTranslation3D;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( estimateAffine2D_wrap_obj0, cv::estimateAffine2D,  7, 8, cv::Mat (*)(InputArray,InputArray,OutputArray,int,double,size_t,double,size_t));
auto estimateAffine2D0 = estimateAffine2D_wrap_obj0();
identity<cv::Mat (*)(InputArray,InputArray,OutputArray,const UsacParams &)>::type estimateAffine2D1 = &cv::estimateAffine2D;
auto estimateAffine2D = kaguya::overload(estimateAffine2D0,estimateAffine2D1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( estimateAffinePartial2D_wrap_obj, cv::estimateAffinePartial2D,  7, 8, cv::Mat (*)(InputArray,InputArray,OutputArray,int,double,size_t,double,size_t));
auto estimateAffinePartial2D = estimateAffinePartial2D_wrap_obj();
identity<int (*)(InputArray,InputArray,OutputArrayOfArrays,OutputArrayOfArrays,OutputArrayOfArrays)>::type decomposeHomographyMat = &cv::decomposeHomographyMat;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( filterHomographyDecompByVisibleRefpoints_wrap_obj, cv::filterHomographyDecompByVisibleRefpoints,  5, 6, void (*)(InputArrayOfArrays,InputArrayOfArrays,InputArray,InputArray,OutputArray,InputArray));
auto filterHomographyDecompByVisibleRefpoints = filterHomographyDecompByVisibleRefpoints_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( undistort_wrap_obj, cv::undistort,  4, 5, void (*)(InputArray,OutputArray,InputArray,InputArray,InputArray));
auto undistort = undistort_wrap_obj();
identity<void (*)(InputArray,InputArray,InputArray,InputArray,Size,int,OutputArray,OutputArray)>::type initUndistortRectifyMap = &cv::initUndistortRectifyMap;
identity<void (*)(InputArray,InputArray,InputArray,InputArray,const Size &,int,OutputArray,OutputArray)>::type initInverseRectificationMap = &cv::initInverseRectificationMap;
identity<float (*)(InputArray,InputArray,Size,int,int,OutputArray,OutputArray,enum UndistortTypes,double)>::type initWideAngleProjMap0 = &cv::initWideAngleProjMap;
identity<float (*)(InputArray,InputArray,Size,int,int,OutputArray,OutputArray,int,double)>::type initWideAngleProjMap1 = &cv::initWideAngleProjMap;
auto initWideAngleProjMap = kaguya::overload(initWideAngleProjMap0,initWideAngleProjMap1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( getDefaultNewCameraMatrix_wrap_obj, cv::getDefaultNewCameraMatrix,  2, 3, Mat (*)(InputArray,Size,bool));
auto getDefaultNewCameraMatrix = getDefaultNewCameraMatrix_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( undistortPoints_wrap_obj0, cv::undistortPoints,  4, 6, void (*)(InputArray,OutputArray,InputArray,InputArray,InputArray,InputArray));
auto undistortPoints0 = undistortPoints_wrap_obj0();
identity<void (*)(InputArray,OutputArray,InputArray,InputArray,InputArray,InputArray,TermCriteria)>::type undistortPoints1 = &cv::undistortPoints;
auto undistortPoints = kaguya::overload(undistortPoints0,undistortPoints1);
identity<Mat (*)(const String &,int)>::type imread = &cv::imread;
identity<bool (*)(const String &,std::vector<Mat> &,int)>::type imreadmulti0 = &cv::imreadmulti;
identity<bool (*)(const String &,std::vector<Mat> &,int,int,int)>::type imreadmulti1 = &cv::imreadmulti;
auto imreadmulti = kaguya::overload(imreadmulti0,imreadmulti1);
identity<size_t (*)(const String &,int)>::type imcount = &cv::imcount;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( imwrite_wrap_obj, cv::imwrite,  2, 3, bool (*)(const String &,InputArray,const std::vector<int> &));
auto imwrite = imwrite_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( imwritemulti_wrap_obj, cv::imwritemulti,  2, 3, bool (*)(const String &,InputArrayOfArrays,const std::vector<int> &));
auto imwritemulti = imwritemulti_wrap_obj();
identity<Mat (*)(InputArray,int)>::type imdecode0 = &cv::imdecode;
identity<Mat (*)(InputArray,int,Mat *)>::type imdecode1 = &cv::imdecode;
auto imdecode = kaguya::overload(imdecode0,imdecode1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( imencode_wrap_obj, cv::imencode,  3, 4, bool (*)(const String &,InputArray,std::vector<uchar> &,const std::vector<int> &));
auto imencode = imencode_wrap_obj();
identity<bool (*)(const String &)>::type haveImageReader = &cv::haveImageReader;
identity<bool (*)(const String &)>::type haveImageWriter = &cv::haveImageWriter;
identity<void (*)(const String &,int)>::type namedWindow = &cv::namedWindow;
identity<void (*)(const String &)>::type destroyWindow = &cv::destroyWindow;
identity<void (*)()>::type destroyAllWindows = &cv::destroyAllWindows;
identity<int (*)()>::type startWindowThread = &cv::startWindowThread;
identity<int (*)(int)>::type waitKeyEx = &cv::waitKeyEx;
identity<int (*)(int)>::type waitKey = &cv::waitKey;
identity<int (*)()>::type pollKey = &cv::pollKey;
identity<void (*)(const String &,InputArray)>::type imshow = &cv::imshow;
identity<void (*)(const String &,int,int)>::type resizeWindow0 = &cv::resizeWindow;
identity<void (*)(const String &,const cv::Size &)>::type resizeWindow1 = &cv::resizeWindow;
auto resizeWindow = kaguya::overload(resizeWindow0,resizeWindow1);
identity<void (*)(const String &,int,int)>::type moveWindow = &cv::moveWindow;
identity<void (*)(const String &,int,double)>::type setWindowProperty = &cv::setWindowProperty;
identity<void (*)(const String &,const String &)>::type setWindowTitle = &cv::setWindowTitle;
identity<double (*)(const String &,int)>::type getWindowProperty = &cv::getWindowProperty;
identity<Rect (*)(const String &)>::type getWindowImageRect = &cv::getWindowImageRect;
identity<int (*)(int)>::type getMouseWheelDelta = &cv::getMouseWheelDelta;
identity<Rect (*)(const String &,InputArray,bool,bool)>::type selectROI0 = &cv::selectROI;
identity<Rect (*)(InputArray,bool,bool)>::type selectROI1 = &cv::selectROI;
auto selectROI = kaguya::overload(selectROI0,selectROI1);
identity<void (*)(const String &,InputArray,std::vector<Rect> &,bool,bool)>::type selectROIs = &cv::selectROIs;
identity<int (*)(const String &,const String &)>::type getTrackbarPos = &cv::getTrackbarPos;
identity<void (*)(const String &,const String &,int)>::type setTrackbarPos = &cv::setTrackbarPos;
identity<void (*)(const String &,const String &,int)>::type setTrackbarMax = &cv::setTrackbarMax;
identity<void (*)(const String &,const String &,int)>::type setTrackbarMin = &cv::setTrackbarMin;
identity<void (*)(const String &)>::type setOpenGlContext = &cv::setOpenGlContext;
identity<void (*)(const String &)>::type updateWindow = &cv::updateWindow;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( fontQt_wrap_obj, cv::fontQt,  4, 6, QtFont (*)(const String &,int,Scalar,int,int,int));
auto fontQt = fontQt_wrap_obj();
identity<void (*)(const Mat &,const String &,Point,const QtFont &)>::type addText0 = &cv::addText;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( addText_wrap_obj1, cv::addText,  7, 9, void (*)(const Mat &,const String &,Point,const String &,int,Scalar,int,int,int));
auto addText1 = addText_wrap_obj1();
auto addText = kaguya::overload(addText0,addText1);
identity<void (*)(const String &,const String &,int)>::type displayOverlay = &cv::displayOverlay;
identity<void (*)(const String &,const String &,int)>::type displayStatusBar = &cv::displayStatusBar;
identity<void (*)(const String &)>::type saveWindowParameters = &cv::saveWindowParameters;
identity<void (*)(const String &)>::type loadWindowParameters = &cv::loadWindowParameters;
identity<void (*)()>::type stopLoop = &cv::stopLoop;
identity<Ptr<LineSegmentDetector> (*)(int,double,double,double,double,double,double,int)>::type createLineSegmentDetector = &cv::createLineSegmentDetector;
identity<Mat (*)(int,double,int)>::type getGaussianKernel = &cv::getGaussianKernel;
identity<void (*)(OutputArray,OutputArray,int,int,int,bool,int)>::type getDerivKernels = &cv::getDerivKernels;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( getGaborKernel_wrap_obj, cv::getGaborKernel,  6, 7, Mat (*)(Size,double,double,double,double,double,int));
auto getGaborKernel = getGaborKernel_wrap_obj();
identity<Scalar (*)()>::type morphologyDefaultBorderValue = &cv::morphologyDefaultBorderValue;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( getStructuringElement_wrap_obj, cv::getStructuringElement,  2, 3, Mat (*)(int,Size,Point));
auto getStructuringElement = getStructuringElement_wrap_obj();
identity<void (*)(InputArray,OutputArray,int)>::type medianBlur = &cv::medianBlur;
identity<void (*)(InputArray,OutputArray,Size,double,double,int)>::type GaussianBlur = &cv::GaussianBlur;
identity<void (*)(InputArray,OutputArray,int,double,double,int)>::type bilateralFilter = &cv::bilateralFilter;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( boxFilter_wrap_obj, cv::boxFilter,  6, 7, void (*)(InputArray,OutputArray,int,Size,Point,bool,int));
auto boxFilter = boxFilter_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( sqrBoxFilter_wrap_obj, cv::sqrBoxFilter,  6, 7, void (*)(InputArray,OutputArray,int,Size,Point,bool,int));
auto sqrBoxFilter = sqrBoxFilter_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( blur_wrap_obj, cv::blur,  4, 5, void (*)(InputArray,OutputArray,Size,Point,int));
auto blur = blur_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( filter2D_wrap_obj, cv::filter2D,  6, 7, void (*)(InputArray,OutputArray,int,InputArray,Point,double,int));
auto filter2D = filter2D_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( sepFilter2D_wrap_obj, cv::sepFilter2D,  7, 8, void (*)(InputArray,OutputArray,int,InputArray,InputArray,Point,double,int));
auto sepFilter2D = sepFilter2D_wrap_obj();
identity<void (*)(InputArray,OutputArray,int,int,int,int,double,double,int)>::type Sobel = &cv::Sobel;
identity<void (*)(InputArray,OutputArray,OutputArray,int,int)>::type spatialGradient = &cv::spatialGradient;
identity<void (*)(InputArray,OutputArray,int,int,int,double,double,int)>::type Scharr = &cv::Scharr;
identity<void (*)(InputArray,OutputArray,int,int,double,double,int)>::type Laplacian = &cv::Laplacian;
identity<void (*)(InputArray,OutputArray,double,double,int,bool)>::type Canny0 = &cv::Canny;
identity<void (*)(InputArray,InputArray,OutputArray,double,double,bool)>::type Canny1 = &cv::Canny;
auto Canny = kaguya::overload(Canny0,Canny1);
identity<void (*)(InputArray,OutputArray,int,int,int)>::type cornerMinEigenVal = &cv::cornerMinEigenVal;
identity<void (*)(InputArray,OutputArray,int,int,double,int)>::type cornerHarris = &cv::cornerHarris;
identity<void (*)(InputArray,OutputArray,int,int,int)>::type cornerEigenValsAndVecs = &cv::cornerEigenValsAndVecs;
identity<void (*)(InputArray,OutputArray,int,int)>::type preCornerDetect = &cv::preCornerDetect;
identity<void (*)(InputArray,InputOutputArray,Size,Size,TermCriteria)>::type cornerSubPix = &cv::cornerSubPix;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( goodFeaturesToTrack_wrap_obj0, cv::goodFeaturesToTrack,  8, 9, void (*)(InputArray,OutputArray,int,double,double,InputArray,int,bool,double));
auto goodFeaturesToTrack0 = goodFeaturesToTrack_wrap_obj0();
identity<void (*)(InputArray,OutputArray,int,double,double,InputArray,int,int,bool,double)>::type goodFeaturesToTrack1 = &cv::goodFeaturesToTrack;
identity<void (*)(InputArray,OutputArray,int,double,double,InputArray,OutputArray,int,int,bool,double)>::type goodFeaturesToTrack2 = &cv::goodFeaturesToTrack;
auto goodFeaturesToTrack = kaguya::overload(goodFeaturesToTrack0,goodFeaturesToTrack1,goodFeaturesToTrack2);
identity<void (*)(InputArray,OutputArray,double,double,int,double,double,double,double)>::type HoughLines = &cv::HoughLines;
identity<void (*)(InputArray,OutputArray,double,double,int,double,double)>::type HoughLinesP = &cv::HoughLinesP;
identity<void (*)(InputArray,OutputArray,int,int,double,double,double,double,double,double)>::type HoughLinesPointSet = &cv::HoughLinesPointSet;
identity<void (*)(InputArray,OutputArray,int,double,double,double,double,int,int)>::type HoughCircles = &cv::HoughCircles;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( erode_wrap_obj, cv::erode,  5, 7, void (*)(InputArray,OutputArray,InputArray,Point,int,int,const Scalar &));
auto erode = erode_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( dilate_wrap_obj, cv::dilate,  5, 7, void (*)(InputArray,OutputArray,InputArray,Point,int,int,const Scalar &));
auto dilate = dilate_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( morphologyEx_wrap_obj, cv::morphologyEx,  6, 8, void (*)(InputArray,OutputArray,int,InputArray,Point,int,int,const Scalar &));
auto morphologyEx = morphologyEx_wrap_obj();
identity<void (*)(InputArray,OutputArray,Size,double,double,int)>::type resize = &cv::resize;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( warpAffine_wrap_obj, cv::warpAffine,  6, 7, void (*)(InputArray,OutputArray,InputArray,Size,int,int,const Scalar &));
auto warpAffine = warpAffine_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( warpPerspective_wrap_obj, cv::warpPerspective,  6, 7, void (*)(InputArray,OutputArray,InputArray,Size,int,int,const Scalar &));
auto warpPerspective = warpPerspective_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( remap_wrap_obj, cv::remap,  6, 7, void (*)(InputArray,OutputArray,InputArray,InputArray,int,int,const Scalar &));
auto remap = remap_wrap_obj();
identity<void (*)(InputArray,InputArray,OutputArray,OutputArray,int,bool)>::type convertMaps = &cv::convertMaps;
identity<Mat (*)(Point2f,double,double)>::type getRotationMatrix2D0 = &cv::getRotationMatrix2D;
identity<Mat (*)(Point2f,double,double)>::type getRotationMatrix2D1 = &cv::getRotationMatrix2D;
auto getRotationMatrix2D = kaguya::overload(getRotationMatrix2D0,getRotationMatrix2D1);
identity<Matx23d (*)(Point2f,double,double)>::type getRotationMatrix2D_ = &cv::getRotationMatrix2D_;
identity<Mat (*)(const Point2f[],const Point2f[])>::type getAffineTransform0 = &cv::getAffineTransform;
identity<Mat (*)(InputArray,InputArray)>::type getAffineTransform1 = &cv::getAffineTransform;
auto getAffineTransform = kaguya::overload(getAffineTransform0,getAffineTransform1);
identity<void (*)(InputArray,OutputArray)>::type invertAffineTransform = &cv::invertAffineTransform;
identity<Mat (*)(InputArray,InputArray,int)>::type getPerspectiveTransform0 = &cv::getPerspectiveTransform;
identity<Mat (*)(const Point2f[],const Point2f[],int)>::type getPerspectiveTransform1 = &cv::getPerspectiveTransform;
auto getPerspectiveTransform = kaguya::overload(getPerspectiveTransform0,getPerspectiveTransform1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( getRectSubPix_wrap_obj, cv::getRectSubPix,  4, 5, void (*)(InputArray,Size,Point2f,OutputArray,int));
auto getRectSubPix = getRectSubPix_wrap_obj();
identity<void (*)(InputArray,OutputArray,Point2f,double,int)>::type logPolar = &cv::logPolar;
identity<void (*)(InputArray,OutputArray,Point2f,double,int)>::type linearPolar = &cv::linearPolar;
identity<void (*)(InputArray,OutputArray,Size,Point2f,double,int)>::type warpPolar = &cv::warpPolar;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( integral_wrap_obj0, cv::integral,  4, 6, void (*)(InputArray,OutputArray,OutputArray,OutputArray,int,int));
auto integral0 = integral_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( integral_wrap_obj1, cv::integral,  2, 3, void (*)(InputArray,OutputArray,int));
auto integral1 = integral_wrap_obj1();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( integral_wrap_obj2, cv::integral,  3, 5, void (*)(InputArray,OutputArray,OutputArray,int,int));
auto integral2 = integral_wrap_obj2();
auto integral = kaguya::overload(integral0,integral1,integral2);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( accumulate_wrap_obj, cv::accumulate,  2, 3, void (*)(InputArray,InputOutputArray,InputArray));
auto accumulate = accumulate_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( accumulateSquare_wrap_obj, cv::accumulateSquare,  2, 3, void (*)(InputArray,InputOutputArray,InputArray));
auto accumulateSquare = accumulateSquare_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( accumulateProduct_wrap_obj, cv::accumulateProduct,  3, 4, void (*)(InputArray,InputArray,InputOutputArray,InputArray));
auto accumulateProduct = accumulateProduct_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( accumulateWeighted_wrap_obj, cv::accumulateWeighted,  3, 4, void (*)(InputArray,InputOutputArray,double,InputArray));
auto accumulateWeighted = accumulateWeighted_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( phaseCorrelate_wrap_obj, cv::phaseCorrelate,  3, 4, Point2d (*)(InputArray,InputArray,InputArray,double *));
auto phaseCorrelate = phaseCorrelate_wrap_obj();
identity<void (*)(OutputArray,Size,int)>::type createHanningWindow = &cv::createHanningWindow;
identity<void (*)(InputArray,InputArray,OutputArray,int,bool)>::type divSpectrums = &cv::divSpectrums;
identity<double (*)(InputArray,OutputArray,double,double,int)>::type threshold = &cv::threshold;
identity<void (*)(InputArray,OutputArray,double,int,int,int,double)>::type adaptiveThreshold = &cv::adaptiveThreshold;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( pyrDown_wrap_obj, cv::pyrDown,  3, 4, void (*)(InputArray,OutputArray,const Size &,int));
auto pyrDown = pyrDown_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( pyrUp_wrap_obj, cv::pyrUp,  3, 4, void (*)(InputArray,OutputArray,const Size &,int));
auto pyrUp = pyrUp_wrap_obj();
identity<void (*)(InputArray,OutputArrayOfArrays,int,int)>::type buildPyramid = &cv::buildPyramid;
identity<void (*)(const Mat *,int,const int *,InputArray,OutputArray,int,const int *,const float **,bool,bool)>::type calcHist0 = &cv::calcHist;
identity<void (*)(const Mat *,int,const int *,InputArray,SparseMat &,int,const int *,const float **,bool,bool)>::type calcHist1 = &cv::calcHist;
identity<void (*)(InputArrayOfArrays,const std::vector<int> &,InputArray,OutputArray,const std::vector<int> &,const std::vector<float> &,bool)>::type calcHist2 = &cv::calcHist;
auto calcHist = kaguya::overload(calcHist0,calcHist1,calcHist2);
identity<void (*)(const Mat *,int,const int *,InputArray,OutputArray,const float **,double,bool)>::type calcBackProject0 = &cv::calcBackProject;
identity<void (*)(const Mat *,int,const int *,const SparseMat &,OutputArray,const float **,double,bool)>::type calcBackProject1 = &cv::calcBackProject;
identity<void (*)(InputArrayOfArrays,const std::vector<int> &,InputArray,OutputArray,const std::vector<float> &,double)>::type calcBackProject2 = &cv::calcBackProject;
auto calcBackProject = kaguya::overload(calcBackProject0,calcBackProject1,calcBackProject2);
identity<double (*)(InputArray,InputArray,int)>::type compareHist0 = &cv::compareHist;
identity<double (*)(const SparseMat &,const SparseMat &,int)>::type compareHist1 = &cv::compareHist;
auto compareHist = kaguya::overload(compareHist0,compareHist1);
identity<void (*)(InputArray,OutputArray)>::type equalizeHist = &cv::equalizeHist;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createCLAHE_wrap_obj, cv::createCLAHE,  1, 2, Ptr<CLAHE> (*)(double,Size));
auto createCLAHE = createCLAHE_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( EMD_wrap_obj, cv::EMD,  4, 6, float (*)(InputArray,InputArray,int,InputArray,float *,OutputArray));
auto EMD = EMD_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( wrapperEMD_wrap_obj, cv::wrapperEMD,  3, 6, float (*)(InputArray,InputArray,int,InputArray,Ptr<float>,OutputArray));
auto wrapperEMD = wrapperEMD_wrap_obj();
identity<void (*)(InputArray,InputOutputArray)>::type watershed = &cv::watershed;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( pyrMeanShiftFiltering_wrap_obj, cv::pyrMeanShiftFiltering,  5, 6, void (*)(InputArray,OutputArray,double,double,int,TermCriteria));
auto pyrMeanShiftFiltering = pyrMeanShiftFiltering_wrap_obj();
identity<void (*)(InputArray,InputOutputArray,Rect,InputOutputArray,InputOutputArray,int,int)>::type grabCut = &cv::grabCut;
identity<void (*)(InputArray,OutputArray,OutputArray,int,int,int)>::type distanceTransform0 = &cv::distanceTransform;
identity<void (*)(InputArray,OutputArray,int,int,int)>::type distanceTransform1 = &cv::distanceTransform;
auto distanceTransform = kaguya::overload(distanceTransform0,distanceTransform1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( floodFill_wrap_obj0, cv::floodFill,  6, 8, int (*)(InputOutputArray,InputOutputArray,Point,Scalar,Rect *,Scalar,Scalar,int));
auto floodFill0 = floodFill_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( floodFill_wrap_obj1, cv::floodFill,  5, 7, int (*)(InputOutputArray,Point,Scalar,Rect *,Scalar,Scalar,int));
auto floodFill1 = floodFill_wrap_obj1();
auto floodFill = kaguya::overload(floodFill0,floodFill1);
identity<void (*)(InputArray,InputArray,InputArray,InputArray,OutputArray)>::type blendLinear = &cv::blendLinear;
identity<void (*)(InputArray,OutputArray,int,int)>::type cvtColor = &cv::cvtColor;
identity<void (*)(InputArray,InputArray,OutputArray,int)>::type cvtColorTwoPlane = &cv::cvtColorTwoPlane;
identity<void (*)(InputArray,OutputArray,int,int)>::type demosaicing = &cv::demosaicing;
identity<Moments (*)(InputArray,bool)>::type moments = &cv::moments;
identity<void (*)(const Moments &,double[7])>::type HuMoments0 = &cv::HuMoments;
identity<void (*)(const Moments &,OutputArray)>::type HuMoments1 = &cv::HuMoments;
auto HuMoments = kaguya::overload(HuMoments0,HuMoments1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( matchTemplate_wrap_obj, cv::matchTemplate,  4, 5, void (*)(InputArray,InputArray,OutputArray,int,InputArray));
auto matchTemplate = matchTemplate_wrap_obj();
identity<int (*)(InputArray,OutputArray,int,int,int)>::type connectedComponents0 = &cv::connectedComponents;
identity<int (*)(InputArray,OutputArray,int,int)>::type connectedComponents1 = &cv::connectedComponents;
auto connectedComponents = kaguya::overload(connectedComponents0,connectedComponents1);
identity<int (*)(InputArray,OutputArray,OutputArray,OutputArray,int,int,int)>::type connectedComponentsWithStats0 = &cv::connectedComponentsWithStats;
identity<int (*)(InputArray,OutputArray,OutputArray,OutputArray,int,int)>::type connectedComponentsWithStats1 = &cv::connectedComponentsWithStats;
auto connectedComponentsWithStats = kaguya::overload(connectedComponentsWithStats0,connectedComponentsWithStats1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findContours_wrap_obj0, cv::findContours,  5, 6, void (*)(InputArray,OutputArrayOfArrays,OutputArray,int,int,Point));
auto findContours0 = findContours_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findContours_wrap_obj1, cv::findContours,  4, 5, void (*)(InputArray,OutputArrayOfArrays,int,int,Point));
auto findContours1 = findContours_wrap_obj1();
auto findContours = kaguya::overload(findContours0,findContours1);
identity<void (*)(InputArray,OutputArray,double,bool)>::type approxPolyDP = &cv::approxPolyDP;
identity<double (*)(InputArray,bool)>::type arcLength = &cv::arcLength;
identity<Rect (*)(InputArray)>::type boundingRect = &cv::boundingRect;
identity<double (*)(InputArray,bool)>::type contourArea = &cv::contourArea;
identity<RotatedRect (*)(InputArray)>::type minAreaRect = &cv::minAreaRect;
identity<void (*)(RotatedRect,OutputArray)>::type boxPoints = &cv::boxPoints;
identity<void (*)(InputArray,Point2f &,float &)>::type minEnclosingCircle = &cv::minEnclosingCircle;
identity<double (*)(InputArray,OutputArray)>::type minEnclosingTriangle = &cv::minEnclosingTriangle;
identity<double (*)(InputArray,InputArray,int,double)>::type matchShapes = &cv::matchShapes;
identity<void (*)(InputArray,OutputArray,bool,bool)>::type convexHull = &cv::convexHull;
identity<void (*)(InputArray,InputArray,OutputArray)>::type convexityDefects = &cv::convexityDefects;
identity<bool (*)(InputArray)>::type isContourConvex = &cv::isContourConvex;
identity<float (*)(InputArray,InputArray,OutputArray,bool)>::type intersectConvexConvex = &cv::intersectConvexConvex;
identity<RotatedRect (*)(InputArray)>::type fitEllipse = &cv::fitEllipse;
identity<RotatedRect (*)(InputArray)>::type fitEllipseAMS = &cv::fitEllipseAMS;
identity<RotatedRect (*)(InputArray)>::type fitEllipseDirect = &cv::fitEllipseDirect;
identity<void (*)(InputArray,OutputArray,int,double,double,double)>::type fitLine = &cv::fitLine;
identity<double (*)(InputArray,Point2f,bool)>::type pointPolygonTest = &cv::pointPolygonTest;
identity<int (*)(const RotatedRect &,const RotatedRect &,OutputArray)>::type rotatedRectangleIntersection = &cv::rotatedRectangleIntersection;
identity<Ptr<GeneralizedHoughBallard> (*)()>::type createGeneralizedHoughBallard = &cv::createGeneralizedHoughBallard;
identity<Ptr<GeneralizedHoughGuil> (*)()>::type createGeneralizedHoughGuil = &cv::createGeneralizedHoughGuil;
identity<void (*)(InputArray,OutputArray,int)>::type applyColorMap0 = &cv::applyColorMap;
identity<void (*)(InputArray,OutputArray,InputArray)>::type applyColorMap1 = &cv::applyColorMap;
auto applyColorMap = kaguya::overload(applyColorMap0,applyColorMap1);
identity<void (*)(InputOutputArray,Point,Point,const Scalar &,int,int,int)>::type line = &cv::line;
identity<void (*)(InputOutputArray,Point,Point,const Scalar &,int,int,int,double)>::type arrowedLine = &cv::arrowedLine;
identity<void (*)(InputOutputArray,Point,Point,const Scalar &,int,int,int)>::type rectangle0 = &cv::rectangle;
identity<void (*)(InputOutputArray,Rect,const Scalar &,int,int,int)>::type rectangle1 = &cv::rectangle;
auto rectangle = kaguya::overload(rectangle0,rectangle1);
identity<void (*)(InputOutputArray,Point,int,const Scalar &,int,int,int)>::type circle = &cv::circle;
identity<void (*)(InputOutputArray,Point,Size,double,double,double,const Scalar &,int,int,int)>::type ellipse0 = &cv::ellipse;
identity<void (*)(InputOutputArray,const RotatedRect &,const Scalar &,int,int)>::type ellipse1 = &cv::ellipse;
auto ellipse = kaguya::overload(ellipse0,ellipse1);
identity<void (*)(InputOutputArray,Point,const Scalar &,int,int,int,int)>::type drawMarker = &cv::drawMarker;
identity<void (*)(InputOutputArray,InputArray,const Scalar &,int,int)>::type fillConvexPoly0 = &cv::fillConvexPoly;
identity<void (*)(InputOutputArray,const Point *,int,const Scalar &,int,int)>::type fillConvexPoly1 = &cv::fillConvexPoly;
auto fillConvexPoly = kaguya::overload(fillConvexPoly0,fillConvexPoly1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( fillPoly_wrap_obj0, cv::fillPoly,  5, 6, void (*)(InputOutputArray,InputArrayOfArrays,const Scalar &,int,int,Point));
auto fillPoly0 = fillPoly_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( fillPoly_wrap_obj1, cv::fillPoly,  7, 8, void (*)(InputOutputArray,const Point **,const int *,int,const Scalar &,int,int,Point));
auto fillPoly1 = fillPoly_wrap_obj1();
auto fillPoly = kaguya::overload(fillPoly0,fillPoly1);
identity<void (*)(InputOutputArray,InputArrayOfArrays,bool,const Scalar &,int,int,int)>::type polylines0 = &cv::polylines;
identity<void (*)(InputOutputArray,const Point *const *,const int *,int,bool,const Scalar &,int,int,int)>::type polylines1 = &cv::polylines;
auto polylines = kaguya::overload(polylines0,polylines1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( drawContours_wrap_obj, cv::drawContours,  7, 9, void (*)(InputOutputArray,InputArrayOfArrays,int,const Scalar &,int,int,InputArray,int,Point));
auto drawContours = drawContours_wrap_obj();
identity<bool (*)(Size,Point &,Point &)>::type clipLine0 = &cv::clipLine;
identity<bool (*)(Size2l,Point2l &,Point2l &)>::type clipLine1 = &cv::clipLine;
identity<bool (*)(Rect,Point &,Point &)>::type clipLine2 = &cv::clipLine;
auto clipLine = kaguya::overload(clipLine0,clipLine1,clipLine2);
identity<void (*)(Point,Size,int,int,int,int,std::vector<Point> &)>::type ellipse2Poly0 = &cv::ellipse2Poly;
identity<void (*)(Point2d,Size2d,int,int,int,int,std::vector<Point2d> &)>::type ellipse2Poly1 = &cv::ellipse2Poly;
auto ellipse2Poly = kaguya::overload(ellipse2Poly0,ellipse2Poly1);
identity<void (*)(InputOutputArray,const String &,Point,int,double,Scalar,int,int,bool)>::type putText = &cv::putText;
identity<Size (*)(const String &,int,double,int,int *)>::type getTextSize = &cv::getTextSize;
identity<double (*)(const int,const int,const int)>::type getFontScaleFromHeight = &cv::getFontScaleFromHeight;
identity<void (*)(std::vector<Rect> &,int,double)>::type groupRectangles0 = &cv::groupRectangles;
identity<void (*)(std::vector<Rect> &,std::vector<int> &,int,double)>::type groupRectangles1 = &cv::groupRectangles;
identity<void (*)(std::vector<Rect> &,int,double,std::vector<int> *,std::vector<double> *)>::type groupRectangles2 = &cv::groupRectangles;
identity<void (*)(std::vector<Rect> &,std::vector<int> &,std::vector<double> &,int,double)>::type groupRectangles3 = &cv::groupRectangles;
auto groupRectangles = kaguya::overload(groupRectangles0,groupRectangles1,groupRectangles2,groupRectangles3);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( groupRectangles_meanshift_wrap_obj, cv::groupRectangles_meanshift,  4, 5, void (*)(std::vector<Rect> &,std::vector<double> &,std::vector<double> &,double,Size));
auto groupRectangles_meanshift = groupRectangles_meanshift_wrap_obj();
identity<Ptr<BaseCascadeClassifier::MaskGenerator> (*)()>::type createFaceDetectionMaskGenerator = &cv::createFaceDetectionMaskGenerator;
identity<void (*)(InputArray,InputArray,OutputArray,double,int)>::type inpaint = &cv::inpaint;
identity<void (*)(InputArray,OutputArray,float,int,int)>::type fastNlMeansDenoising0 = &cv::fastNlMeansDenoising;
identity<void (*)(InputArray,OutputArray,const std::vector<float> &,int,int,int)>::type fastNlMeansDenoising1 = &cv::fastNlMeansDenoising;
auto fastNlMeansDenoising = kaguya::overload(fastNlMeansDenoising0,fastNlMeansDenoising1);
identity<void (*)(InputArray,OutputArray,float,float,int,int)>::type fastNlMeansDenoisingColored = &cv::fastNlMeansDenoisingColored;
identity<void (*)(InputArrayOfArrays,OutputArray,int,int,float,int,int)>::type fastNlMeansDenoisingMulti0 = &cv::fastNlMeansDenoisingMulti;
identity<void (*)(InputArrayOfArrays,OutputArray,int,int,const std::vector<float> &,int,int,int)>::type fastNlMeansDenoisingMulti1 = &cv::fastNlMeansDenoisingMulti;
auto fastNlMeansDenoisingMulti = kaguya::overload(fastNlMeansDenoisingMulti0,fastNlMeansDenoisingMulti1);
identity<void (*)(InputArrayOfArrays,OutputArray,int,int,float,float,int,int)>::type fastNlMeansDenoisingColoredMulti = &cv::fastNlMeansDenoisingColoredMulti;
identity<void (*)(const std::vector<Mat> &,Mat &,double,int)>::type denoise_TVL1 = &cv::denoise_TVL1;
identity<Ptr<Tonemap> (*)(float)>::type createTonemap = &cv::createTonemap;
identity<Ptr<TonemapDrago> (*)(float,float,float)>::type createTonemapDrago = &cv::createTonemapDrago;
identity<Ptr<TonemapReinhard> (*)(float,float,float,float)>::type createTonemapReinhard = &cv::createTonemapReinhard;
identity<Ptr<TonemapMantiuk> (*)(float,float,float)>::type createTonemapMantiuk = &cv::createTonemapMantiuk;
identity<Ptr<AlignMTB> (*)(int,int,bool)>::type createAlignMTB = &cv::createAlignMTB;
identity<Ptr<CalibrateDebevec> (*)(int,float,bool)>::type createCalibrateDebevec = &cv::createCalibrateDebevec;
identity<Ptr<CalibrateRobertson> (*)(int,float)>::type createCalibrateRobertson = &cv::createCalibrateRobertson;
identity<Ptr<MergeDebevec> (*)()>::type createMergeDebevec = &cv::createMergeDebevec;
identity<Ptr<MergeMertens> (*)(float,float,float)>::type createMergeMertens = &cv::createMergeMertens;
identity<Ptr<MergeRobertson> (*)()>::type createMergeRobertson = &cv::createMergeRobertson;
identity<void (*)(InputArray,OutputArray,OutputArray)>::type decolor = &cv::decolor;
identity<void (*)(InputArray,InputArray,InputArray,Point,OutputArray,int)>::type seamlessClone = &cv::seamlessClone;
identity<void (*)(InputArray,InputArray,OutputArray,float,float,float)>::type colorChange = &cv::colorChange;
identity<void (*)(InputArray,InputArray,OutputArray,float,float)>::type illuminationChange = &cv::illuminationChange;
identity<void (*)(InputArray,InputArray,OutputArray,float,float,int)>::type textureFlattening = &cv::textureFlattening;
identity<void (*)(InputArray,OutputArray,int,float,float)>::type edgePreservingFilter = &cv::edgePreservingFilter;
identity<void (*)(InputArray,OutputArray,float,float)>::type detailEnhance = &cv::detailEnhance;
identity<void (*)(InputArray,OutputArray,OutputArray,float,float,float)>::type pencilSketch = &cv::pencilSketch;
identity<void (*)(InputArray,OutputArray,float,float)>::type stylization = &cv::stylization;
identity<Ptr<Stitcher> (*)(bool)>::type createStitcher = &cv::createStitcher;
identity<Ptr<Stitcher> (*)(bool)>::type createStitcherScans = &cv::createStitcherScans;
identity<RotatedRect (*)(InputArray,Rect &,TermCriteria)>::type CamShift = &cv::CamShift;
identity<int (*)(InputArray,Rect &,TermCriteria)>::type meanShift = &cv::meanShift;
identity<int (*)(InputArray,OutputArrayOfArrays,Size,int,bool,int,int,bool)>::type buildOpticalFlowPyramid = &cv::buildOpticalFlowPyramid;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( calcOpticalFlowPyrLK_wrap_obj, cv::calcOpticalFlowPyrLK,  9, 11, void (*)(InputArray,InputArray,InputArray,InputOutputArray,OutputArray,OutputArray,Size,int,TermCriteria,int,double));
auto calcOpticalFlowPyrLK = calcOpticalFlowPyrLK_wrap_obj();
identity<void (*)(InputArray,InputArray,InputOutputArray,double,int,int,int,int,double,int)>::type calcOpticalFlowFarneback = &cv::calcOpticalFlowFarneback;
identity<Mat (*)(InputArray,InputArray,bool)>::type estimateRigidTransform = &cv::estimateRigidTransform;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( computeECC_wrap_obj, cv::computeECC,  2, 3, double (*)(InputArray,InputArray,InputArray));
auto computeECC = computeECC_wrap_obj();
identity<double (*)(InputArray,InputArray,InputOutputArray,int,TermCriteria,InputArray,int)>::type findTransformECC0 = &cv::findTransformECC;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findTransformECC_wrap_obj1, cv::findTransformECC,  4, 6, double (*)(InputArray,InputArray,InputOutputArray,int,TermCriteria,InputArray));
auto findTransformECC1 = findTransformECC_wrap_obj1();
auto findTransformECC = kaguya::overload(findTransformECC0,findTransformECC1);
identity<Mat (*)(const String &)>::type readOpticalFlow = &cv::readOpticalFlow;
identity<bool (*)(const String &,InputArray)>::type writeOpticalFlow = &cv::writeOpticalFlow;
identity<Ptr<BackgroundSubtractorMOG2> (*)(int,double,bool)>::type createBackgroundSubtractorMOG2 = &cv::createBackgroundSubtractorMOG2;
identity<Ptr<BackgroundSubtractorKNN> (*)(int,double,bool)>::type createBackgroundSubtractorKNN = &cv::createBackgroundSubtractorKNN;
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_float16_t{
identity<float16_t (*)(ushort)>::type fromBits = &cv::float16_t::fromBits;
identity<float16_t (*)()>::type zero = &cv::float16_t::zero;
identity<ushort (cv::float16_t::*)() const>::type bits = &cv::float16_t::bits;
}// end of namespace float16_t
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_RotatedRect{
identity<void (cv::RotatedRect::*)(Point2f[]) const>::type points = &cv::RotatedRect::points;
identity<Rect (cv::RotatedRect::*)() const>::type boundingRect = &cv::RotatedRect::boundingRect;
identity<Rect_<float> (cv::RotatedRect::*)() const>::type boundingRect2f = &cv::RotatedRect::boundingRect2f;
}// end of namespace RotatedRect
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_KeyPoint{
identity<size_t (cv::KeyPoint::*)() const>::type hash = &cv::KeyPoint::hash;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( convert_wrap_obj0, cv::KeyPoint::convert,  2, 3, void (*)(const std::vector<KeyPoint> &,std::vector<Point2f> &,const std::vector<int> &));
auto convert0 = convert_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( convert_wrap_obj1, cv::KeyPoint::convert,  5, 6, void (*)(const std::vector<Point2f> &,std::vector<KeyPoint> &,float,float,int,int));
auto convert1 = convert_wrap_obj1();
auto convert = kaguya::overload(convert0,convert1);
identity<float (*)(const KeyPoint &,const KeyPoint &)>::type overlap = &cv::KeyPoint::overlap;
}// end of namespace KeyPoint
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_TermCriteria{
identity<bool (cv::TermCriteria::*)() const>::type isValid = &cv::TermCriteria::isValid;
}// end of namespace TermCriteria
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BufferPoolController{
identity<size_t (cv::BufferPoolController::*)() const>::type getReservedSize = &cv::BufferPoolController::getReservedSize;
identity<size_t (cv::BufferPoolController::*)() const>::type getMaxReservedSize = &cv::BufferPoolController::getMaxReservedSize;
identity<void (cv::BufferPoolController::*)(size_t)>::type setMaxReservedSize = &cv::BufferPoolController::setMaxReservedSize;
identity<void (cv::BufferPoolController::*)()>::type freeAllReservedBuffers = &cv::BufferPoolController::freeAllReservedBuffers;
}// end of namespace BufferPoolController
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MatAllocator{
identity<UMatData * (cv::MatAllocator::*)(int,const int *,int,void *,size_t *,AccessFlag,UMatUsageFlags) const>::type allocate0 = &cv::MatAllocator::allocate;
identity<bool (cv::MatAllocator::*)(UMatData *,AccessFlag,UMatUsageFlags) const>::type allocate1 = &cv::MatAllocator::allocate;
auto allocate = kaguya::overload(allocate0,allocate1);
identity<void (cv::MatAllocator::*)(UMatData *) const>::type deallocate = &cv::MatAllocator::deallocate;
identity<void (cv::MatAllocator::*)(UMatData *,AccessFlag) const>::type map = &cv::MatAllocator::map;
identity<void (cv::MatAllocator::*)(UMatData *) const>::type unmap = &cv::MatAllocator::unmap;
identity<void (cv::MatAllocator::*)(UMatData *,void *,int,const size_t[],const size_t[],const size_t[],const size_t[]) const>::type download = &cv::MatAllocator::download;
identity<void (cv::MatAllocator::*)(UMatData *,const void *,int,const size_t[],const size_t[],const size_t[],const size_t[]) const>::type upload = &cv::MatAllocator::upload;
identity<void (cv::MatAllocator::*)(UMatData *,UMatData *,int,const size_t[],const size_t[],const size_t[],const size_t[],const size_t[],bool) const>::type copy = &cv::MatAllocator::copy;
identity<BufferPoolController * (cv::MatAllocator::*)(const char *) const>::type getBufferPoolController = &cv::MatAllocator::getBufferPoolController;
}// end of namespace MatAllocator
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_UMatData{
identity<void (cv::UMatData::*)()>::type lock = &cv::UMatData::lock;
identity<void (cv::UMatData::*)()>::type unlock = &cv::UMatData::unlock;
identity<bool (cv::UMatData::*)() const>::type hostCopyObsolete = &cv::UMatData::hostCopyObsolete;
identity<bool (cv::UMatData::*)() const>::type deviceCopyObsolete = &cv::UMatData::deviceCopyObsolete;
identity<bool (cv::UMatData::*)() const>::type deviceMemMapped = &cv::UMatData::deviceMemMapped;
identity<bool (cv::UMatData::*)() const>::type copyOnMap = &cv::UMatData::copyOnMap;
identity<bool (cv::UMatData::*)() const>::type tempUMat = &cv::UMatData::tempUMat;
identity<bool (cv::UMatData::*)() const>::type tempCopiedUMat = &cv::UMatData::tempCopiedUMat;
identity<void (cv::UMatData::*)(bool)>::type markHostCopyObsolete = &cv::UMatData::markHostCopyObsolete;
identity<void (cv::UMatData::*)(bool)>::type markDeviceCopyObsolete = &cv::UMatData::markDeviceCopyObsolete;
identity<void (cv::UMatData::*)(bool)>::type markDeviceMemMapped = &cv::UMatData::markDeviceMemMapped;
}// end of namespace UMatData
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MatSize{
identity<int (cv::MatSize::*)() const>::type dims = &cv::MatSize::dims;
}// end of namespace MatSize
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_UMat{
identity<Mat (cv::UMat::*)(AccessFlag) const>::type getMat = &cv::UMat::getMat;
identity<UMat (cv::UMat::*)(int) const>::type row = &cv::UMat::row;
identity<UMat (cv::UMat::*)(int) const>::type col = &cv::UMat::col;
identity<UMat (cv::UMat::*)(int,int) const>::type rowRange0 = &cv::UMat::rowRange;
identity<UMat (cv::UMat::*)(const Range &) const>::type rowRange1 = &cv::UMat::rowRange;
auto rowRange = kaguya::overload(rowRange0,rowRange1);
identity<UMat (cv::UMat::*)(int,int) const>::type colRange0 = &cv::UMat::colRange;
identity<UMat (cv::UMat::*)(const Range &) const>::type colRange1 = &cv::UMat::colRange;
auto colRange = kaguya::overload(colRange0,colRange1);
identity<UMat (cv::UMat::*)(int) const>::type diag0 = &cv::UMat::diag;
identity<UMat (*)(const UMat &,UMatUsageFlags)>::type diag1 = &cv::UMat::diag;
identity<UMat (*)(const UMat &)>::type diag2 = &cv::UMat::diag;
auto diag = kaguya::overload(diag0,diag1,diag2);
identity<UMat (cv::UMat::*)() const>::type clone = &cv::UMat::clone;
identity<void (cv::UMat::*)(OutputArray) const>::type copyTo0 = &cv::UMat::copyTo;
identity<void (cv::UMat::*)(OutputArray,InputArray) const>::type copyTo1 = &cv::UMat::copyTo;
auto copyTo = kaguya::overload(copyTo0,copyTo1);
identity<void (cv::UMat::*)(OutputArray,int,double,double) const>::type convertTo = &cv::UMat::convertTo;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( assignTo_wrap_obj , cv::UMat , assignTo,  1, 2, void (cv::UMat::*)(UMat &,int) const);
auto assignTo = assignTo_wrap_obj();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( setTo_wrap_obj , cv::UMat , setTo,  1, 2, UMat & (cv::UMat::*)(InputArray,InputArray));
auto setTo = setTo_wrap_obj();
identity<UMat (cv::UMat::*)(int,int) const>::type reshape0 = &cv::UMat::reshape;
identity<UMat (cv::UMat::*)(int,int,const int *) const>::type reshape1 = &cv::UMat::reshape;
auto reshape = kaguya::overload(reshape0,reshape1);
identity<UMat (cv::UMat::*)() const>::type t = &cv::UMat::t;
identity<UMat (cv::UMat::*)(int) const>::type inv = &cv::UMat::inv;
identity<UMat (cv::UMat::*)(InputArray,double) const>::type mul = &cv::UMat::mul;
identity<double (cv::UMat::*)(InputArray) const>::type dot = &cv::UMat::dot;
identity<UMat (*)(int,int,int,UMatUsageFlags)>::type zeros0 = &cv::UMat::zeros;
identity<UMat (*)(Size,int,UMatUsageFlags)>::type zeros1 = &cv::UMat::zeros;
identity<UMat (*)(int,const int *,int,UMatUsageFlags)>::type zeros2 = &cv::UMat::zeros;
identity<UMat (*)(int,int,int)>::type zeros3 = &cv::UMat::zeros;
identity<UMat (*)(Size,int)>::type zeros4 = &cv::UMat::zeros;
identity<UMat (*)(int,const int *,int)>::type zeros5 = &cv::UMat::zeros;
auto zeros = kaguya::overload(zeros0,zeros1,zeros2,zeros3,zeros4,zeros5);
identity<UMat (*)(int,int,int,UMatUsageFlags)>::type ones0 = &cv::UMat::ones;
identity<UMat (*)(Size,int,UMatUsageFlags)>::type ones1 = &cv::UMat::ones;
identity<UMat (*)(int,const int *,int,UMatUsageFlags)>::type ones2 = &cv::UMat::ones;
identity<UMat (*)(int,int,int)>::type ones3 = &cv::UMat::ones;
identity<UMat (*)(Size,int)>::type ones4 = &cv::UMat::ones;
identity<UMat (*)(int,const int *,int)>::type ones5 = &cv::UMat::ones;
auto ones = kaguya::overload(ones0,ones1,ones2,ones3,ones4,ones5);
identity<UMat (*)(int,int,int,UMatUsageFlags)>::type eye0 = &cv::UMat::eye;
identity<UMat (*)(Size,int,UMatUsageFlags)>::type eye1 = &cv::UMat::eye;
identity<UMat (*)(int,int,int)>::type eye2 = &cv::UMat::eye;
identity<UMat (*)(Size,int)>::type eye3 = &cv::UMat::eye;
auto eye = kaguya::overload(eye0,eye1,eye2,eye3);
identity<void (cv::UMat::*)(int,int,int,UMatUsageFlags)>::type create0 = &cv::UMat::create;
identity<void (cv::UMat::*)(Size,int,UMatUsageFlags)>::type create1 = &cv::UMat::create;
identity<void (cv::UMat::*)(int,const int *,int,UMatUsageFlags)>::type create2 = &cv::UMat::create;
identity<void (cv::UMat::*)(const std::vector<int> &,int,UMatUsageFlags)>::type create3 = &cv::UMat::create;
auto create = kaguya::overload(create0,create1,create2,create3);
identity<void (cv::UMat::*)()>::type addref = &cv::UMat::addref;
identity<void (cv::UMat::*)()>::type release = &cv::UMat::release;
identity<void (cv::UMat::*)()>::type deallocate = &cv::UMat::deallocate;
identity<void (cv::UMat::*)(const UMat &)>::type copySize = &cv::UMat::copySize;
identity<void (cv::UMat::*)(Size &,Point &) const>::type locateROI = &cv::UMat::locateROI;
identity<UMat & (cv::UMat::*)(int,int,int,int)>::type adjustROI = &cv::UMat::adjustROI;
identity<bool (cv::UMat::*)() const>::type isContinuous = &cv::UMat::isContinuous;
identity<bool (cv::UMat::*)() const>::type isSubmatrix = &cv::UMat::isSubmatrix;
identity<size_t (cv::UMat::*)() const>::type elemSize = &cv::UMat::elemSize;
identity<size_t (cv::UMat::*)() const>::type elemSize1 = &cv::UMat::elemSize1;
identity<int (cv::UMat::*)() const>::type type = &cv::UMat::type;
identity<int (cv::UMat::*)() const>::type depth = &cv::UMat::depth;
identity<int (cv::UMat::*)() const>::type channels = &cv::UMat::channels;
identity<bool (cv::UMat::*)() const>::type empty = &cv::UMat::empty;
identity<size_t (cv::UMat::*)() const>::type total = &cv::UMat::total;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( checkVector_wrap_obj , cv::UMat , checkVector,  2, 3, int (cv::UMat::*)(int,int,bool) const);
auto checkVector = checkVector_wrap_obj();
identity<void * (cv::UMat::*)(AccessFlag) const>::type handle = &cv::UMat::handle;
identity<void (cv::UMat::*)(size_t *) const>::type ndoffset = &cv::UMat::ndoffset;
identity<MatAllocator * (*)()>::type getStdAllocator = &cv::UMat::getStdAllocator;
identity<void (cv::UMat::*)()>::type updateContinuityFlag = &cv::UMat::updateContinuityFlag;
}// end of namespace UMat
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_SparseMat{
identity<SparseMat (cv::SparseMat::*)() const>::type clone = &cv::SparseMat::clone;
identity<void (cv::SparseMat::*)(SparseMat &) const>::type copyTo0 = &cv::SparseMat::copyTo;
identity<void (cv::SparseMat::*)(Mat &) const>::type copyTo1 = &cv::SparseMat::copyTo;
auto copyTo = kaguya::overload(copyTo0,copyTo1);
identity<void (cv::SparseMat::*)(SparseMat &,int,double) const>::type convertTo0 = &cv::SparseMat::convertTo;
identity<void (cv::SparseMat::*)(Mat &,int,double,double) const>::type convertTo1 = &cv::SparseMat::convertTo;
auto convertTo = kaguya::overload(convertTo0,convertTo1);
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( assignTo_wrap_obj , cv::SparseMat , assignTo,  1, 2, void (cv::SparseMat::*)(SparseMat &,int) const);
auto assignTo = assignTo_wrap_obj();
identity<void (cv::SparseMat::*)(int,const int *,int)>::type create = &cv::SparseMat::create;
identity<void (cv::SparseMat::*)()>::type clear = &cv::SparseMat::clear;
identity<void (cv::SparseMat::*)()>::type addref = &cv::SparseMat::addref;
identity<void (cv::SparseMat::*)()>::type release = &cv::SparseMat::release;
identity<size_t (cv::SparseMat::*)() const>::type elemSize = &cv::SparseMat::elemSize;
identity<size_t (cv::SparseMat::*)() const>::type elemSize1 = &cv::SparseMat::elemSize1;
identity<int (cv::SparseMat::*)() const>::type type = &cv::SparseMat::type;
identity<int (cv::SparseMat::*)() const>::type depth = &cv::SparseMat::depth;
identity<int (cv::SparseMat::*)() const>::type channels = &cv::SparseMat::channels;
identity<const int * (cv::SparseMat::*)() const>::type size0 = &cv::SparseMat::size;
identity<int (cv::SparseMat::*)(int) const>::type size1 = &cv::SparseMat::size;
auto size = kaguya::overload(size0,size1);
identity<int (cv::SparseMat::*)() const>::type dims = &cv::SparseMat::dims;
identity<size_t (cv::SparseMat::*)() const>::type nzcount = &cv::SparseMat::nzcount;
identity<size_t (cv::SparseMat::*)(int) const>::type hash0 = &cv::SparseMat::hash;
identity<size_t (cv::SparseMat::*)(int,int) const>::type hash1 = &cv::SparseMat::hash;
identity<size_t (cv::SparseMat::*)(int,int,int) const>::type hash2 = &cv::SparseMat::hash;
identity<size_t (cv::SparseMat::*)(const int *) const>::type hash3 = &cv::SparseMat::hash;
auto hash = kaguya::overload(hash0,hash1,hash2,hash3);
identity<uchar * (cv::SparseMat::*)(int,bool,size_t *)>::type ptr0 = &cv::SparseMat::ptr;
identity<uchar * (cv::SparseMat::*)(int,int,bool,size_t *)>::type ptr1 = &cv::SparseMat::ptr;
identity<uchar * (cv::SparseMat::*)(int,int,int,bool,size_t *)>::type ptr2 = &cv::SparseMat::ptr;
identity<uchar * (cv::SparseMat::*)(const int *,bool,size_t *)>::type ptr3 = &cv::SparseMat::ptr;
auto ptr = kaguya::overload(ptr0,ptr1,ptr2,ptr3);
identity<void (cv::SparseMat::*)(int,int,size_t *)>::type erase0 = &cv::SparseMat::erase;
identity<void (cv::SparseMat::*)(int,int,int,size_t *)>::type erase1 = &cv::SparseMat::erase;
identity<void (cv::SparseMat::*)(const int *,size_t *)>::type erase2 = &cv::SparseMat::erase;
auto erase = kaguya::overload(erase0,erase1,erase2);
identity<SparseMatIterator (cv::SparseMat::*)()>::type begin0 = &cv::SparseMat::begin;
identity<SparseMatConstIterator (cv::SparseMat::*)() const>::type begin1 = &cv::SparseMat::begin;
auto begin = kaguya::overload(begin0,begin1);
identity<SparseMatIterator (cv::SparseMat::*)()>::type end0 = &cv::SparseMat::end;
identity<SparseMatConstIterator (cv::SparseMat::*)() const>::type end1 = &cv::SparseMat::end;
auto end = kaguya::overload(end0,end1);
identity<Node * (cv::SparseMat::*)(size_t)>::type node0 = &cv::SparseMat::node;
identity<const Node * (cv::SparseMat::*)(size_t) const>::type node1 = &cv::SparseMat::node;
auto node = kaguya::overload(node0,node1);
identity<uchar * (cv::SparseMat::*)(const int *,size_t)>::type newNode = &cv::SparseMat::newNode;
identity<void (cv::SparseMat::*)(size_t,size_t,size_t)>::type removeNode = &cv::SparseMat::removeNode;
identity<void (cv::SparseMat::*)(size_t)>::type resizeHashTab = &cv::SparseMat::resizeHashTab;
}// end of namespace SparseMat
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MatConstIterator{
identity<Point (cv::MatConstIterator::*)() const>::type pos0 = &cv::MatConstIterator::pos;
identity<void (cv::MatConstIterator::*)(int *) const>::type pos1 = &cv::MatConstIterator::pos;
auto pos = kaguya::overload(pos0,pos1);
identity<ptrdiff_t (cv::MatConstIterator::*)() const>::type lpos = &cv::MatConstIterator::lpos;
identity<void (cv::MatConstIterator::*)(ptrdiff_t,bool)>::type seek0 = &cv::MatConstIterator::seek;
identity<void (cv::MatConstIterator::*)(const int *,bool)>::type seek1 = &cv::MatConstIterator::seek;
auto seek = kaguya::overload(seek0,seek1);
}// end of namespace MatConstIterator
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_SparseMatConstIterator{
identity<const SparseMat::Node * (cv::SparseMatConstIterator::*)() const>::type node = &cv::SparseMatConstIterator::node;
identity<void (cv::SparseMatConstIterator::*)()>::type seekEnd = &cv::SparseMatConstIterator::seekEnd;
}// end of namespace SparseMatConstIterator
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_SparseMatIterator{
identity<SparseMat::Node * (cv::SparseMatIterator::*)() const>::type node = &cv::SparseMatIterator::node;
}// end of namespace SparseMatIterator
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_NAryMatIterator{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( init_wrap_obj , cv::NAryMatIterator , init,  3, 4, void (cv::NAryMatIterator::*)(const Mat **,Mat *,uchar **,int));
auto init = init_wrap_obj();
}// end of namespace NAryMatIterator
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MatOp{
identity<bool (cv::MatOp::*)(const MatExpr &) const>::type elementWise = &cv::MatOp::elementWise;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( assign_wrap_obj , cv::MatOp , assign,  2, 3, void (cv::MatOp::*)(const MatExpr &,Mat &,int) const);
auto assign = assign_wrap_obj();
identity<void (cv::MatOp::*)(const MatExpr &,const Range &,const Range &,MatExpr &) const>::type roi = &cv::MatOp::roi;
identity<void (cv::MatOp::*)(const MatExpr &,int,MatExpr &) const>::type diag = &cv::MatOp::diag;
identity<void (cv::MatOp::*)(const MatExpr &,Mat &) const>::type augAssignAdd = &cv::MatOp::augAssignAdd;
identity<void (cv::MatOp::*)(const MatExpr &,Mat &) const>::type augAssignSubtract = &cv::MatOp::augAssignSubtract;
identity<void (cv::MatOp::*)(const MatExpr &,Mat &) const>::type augAssignMultiply = &cv::MatOp::augAssignMultiply;
identity<void (cv::MatOp::*)(const MatExpr &,Mat &) const>::type augAssignDivide = &cv::MatOp::augAssignDivide;
identity<void (cv::MatOp::*)(const MatExpr &,Mat &) const>::type augAssignAnd = &cv::MatOp::augAssignAnd;
identity<void (cv::MatOp::*)(const MatExpr &,Mat &) const>::type augAssignOr = &cv::MatOp::augAssignOr;
identity<void (cv::MatOp::*)(const MatExpr &,Mat &) const>::type augAssignXor = &cv::MatOp::augAssignXor;
identity<void (cv::MatOp::*)(const MatExpr &,const MatExpr &,MatExpr &) const>::type add0 = &cv::MatOp::add;
identity<void (cv::MatOp::*)(const MatExpr &,const Scalar &,MatExpr &) const>::type add1 = &cv::MatOp::add;
auto add = kaguya::overload(add0,add1);
identity<void (cv::MatOp::*)(const MatExpr &,const MatExpr &,MatExpr &) const>::type subtract0 = &cv::MatOp::subtract;
identity<void (cv::MatOp::*)(const Scalar &,const MatExpr &,MatExpr &) const>::type subtract1 = &cv::MatOp::subtract;
auto subtract = kaguya::overload(subtract0,subtract1);
identity<void (cv::MatOp::*)(const MatExpr &,const MatExpr &,MatExpr &,double) const>::type multiply0 = &cv::MatOp::multiply;
identity<void (cv::MatOp::*)(const MatExpr &,double,MatExpr &) const>::type multiply1 = &cv::MatOp::multiply;
auto multiply = kaguya::overload(multiply0,multiply1);
identity<void (cv::MatOp::*)(const MatExpr &,const MatExpr &,MatExpr &,double) const>::type divide0 = &cv::MatOp::divide;
identity<void (cv::MatOp::*)(double,const MatExpr &,MatExpr &) const>::type divide1 = &cv::MatOp::divide;
auto divide = kaguya::overload(divide0,divide1);
identity<void (cv::MatOp::*)(const MatExpr &,MatExpr &) const>::type abs = &cv::MatOp::abs;
identity<void (cv::MatOp::*)(const MatExpr &,MatExpr &) const>::type transpose = &cv::MatOp::transpose;
identity<void (cv::MatOp::*)(const MatExpr &,const MatExpr &,MatExpr &) const>::type matmul = &cv::MatOp::matmul;
identity<void (cv::MatOp::*)(const MatExpr &,int,MatExpr &) const>::type invert = &cv::MatOp::invert;
identity<Size (cv::MatOp::*)(const MatExpr &) const>::type size = &cv::MatOp::size;
identity<int (cv::MatOp::*)(const MatExpr &) const>::type type = &cv::MatOp::type;
}// end of namespace MatOp
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MatExpr{
identity<Size (cv::MatExpr::*)() const>::type size = &cv::MatExpr::size;
identity<int (cv::MatExpr::*)() const>::type type = &cv::MatExpr::type;
identity<MatExpr (cv::MatExpr::*)(int) const>::type row = &cv::MatExpr::row;
identity<MatExpr (cv::MatExpr::*)(int) const>::type col = &cv::MatExpr::col;
identity<MatExpr (cv::MatExpr::*)(int) const>::type diag = &cv::MatExpr::diag;
identity<MatExpr (cv::MatExpr::*)() const>::type t = &cv::MatExpr::t;
identity<MatExpr (cv::MatExpr::*)(int) const>::type inv = &cv::MatExpr::inv;
identity<MatExpr (cv::MatExpr::*)(const MatExpr &,double) const>::type mul0 = &cv::MatExpr::mul;
identity<MatExpr (cv::MatExpr::*)(const Mat &,double) const>::type mul1 = &cv::MatExpr::mul;
auto mul = kaguya::overload(mul0,mul1);
identity<Mat (cv::MatExpr::*)(const Mat &) const>::type cross = &cv::MatExpr::cross;
identity<double (cv::MatExpr::*)(const Mat &) const>::type dot = &cv::MatExpr::dot;
identity<void (cv::MatExpr::*)(MatExpr &)>::type swap = &cv::MatExpr::swap;
}// end of namespace MatExpr
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_FileStorage{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( open_wrap_obj , cv::FileStorage , open,  2, 3, bool (cv::FileStorage::*)(const String &,int,const String &));
auto open = open_wrap_obj();
identity<bool (cv::FileStorage::*)() const>::type isOpened = &cv::FileStorage::isOpened;
identity<void (cv::FileStorage::*)()>::type release = &cv::FileStorage::release;
identity<String (cv::FileStorage::*)()>::type releaseAndGetString = &cv::FileStorage::releaseAndGetString;
identity<FileNode (cv::FileStorage::*)() const>::type getFirstTopLevelNode = &cv::FileStorage::getFirstTopLevelNode;
identity<FileNode (cv::FileStorage::*)(int) const>::type root = &cv::FileStorage::root;
identity<void (cv::FileStorage::*)(const String &,int)>::type write0 = &cv::FileStorage::write;
identity<void (cv::FileStorage::*)(const String &,double)>::type write1 = &cv::FileStorage::write;
identity<void (cv::FileStorage::*)(const String &,const String &)>::type write2 = &cv::FileStorage::write;
identity<void (cv::FileStorage::*)(const String &,const Mat &)>::type write3 = &cv::FileStorage::write;
identity<void (cv::FileStorage::*)(const String &,const std::vector<String> &)>::type write4 = &cv::FileStorage::write;
auto write = kaguya::overload(write0,write1,write2,write3,write4);
identity<void (cv::FileStorage::*)(const String &,const void *,size_t)>::type writeRaw = &cv::FileStorage::writeRaw;
identity<void (cv::FileStorage::*)(const String &,bool)>::type writeComment = &cv::FileStorage::writeComment;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( startWriteStruct_wrap_obj , cv::FileStorage , startWriteStruct,  2, 3, void (cv::FileStorage::*)(const String &,int,const String &));
auto startWriteStruct = startWriteStruct_wrap_obj();
identity<void (cv::FileStorage::*)()>::type endWriteStruct = &cv::FileStorage::endWriteStruct;
identity<String (*)(const String &)>::type getDefaultObjectName = &cv::FileStorage::getDefaultObjectName;
identity<int (cv::FileStorage::*)() const>::type getFormat = &cv::FileStorage::getFormat;
}// end of namespace FileStorage
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_FileNode{
identity<std::vector<String> (cv::FileNode::*)() const>::type keys = &cv::FileNode::keys;
identity<int (cv::FileNode::*)() const>::type type = &cv::FileNode::type;
identity<bool (cv::FileNode::*)() const>::type empty = &cv::FileNode::empty;
identity<bool (cv::FileNode::*)() const>::type isNone = &cv::FileNode::isNone;
identity<bool (cv::FileNode::*)() const>::type isSeq0 = &cv::FileNode::isSeq;
identity<bool (*)(int)>::type isSeq1 = &cv::FileNode::isSeq;
auto isSeq = kaguya::overload(isSeq0,isSeq1);
identity<bool (cv::FileNode::*)() const>::type isMap0 = &cv::FileNode::isMap;
identity<bool (*)(int)>::type isMap1 = &cv::FileNode::isMap;
auto isMap = kaguya::overload(isMap0,isMap1);
identity<bool (cv::FileNode::*)() const>::type isInt = &cv::FileNode::isInt;
identity<bool (cv::FileNode::*)() const>::type isReal = &cv::FileNode::isReal;
identity<bool (cv::FileNode::*)() const>::type isString = &cv::FileNode::isString;
identity<bool (cv::FileNode::*)() const>::type isNamed = &cv::FileNode::isNamed;
identity<std::string (cv::FileNode::*)() const>::type name = &cv::FileNode::name;
identity<size_t (cv::FileNode::*)() const>::type size = &cv::FileNode::size;
identity<size_t (cv::FileNode::*)() const>::type rawSize = &cv::FileNode::rawSize;
identity<bool (*)(int)>::type isCollection = &cv::FileNode::isCollection;
identity<bool (*)(int)>::type isEmptyCollection = &cv::FileNode::isEmptyCollection;
identity<bool (*)(int)>::type isFlow = &cv::FileNode::isFlow;
identity<uchar * (cv::FileNode::*)()>::type ptr0 = &cv::FileNode::ptr;
identity<const uchar * (cv::FileNode::*)() const>::type ptr1 = &cv::FileNode::ptr;
auto ptr = kaguya::overload(ptr0,ptr1);
identity<FileNodeIterator (cv::FileNode::*)() const>::type begin = &cv::FileNode::begin;
identity<FileNodeIterator (cv::FileNode::*)() const>::type end = &cv::FileNode::end;
identity<void (cv::FileNode::*)(const String &,void *,size_t) const>::type readRaw = &cv::FileNode::readRaw;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( setValue_wrap_obj , cv::FileNode , setValue,  2, 3, void (cv::FileNode::*)(int,const void *,int));
auto setValue = setValue_wrap_obj();
identity<double (cv::FileNode::*)() const>::type real = &cv::FileNode::real;
identity<std::string (cv::FileNode::*)() const>::type string = &cv::FileNode::string;
identity<Mat (cv::FileNode::*)() const>::type mat = &cv::FileNode::mat;
}// end of namespace FileNode
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_FileNodeIterator{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( readRaw_wrap_obj , cv::FileNodeIterator , readRaw,  2, 3, FileNodeIterator & (cv::FileNodeIterator::*)(const String &,void *,size_t));
auto readRaw = readRaw_wrap_obj();
identity<size_t (cv::FileNodeIterator::*)() const>::type remaining = &cv::FileNodeIterator::remaining;
identity<bool (cv::FileNodeIterator::*)(const FileNodeIterator &) const>::type equalTo = &cv::FileNodeIterator::equalTo;
}// end of namespace FileNodeIterator
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_Exception{
identity<const char * (cv::Exception::*)() const>::type what = &cv::Exception::what;
identity<void (cv::Exception::*)()>::type formatMessage = &cv::Exception::formatMessage;
}// end of namespace Exception
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_PCA{
identity<Mat (cv::PCA::*)(InputArray) const>::type project0 = &cv::PCA::project;
identity<void (cv::PCA::*)(InputArray,OutputArray) const>::type project1 = &cv::PCA::project;
auto project = kaguya::overload(project0,project1);
identity<Mat (cv::PCA::*)(InputArray) const>::type backProject0 = &cv::PCA::backProject;
identity<void (cv::PCA::*)(InputArray,OutputArray) const>::type backProject1 = &cv::PCA::backProject;
auto backProject = kaguya::overload(backProject0,backProject1);
identity<void (cv::PCA::*)(FileStorage &) const>::type write = &cv::PCA::write;
identity<void (cv::PCA::*)(const FileNode &)>::type read = &cv::PCA::read;
}// end of namespace PCA
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_LDA{
identity<void (cv::LDA::*)(const String &) const>::type save0 = &cv::LDA::save;
identity<void (cv::LDA::*)(FileStorage &) const>::type save1 = &cv::LDA::save;
auto save = kaguya::overload(save0,save1);
identity<void (cv::LDA::*)(const String &)>::type load0 = &cv::LDA::load;
identity<void (cv::LDA::*)(const FileStorage &)>::type load1 = &cv::LDA::load;
auto load = kaguya::overload(load0,load1);
identity<void (cv::LDA::*)(InputArrayOfArrays,InputArray)>::type compute = &cv::LDA::compute;
identity<Mat (cv::LDA::*)(InputArray)>::type project = &cv::LDA::project;
identity<Mat (cv::LDA::*)(InputArray)>::type reconstruct = &cv::LDA::reconstruct;
identity<Mat (cv::LDA::*)() const>::type eigenvectors = &cv::LDA::eigenvectors;
identity<Mat (cv::LDA::*)() const>::type eigenvalues = &cv::LDA::eigenvalues;
identity<Mat (*)(InputArray,InputArray,InputArray)>::type subspaceProject = &cv::LDA::subspaceProject;
identity<Mat (*)(InputArray,InputArray,InputArray)>::type subspaceReconstruct = &cv::LDA::subspaceReconstruct;
}// end of namespace LDA
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_SVD{
identity<void (*)(InputArray,OutputArray,OutputArray,OutputArray,int)>::type compute0 = &cv::SVD::compute;
identity<void (*)(InputArray,OutputArray,int)>::type compute1 = &cv::SVD::compute;
auto compute = kaguya::overload(compute0,compute1);
identity<void (*)(InputArray,InputArray,InputArray,InputArray,OutputArray)>::type backSubst0 = &cv::SVD::backSubst;
identity<void (cv::SVD::*)(InputArray,OutputArray) const>::type backSubst1 = &cv::SVD::backSubst;
auto backSubst = kaguya::overload(backSubst0,backSubst1);
identity<void (*)(InputArray,OutputArray)>::type solveZ = &cv::SVD::solveZ;
}// end of namespace SVD
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_RNG{
identity<unsigned int (cv::RNG::*)()>::type next = &cv::RNG::next;
identity<int (cv::RNG::*)(int,int)>::type uniform0 = &cv::RNG::uniform;
identity<float (cv::RNG::*)(float,float)>::type uniform1 = &cv::RNG::uniform;
identity<double (cv::RNG::*)(double,double)>::type uniform2 = &cv::RNG::uniform;
auto uniform = kaguya::overload(uniform0,uniform1,uniform2);
identity<void (cv::RNG::*)(InputOutputArray,int,InputArray,InputArray,bool)>::type fill = &cv::RNG::fill;
identity<double (cv::RNG::*)(double)>::type gaussian = &cv::RNG::gaussian;
}// end of namespace RNG
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_RNG_MT19937{
identity<void (cv::RNG_MT19937::*)(unsigned int)>::type seed = &cv::RNG_MT19937::seed;
identity<unsigned int (cv::RNG_MT19937::*)()>::type next = &cv::RNG_MT19937::next;
identity<int (cv::RNG_MT19937::*)(int,int)>::type uniform0 = &cv::RNG_MT19937::uniform;
identity<float (cv::RNG_MT19937::*)(float,float)>::type uniform1 = &cv::RNG_MT19937::uniform;
identity<double (cv::RNG_MT19937::*)(double,double)>::type uniform2 = &cv::RNG_MT19937::uniform;
auto uniform = kaguya::overload(uniform0,uniform1,uniform2);
}// end of namespace RNG_MT19937
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_Formatted{
identity<const char * (cv::Formatted::*)()>::type next = &cv::Formatted::next;
identity<void (cv::Formatted::*)()>::type reset = &cv::Formatted::reset;
}// end of namespace Formatted
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_Formatter{
identity<Ptr<Formatted> (cv::Formatter::*)(const Mat &) const>::type format = &cv::Formatter::format;
identity<void (cv::Formatter::*)(int)>::type set16fPrecision = &cv::Formatter::set16fPrecision;
identity<void (cv::Formatter::*)(int)>::type set32fPrecision = &cv::Formatter::set32fPrecision;
identity<void (cv::Formatter::*)(int)>::type set64fPrecision = &cv::Formatter::set64fPrecision;
identity<void (cv::Formatter::*)(bool)>::type setMultiline = &cv::Formatter::setMultiline;
identity<Ptr<Formatter> (*)(Formatter::FormatType)>::type get = &cv::Formatter::get;
}// end of namespace Formatter
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_Algorithm{
identity<void (cv::Algorithm::*)()>::type clear = &cv::Algorithm::clear;
identity<void (cv::Algorithm::*)(FileStorage &) const>::type write0 = &cv::Algorithm::write;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( write_wrap_obj1 , cv::Algorithm , write,  1, 2, void (cv::Algorithm::*)(const Ptr<FileStorage> &,const String &) const);
auto write1 = write_wrap_obj1();
auto write = kaguya::overload(write0,write1);
identity<void (cv::Algorithm::*)(const FileNode &)>::type read = &cv::Algorithm::read;
identity<bool (cv::Algorithm::*)() const>::type empty = &cv::Algorithm::empty;
identity<void (cv::Algorithm::*)(const String &) const>::type save = &cv::Algorithm::save;
identity<String (cv::Algorithm::*)() const>::type getDefaultName = &cv::Algorithm::getDefaultName;
}// end of namespace Algorithm
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_TickMeter{
identity<void (cv::TickMeter::*)()>::type start = &cv::TickMeter::start;
identity<void (cv::TickMeter::*)()>::type stop = &cv::TickMeter::stop;
identity<int64 (cv::TickMeter::*)() const>::type getTimeTicks = &cv::TickMeter::getTimeTicks;
identity<double (cv::TickMeter::*)() const>::type getTimeMicro = &cv::TickMeter::getTimeMicro;
identity<double (cv::TickMeter::*)() const>::type getTimeMilli = &cv::TickMeter::getTimeMilli;
identity<double (cv::TickMeter::*)() const>::type getTimeSec = &cv::TickMeter::getTimeSec;
identity<int64 (cv::TickMeter::*)() const>::type getCounter = &cv::TickMeter::getCounter;
identity<double (cv::TickMeter::*)() const>::type getFPS = &cv::TickMeter::getFPS;
identity<double (cv::TickMeter::*)() const>::type getAvgTimeSec = &cv::TickMeter::getAvgTimeSec;
identity<double (cv::TickMeter::*)() const>::type getAvgTimeMilli = &cv::TickMeter::getAvgTimeMilli;
identity<void (cv::TickMeter::*)()>::type reset = &cv::TickMeter::reset;
}// end of namespace TickMeter
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_CommandLineParser{
identity<String (cv::CommandLineParser::*)() const>::type getPathToApplication = &cv::CommandLineParser::getPathToApplication;
identity<bool (cv::CommandLineParser::*)(const String &) const>::type has = &cv::CommandLineParser::has;
identity<bool (cv::CommandLineParser::*)() const>::type check = &cv::CommandLineParser::check;
identity<void (cv::CommandLineParser::*)(const String &)>::type about = &cv::CommandLineParser::about;
identity<void (cv::CommandLineParser::*)() const>::type printMessage = &cv::CommandLineParser::printMessage;
identity<void (cv::CommandLineParser::*)() const>::type printErrors = &cv::CommandLineParser::printErrors;
}// end of namespace CommandLineParser
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MinProblemSolver{
identity<Ptr<Function> (cv::MinProblemSolver::*)() const>::type getFunction = &cv::MinProblemSolver::getFunction;
identity<void (cv::MinProblemSolver::*)(const Ptr<Function> &)>::type setFunction = &cv::MinProblemSolver::setFunction;
identity<TermCriteria (cv::MinProblemSolver::*)() const>::type getTermCriteria = &cv::MinProblemSolver::getTermCriteria;
identity<void (cv::MinProblemSolver::*)(const TermCriteria &)>::type setTermCriteria = &cv::MinProblemSolver::setTermCriteria;
identity<double (cv::MinProblemSolver::*)(InputOutputArray)>::type minimize = &cv::MinProblemSolver::minimize;
}// end of namespace MinProblemSolver
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_DownhillSolver{
identity<void (cv::DownhillSolver::*)(OutputArray) const>::type getInitStep = &cv::DownhillSolver::getInitStep;
identity<void (cv::DownhillSolver::*)(InputArray)>::type setInitStep = &cv::DownhillSolver::setInitStep;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::DownhillSolver::create,  0, 3, Ptr<DownhillSolver> (*)(const Ptr<MinProblemSolver::Function> &,InputArray,TermCriteria));
auto create = create_wrap_obj();
}// end of namespace DownhillSolver
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_ConjGradSolver{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::ConjGradSolver::create,  0, 2, Ptr<ConjGradSolver> (*)(const Ptr<MinProblemSolver::Function> &,TermCriteria));
auto create = create_wrap_obj();
}// end of namespace ConjGradSolver
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_KeyPointsFilter{
identity<void (*)(std::vector<KeyPoint> &,Size,int)>::type runByImageBorder = &cv::KeyPointsFilter::runByImageBorder;
identity<void (*)(std::vector<KeyPoint> &,float,float)>::type runByKeypointSize = &cv::KeyPointsFilter::runByKeypointSize;
identity<void (*)(std::vector<KeyPoint> &,const Mat &)>::type runByPixelsMask = &cv::KeyPointsFilter::runByPixelsMask;
identity<void (*)(std::vector<KeyPoint> &)>::type removeDuplicated = &cv::KeyPointsFilter::removeDuplicated;
identity<void (*)(std::vector<KeyPoint> &)>::type removeDuplicatedSorted = &cv::KeyPointsFilter::removeDuplicatedSorted;
identity<void (*)(std::vector<KeyPoint> &,int)>::type retainBest = &cv::KeyPointsFilter::retainBest;
}// end of namespace KeyPointsFilter
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_Feature2D{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detect_wrap_obj0 , cv::Feature2D , detect,  2, 3, void (cv::Feature2D::*)(InputArray,std::vector<KeyPoint> &,InputArray));
auto detect0 = detect_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detect_wrap_obj1 , cv::Feature2D , detect,  2, 3, void (cv::Feature2D::*)(InputArrayOfArrays,std::vector<std::vector<KeyPoint>> &,InputArrayOfArrays));
auto detect1 = detect_wrap_obj1();
auto detect = kaguya::overload(detect0,detect1);
identity<void (cv::Feature2D::*)(InputArray,std::vector<KeyPoint> &,OutputArray)>::type compute0 = &cv::Feature2D::compute;
identity<void (cv::Feature2D::*)(InputArrayOfArrays,std::vector<std::vector<KeyPoint>> &,OutputArrayOfArrays)>::type compute1 = &cv::Feature2D::compute;
auto compute = kaguya::overload(compute0,compute1);
identity<void (cv::Feature2D::*)(InputArray,InputArray,std::vector<KeyPoint> &,OutputArray,bool)>::type detectAndCompute = &cv::Feature2D::detectAndCompute;
identity<int (cv::Feature2D::*)() const>::type descriptorSize = &cv::Feature2D::descriptorSize;
identity<int (cv::Feature2D::*)() const>::type descriptorType = &cv::Feature2D::descriptorType;
identity<int (cv::Feature2D::*)() const>::type defaultNorm = &cv::Feature2D::defaultNorm;
identity<void (cv::Feature2D::*)(const String &) const>::type write0 = &cv::Feature2D::write;
identity<void (cv::Feature2D::*)(FileStorage &) const>::type write1 = &cv::Feature2D::write;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( write_wrap_obj2 , cv::Feature2D , write,  1, 2, void (cv::Feature2D::*)(const Ptr<FileStorage> &,const String &) const);
auto write2 = write_wrap_obj2();
auto write = kaguya::overload(write0,write1,write2);
identity<void (cv::Feature2D::*)(const String &)>::type read0 = &cv::Feature2D::read;
identity<void (cv::Feature2D::*)(const FileNode &)>::type read1 = &cv::Feature2D::read;
auto read = kaguya::overload(read0,read1);
identity<bool (cv::Feature2D::*)() const>::type empty = &cv::Feature2D::empty;
identity<String (cv::Feature2D::*)() const>::type getDefaultName = &cv::Feature2D::getDefaultName;
}// end of namespace Feature2D
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_AffineFeature{
identity<Ptr<AffineFeature> (*)(const Ptr<Feature2D> &,int,int,float,float)>::type create = &cv::AffineFeature::create;
identity<void (cv::AffineFeature::*)(const std::vector<float> &,const std::vector<float> &)>::type setViewParams = &cv::AffineFeature::setViewParams;
identity<void (cv::AffineFeature::*)(std::vector<float> &,std::vector<float> &) const>::type getViewParams = &cv::AffineFeature::getViewParams;
identity<String (cv::AffineFeature::*)() const>::type getDefaultName = &cv::AffineFeature::getDefaultName;
}// end of namespace AffineFeature
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_SIFT{
identity<Ptr<SIFT> (*)(int,int,double,double,double)>::type create0 = &cv::SIFT::create;
identity<Ptr<SIFT> (*)(int,int,double,double,double,int)>::type create1 = &cv::SIFT::create;
auto create = kaguya::overload(create0,create1);
identity<String (cv::SIFT::*)() const>::type getDefaultName = &cv::SIFT::getDefaultName;
}// end of namespace SIFT
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BRISK{
identity<Ptr<BRISK> (*)(int,int,float)>::type create0 = &cv::BRISK::create;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj1, cv::BRISK::create,  4, 5, Ptr<BRISK> (*)(const std::vector<float> &,const std::vector<int> &,float,float,const std::vector<int> &));
auto create1 = create_wrap_obj1();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj2, cv::BRISK::create,  6, 7, Ptr<BRISK> (*)(int,int,const std::vector<float> &,const std::vector<int> &,float,float,const std::vector<int> &));
auto create2 = create_wrap_obj2();
auto create = kaguya::overload(create0,create1,create2);
identity<String (cv::BRISK::*)() const>::type getDefaultName = &cv::BRISK::getDefaultName;
identity<void (cv::BRISK::*)(int)>::type setThreshold = &cv::BRISK::setThreshold;
identity<int (cv::BRISK::*)() const>::type getThreshold = &cv::BRISK::getThreshold;
identity<void (cv::BRISK::*)(int)>::type setOctaves = &cv::BRISK::setOctaves;
identity<int (cv::BRISK::*)() const>::type getOctaves = &cv::BRISK::getOctaves;
}// end of namespace BRISK
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_ORB{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::ORB::create,  8, 9, Ptr<ORB> (*)(int,float,int,int,int,int,ORB::ScoreType,int,int));
auto create = create_wrap_obj();
identity<void (cv::ORB::*)(int)>::type setMaxFeatures = &cv::ORB::setMaxFeatures;
identity<int (cv::ORB::*)() const>::type getMaxFeatures = &cv::ORB::getMaxFeatures;
identity<void (cv::ORB::*)(double)>::type setScaleFactor = &cv::ORB::setScaleFactor;
identity<double (cv::ORB::*)() const>::type getScaleFactor = &cv::ORB::getScaleFactor;
identity<void (cv::ORB::*)(int)>::type setNLevels = &cv::ORB::setNLevels;
identity<int (cv::ORB::*)() const>::type getNLevels = &cv::ORB::getNLevels;
identity<void (cv::ORB::*)(int)>::type setEdgeThreshold = &cv::ORB::setEdgeThreshold;
identity<int (cv::ORB::*)() const>::type getEdgeThreshold = &cv::ORB::getEdgeThreshold;
identity<void (cv::ORB::*)(int)>::type setFirstLevel = &cv::ORB::setFirstLevel;
identity<int (cv::ORB::*)() const>::type getFirstLevel = &cv::ORB::getFirstLevel;
identity<void (cv::ORB::*)(int)>::type setWTA_K = &cv::ORB::setWTA_K;
identity<int (cv::ORB::*)() const>::type getWTA_K = &cv::ORB::getWTA_K;
identity<void (cv::ORB::*)(ORB::ScoreType)>::type setScoreType = &cv::ORB::setScoreType;
identity<ORB::ScoreType (cv::ORB::*)() const>::type getScoreType = &cv::ORB::getScoreType;
identity<void (cv::ORB::*)(int)>::type setPatchSize = &cv::ORB::setPatchSize;
identity<int (cv::ORB::*)() const>::type getPatchSize = &cv::ORB::getPatchSize;
identity<void (cv::ORB::*)(int)>::type setFastThreshold = &cv::ORB::setFastThreshold;
identity<int (cv::ORB::*)() const>::type getFastThreshold = &cv::ORB::getFastThreshold;
identity<String (cv::ORB::*)() const>::type getDefaultName = &cv::ORB::getDefaultName;
}// end of namespace ORB
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MSER{
identity<Ptr<MSER> (*)(int,int,int,double,double,int,double,double,int)>::type create = &cv::MSER::create;
identity<void (cv::MSER::*)(InputArray,std::vector<std::vector<Point>> &,std::vector<Rect> &)>::type detectRegions = &cv::MSER::detectRegions;
identity<void (cv::MSER::*)(int)>::type setDelta = &cv::MSER::setDelta;
identity<int (cv::MSER::*)() const>::type getDelta = &cv::MSER::getDelta;
identity<void (cv::MSER::*)(int)>::type setMinArea = &cv::MSER::setMinArea;
identity<int (cv::MSER::*)() const>::type getMinArea = &cv::MSER::getMinArea;
identity<void (cv::MSER::*)(int)>::type setMaxArea = &cv::MSER::setMaxArea;
identity<int (cv::MSER::*)() const>::type getMaxArea = &cv::MSER::getMaxArea;
identity<void (cv::MSER::*)(bool)>::type setPass2Only = &cv::MSER::setPass2Only;
identity<bool (cv::MSER::*)() const>::type getPass2Only = &cv::MSER::getPass2Only;
identity<String (cv::MSER::*)() const>::type getDefaultName = &cv::MSER::getDefaultName;
}// end of namespace MSER
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_FastFeatureDetector{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::FastFeatureDetector::create,  2, 3, Ptr<FastFeatureDetector> (*)(int,bool,FastFeatureDetector::DetectorType));
auto create = create_wrap_obj();
identity<void (cv::FastFeatureDetector::*)(int)>::type setThreshold = &cv::FastFeatureDetector::setThreshold;
identity<int (cv::FastFeatureDetector::*)() const>::type getThreshold = &cv::FastFeatureDetector::getThreshold;
identity<void (cv::FastFeatureDetector::*)(bool)>::type setNonmaxSuppression = &cv::FastFeatureDetector::setNonmaxSuppression;
identity<bool (cv::FastFeatureDetector::*)() const>::type getNonmaxSuppression = &cv::FastFeatureDetector::getNonmaxSuppression;
identity<void (cv::FastFeatureDetector::*)(FastFeatureDetector::DetectorType)>::type setType = &cv::FastFeatureDetector::setType;
identity<FastFeatureDetector::DetectorType (cv::FastFeatureDetector::*)() const>::type getType = &cv::FastFeatureDetector::getType;
identity<String (cv::FastFeatureDetector::*)() const>::type getDefaultName = &cv::FastFeatureDetector::getDefaultName;
}// end of namespace FastFeatureDetector
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_AgastFeatureDetector{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::AgastFeatureDetector::create,  2, 3, Ptr<AgastFeatureDetector> (*)(int,bool,AgastFeatureDetector::DetectorType));
auto create = create_wrap_obj();
identity<void (cv::AgastFeatureDetector::*)(int)>::type setThreshold = &cv::AgastFeatureDetector::setThreshold;
identity<int (cv::AgastFeatureDetector::*)() const>::type getThreshold = &cv::AgastFeatureDetector::getThreshold;
identity<void (cv::AgastFeatureDetector::*)(bool)>::type setNonmaxSuppression = &cv::AgastFeatureDetector::setNonmaxSuppression;
identity<bool (cv::AgastFeatureDetector::*)() const>::type getNonmaxSuppression = &cv::AgastFeatureDetector::getNonmaxSuppression;
identity<void (cv::AgastFeatureDetector::*)(AgastFeatureDetector::DetectorType)>::type setType = &cv::AgastFeatureDetector::setType;
identity<AgastFeatureDetector::DetectorType (cv::AgastFeatureDetector::*)() const>::type getType = &cv::AgastFeatureDetector::getType;
identity<String (cv::AgastFeatureDetector::*)() const>::type getDefaultName = &cv::AgastFeatureDetector::getDefaultName;
}// end of namespace AgastFeatureDetector
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_GFTTDetector{
identity<Ptr<GFTTDetector> (*)(int,double,double,int,bool,double)>::type create0 = &cv::GFTTDetector::create;
identity<Ptr<GFTTDetector> (*)(int,double,double,int,int,bool,double)>::type create1 = &cv::GFTTDetector::create;
auto create = kaguya::overload(create0,create1);
identity<void (cv::GFTTDetector::*)(int)>::type setMaxFeatures = &cv::GFTTDetector::setMaxFeatures;
identity<int (cv::GFTTDetector::*)() const>::type getMaxFeatures = &cv::GFTTDetector::getMaxFeatures;
identity<void (cv::GFTTDetector::*)(double)>::type setQualityLevel = &cv::GFTTDetector::setQualityLevel;
identity<double (cv::GFTTDetector::*)() const>::type getQualityLevel = &cv::GFTTDetector::getQualityLevel;
identity<void (cv::GFTTDetector::*)(double)>::type setMinDistance = &cv::GFTTDetector::setMinDistance;
identity<double (cv::GFTTDetector::*)() const>::type getMinDistance = &cv::GFTTDetector::getMinDistance;
identity<void (cv::GFTTDetector::*)(int)>::type setBlockSize = &cv::GFTTDetector::setBlockSize;
identity<int (cv::GFTTDetector::*)() const>::type getBlockSize = &cv::GFTTDetector::getBlockSize;
identity<void (cv::GFTTDetector::*)(bool)>::type setHarrisDetector = &cv::GFTTDetector::setHarrisDetector;
identity<bool (cv::GFTTDetector::*)() const>::type getHarrisDetector = &cv::GFTTDetector::getHarrisDetector;
identity<void (cv::GFTTDetector::*)(double)>::type setK = &cv::GFTTDetector::setK;
identity<double (cv::GFTTDetector::*)() const>::type getK = &cv::GFTTDetector::getK;
identity<String (cv::GFTTDetector::*)() const>::type getDefaultName = &cv::GFTTDetector::getDefaultName;
}// end of namespace GFTTDetector
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_SimpleBlobDetector{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::SimpleBlobDetector::create,  0, 1, Ptr<SimpleBlobDetector> (*)(const SimpleBlobDetector::Params &));
auto create = create_wrap_obj();
identity<String (cv::SimpleBlobDetector::*)() const>::type getDefaultName = &cv::SimpleBlobDetector::getDefaultName;
}// end of namespace SimpleBlobDetector
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_KAZE{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::KAZE::create,  5, 6, Ptr<KAZE> (*)(bool,bool,float,int,int,KAZE::DiffusivityType));
auto create = create_wrap_obj();
identity<void (cv::KAZE::*)(bool)>::type setExtended = &cv::KAZE::setExtended;
identity<bool (cv::KAZE::*)() const>::type getExtended = &cv::KAZE::getExtended;
identity<void (cv::KAZE::*)(bool)>::type setUpright = &cv::KAZE::setUpright;
identity<bool (cv::KAZE::*)() const>::type getUpright = &cv::KAZE::getUpright;
identity<void (cv::KAZE::*)(double)>::type setThreshold = &cv::KAZE::setThreshold;
identity<double (cv::KAZE::*)() const>::type getThreshold = &cv::KAZE::getThreshold;
identity<void (cv::KAZE::*)(int)>::type setNOctaves = &cv::KAZE::setNOctaves;
identity<int (cv::KAZE::*)() const>::type getNOctaves = &cv::KAZE::getNOctaves;
identity<void (cv::KAZE::*)(int)>::type setNOctaveLayers = &cv::KAZE::setNOctaveLayers;
identity<int (cv::KAZE::*)() const>::type getNOctaveLayers = &cv::KAZE::getNOctaveLayers;
identity<void (cv::KAZE::*)(KAZE::DiffusivityType)>::type setDiffusivity = &cv::KAZE::setDiffusivity;
identity<KAZE::DiffusivityType (cv::KAZE::*)() const>::type getDiffusivity = &cv::KAZE::getDiffusivity;
identity<String (cv::KAZE::*)() const>::type getDefaultName = &cv::KAZE::getDefaultName;
}// end of namespace KAZE
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_AKAZE{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::AKAZE::create,  5, 7, Ptr<AKAZE> (*)(AKAZE::DescriptorType,int,int,float,int,int,KAZE::DiffusivityType));
auto create = create_wrap_obj();
identity<void (cv::AKAZE::*)(AKAZE::DescriptorType)>::type setDescriptorType = &cv::AKAZE::setDescriptorType;
identity<AKAZE::DescriptorType (cv::AKAZE::*)() const>::type getDescriptorType = &cv::AKAZE::getDescriptorType;
identity<void (cv::AKAZE::*)(int)>::type setDescriptorSize = &cv::AKAZE::setDescriptorSize;
identity<int (cv::AKAZE::*)() const>::type getDescriptorSize = &cv::AKAZE::getDescriptorSize;
identity<void (cv::AKAZE::*)(int)>::type setDescriptorChannels = &cv::AKAZE::setDescriptorChannels;
identity<int (cv::AKAZE::*)() const>::type getDescriptorChannels = &cv::AKAZE::getDescriptorChannels;
identity<void (cv::AKAZE::*)(double)>::type setThreshold = &cv::AKAZE::setThreshold;
identity<double (cv::AKAZE::*)() const>::type getThreshold = &cv::AKAZE::getThreshold;
identity<void (cv::AKAZE::*)(int)>::type setNOctaves = &cv::AKAZE::setNOctaves;
identity<int (cv::AKAZE::*)() const>::type getNOctaves = &cv::AKAZE::getNOctaves;
identity<void (cv::AKAZE::*)(int)>::type setNOctaveLayers = &cv::AKAZE::setNOctaveLayers;
identity<int (cv::AKAZE::*)() const>::type getNOctaveLayers = &cv::AKAZE::getNOctaveLayers;
identity<void (cv::AKAZE::*)(KAZE::DiffusivityType)>::type setDiffusivity = &cv::AKAZE::setDiffusivity;
identity<KAZE::DiffusivityType (cv::AKAZE::*)() const>::type getDiffusivity = &cv::AKAZE::getDiffusivity;
identity<String (cv::AKAZE::*)() const>::type getDefaultName = &cv::AKAZE::getDefaultName;
}// end of namespace AKAZE
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_DescriptorMatcher{
identity<void (cv::DescriptorMatcher::*)(InputArrayOfArrays)>::type add = &cv::DescriptorMatcher::add;
identity<const std::vector<Mat> & (cv::DescriptorMatcher::*)() const>::type getTrainDescriptors = &cv::DescriptorMatcher::getTrainDescriptors;
identity<void (cv::DescriptorMatcher::*)()>::type clear = &cv::DescriptorMatcher::clear;
identity<bool (cv::DescriptorMatcher::*)() const>::type empty = &cv::DescriptorMatcher::empty;
identity<bool (cv::DescriptorMatcher::*)() const>::type isMaskSupported = &cv::DescriptorMatcher::isMaskSupported;
identity<void (cv::DescriptorMatcher::*)()>::type train = &cv::DescriptorMatcher::train;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( match_wrap_obj0 , cv::DescriptorMatcher , match,  3, 4, void (cv::DescriptorMatcher::*)(InputArray,InputArray,std::vector<DMatch> &,InputArray) const);
auto match0 = match_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( match_wrap_obj1 , cv::DescriptorMatcher , match,  2, 3, void (cv::DescriptorMatcher::*)(InputArray,std::vector<DMatch> &,InputArrayOfArrays));
auto match1 = match_wrap_obj1();
auto match = kaguya::overload(match0,match1);
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( knnMatch_wrap_obj0 , cv::DescriptorMatcher , knnMatch,  5, 6, void (cv::DescriptorMatcher::*)(InputArray,InputArray,std::vector<std::vector<DMatch>> &,int,InputArray,bool) const);
auto knnMatch0 = knnMatch_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( knnMatch_wrap_obj1 , cv::DescriptorMatcher , knnMatch,  4, 5, void (cv::DescriptorMatcher::*)(InputArray,std::vector<std::vector<DMatch>> &,int,InputArrayOfArrays,bool));
auto knnMatch1 = knnMatch_wrap_obj1();
auto knnMatch = kaguya::overload(knnMatch0,knnMatch1);
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( radiusMatch_wrap_obj0 , cv::DescriptorMatcher , radiusMatch,  5, 6, void (cv::DescriptorMatcher::*)(InputArray,InputArray,std::vector<std::vector<DMatch>> &,float,InputArray,bool) const);
auto radiusMatch0 = radiusMatch_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( radiusMatch_wrap_obj1 , cv::DescriptorMatcher , radiusMatch,  4, 5, void (cv::DescriptorMatcher::*)(InputArray,std::vector<std::vector<DMatch>> &,float,InputArrayOfArrays,bool));
auto radiusMatch1 = radiusMatch_wrap_obj1();
auto radiusMatch = kaguya::overload(radiusMatch0,radiusMatch1);
identity<void (cv::DescriptorMatcher::*)(const String &) const>::type write0 = &cv::DescriptorMatcher::write;
identity<void (cv::DescriptorMatcher::*)(FileStorage &) const>::type write1 = &cv::DescriptorMatcher::write;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( write_wrap_obj2 , cv::DescriptorMatcher , write,  1, 2, void (cv::DescriptorMatcher::*)(const Ptr<FileStorage> &,const String &) const);
auto write2 = write_wrap_obj2();
auto write = kaguya::overload(write0,write1,write2);
identity<void (cv::DescriptorMatcher::*)(const String &)>::type read0 = &cv::DescriptorMatcher::read;
identity<void (cv::DescriptorMatcher::*)(const FileNode &)>::type read1 = &cv::DescriptorMatcher::read;
auto read = kaguya::overload(read0,read1);
identity<Ptr<DescriptorMatcher> (cv::DescriptorMatcher::*)(bool) const>::type clone = &cv::DescriptorMatcher::clone;
identity<Ptr<DescriptorMatcher> (*)(const String &)>::type create0 = &cv::DescriptorMatcher::create;
identity<Ptr<DescriptorMatcher> (*)(const DescriptorMatcher::MatcherType &)>::type create1 = &cv::DescriptorMatcher::create;
auto create = kaguya::overload(create0,create1);
}// end of namespace DescriptorMatcher
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BFMatcher{
identity<bool (cv::BFMatcher::*)() const>::type isMaskSupported = &cv::BFMatcher::isMaskSupported;
identity<Ptr<BFMatcher> (*)(int,bool)>::type create = &cv::BFMatcher::create;
identity<Ptr<DescriptorMatcher> (cv::BFMatcher::*)(bool) const>::type clone = &cv::BFMatcher::clone;
}// end of namespace BFMatcher
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_FlannBasedMatcher{
identity<void (cv::FlannBasedMatcher::*)(InputArrayOfArrays)>::type add = &cv::FlannBasedMatcher::add;
identity<void (cv::FlannBasedMatcher::*)()>::type clear = &cv::FlannBasedMatcher::clear;
identity<void (cv::FlannBasedMatcher::*)(const FileNode &)>::type read = &cv::FlannBasedMatcher::read;
identity<void (cv::FlannBasedMatcher::*)(FileStorage &) const>::type write = &cv::FlannBasedMatcher::write;
identity<void (cv::FlannBasedMatcher::*)()>::type train = &cv::FlannBasedMatcher::train;
identity<bool (cv::FlannBasedMatcher::*)() const>::type isMaskSupported = &cv::FlannBasedMatcher::isMaskSupported;
identity<Ptr<FlannBasedMatcher> (*)()>::type create = &cv::FlannBasedMatcher::create;
identity<Ptr<DescriptorMatcher> (cv::FlannBasedMatcher::*)(bool) const>::type clone = &cv::FlannBasedMatcher::clone;
}// end of namespace FlannBasedMatcher
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BOWTrainer{
identity<void (cv::BOWTrainer::*)(const Mat &)>::type add = &cv::BOWTrainer::add;
identity<const std::vector<Mat> & (cv::BOWTrainer::*)() const>::type getDescriptors = &cv::BOWTrainer::getDescriptors;
identity<int (cv::BOWTrainer::*)() const>::type descriptorsCount = &cv::BOWTrainer::descriptorsCount;
identity<void (cv::BOWTrainer::*)()>::type clear = &cv::BOWTrainer::clear;
identity<Mat (cv::BOWTrainer::*)() const>::type cluster0 = &cv::BOWTrainer::cluster;
identity<Mat (cv::BOWTrainer::*)(const Mat &) const>::type cluster1 = &cv::BOWTrainer::cluster;
auto cluster = kaguya::overload(cluster0,cluster1);
}// end of namespace BOWTrainer
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BOWKMeansTrainer{
identity<Mat (cv::BOWKMeansTrainer::*)() const>::type cluster0 = &cv::BOWKMeansTrainer::cluster;
identity<Mat (cv::BOWKMeansTrainer::*)(const Mat &) const>::type cluster1 = &cv::BOWKMeansTrainer::cluster;
auto cluster = kaguya::overload(cluster0,cluster1);
}// end of namespace BOWKMeansTrainer
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BOWImgDescriptorExtractor{
identity<void (cv::BOWImgDescriptorExtractor::*)(const Mat &)>::type setVocabulary = &cv::BOWImgDescriptorExtractor::setVocabulary;
identity<const Mat & (cv::BOWImgDescriptorExtractor::*)() const>::type getVocabulary = &cv::BOWImgDescriptorExtractor::getVocabulary;
identity<void (cv::BOWImgDescriptorExtractor::*)(InputArray,std::vector<KeyPoint> &,OutputArray,std::vector<std::vector<int>> *,Mat *)>::type compute0 = &cv::BOWImgDescriptorExtractor::compute;
identity<void (cv::BOWImgDescriptorExtractor::*)(InputArray,OutputArray,std::vector<std::vector<int>> *)>::type compute1 = &cv::BOWImgDescriptorExtractor::compute;
auto compute = kaguya::overload(compute0,compute1);
identity<void (cv::BOWImgDescriptorExtractor::*)(const Mat &,std::vector<KeyPoint> &,Mat &)>::type compute2 = &cv::BOWImgDescriptorExtractor::compute2;
identity<int (cv::BOWImgDescriptorExtractor::*)() const>::type descriptorSize = &cv::BOWImgDescriptorExtractor::descriptorSize;
identity<int (cv::BOWImgDescriptorExtractor::*)() const>::type descriptorType = &cv::BOWImgDescriptorExtractor::descriptorType;
}// end of namespace BOWImgDescriptorExtractor
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_LMSolver{
identity<int (cv::LMSolver::*)(InputOutputArray) const>::type run = &cv::LMSolver::run;
identity<void (cv::LMSolver::*)(int)>::type setMaxIters = &cv::LMSolver::setMaxIters;
identity<int (cv::LMSolver::*)() const>::type getMaxIters = &cv::LMSolver::getMaxIters;
identity<Ptr<LMSolver> (*)(const Ptr<LMSolver::Callback> &,int)>::type create0 = &cv::LMSolver::create;
identity<Ptr<LMSolver> (*)(const Ptr<LMSolver::Callback> &,int,double)>::type create1 = &cv::LMSolver::create;
auto create = kaguya::overload(create0,create1);
}// end of namespace LMSolver
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_StereoMatcher{
identity<void (cv::StereoMatcher::*)(InputArray,InputArray,OutputArray)>::type compute = &cv::StereoMatcher::compute;
identity<int (cv::StereoMatcher::*)() const>::type getMinDisparity = &cv::StereoMatcher::getMinDisparity;
identity<void (cv::StereoMatcher::*)(int)>::type setMinDisparity = &cv::StereoMatcher::setMinDisparity;
identity<int (cv::StereoMatcher::*)() const>::type getNumDisparities = &cv::StereoMatcher::getNumDisparities;
identity<void (cv::StereoMatcher::*)(int)>::type setNumDisparities = &cv::StereoMatcher::setNumDisparities;
identity<int (cv::StereoMatcher::*)() const>::type getBlockSize = &cv::StereoMatcher::getBlockSize;
identity<void (cv::StereoMatcher::*)(int)>::type setBlockSize = &cv::StereoMatcher::setBlockSize;
identity<int (cv::StereoMatcher::*)() const>::type getSpeckleWindowSize = &cv::StereoMatcher::getSpeckleWindowSize;
identity<void (cv::StereoMatcher::*)(int)>::type setSpeckleWindowSize = &cv::StereoMatcher::setSpeckleWindowSize;
identity<int (cv::StereoMatcher::*)() const>::type getSpeckleRange = &cv::StereoMatcher::getSpeckleRange;
identity<void (cv::StereoMatcher::*)(int)>::type setSpeckleRange = &cv::StereoMatcher::setSpeckleRange;
identity<int (cv::StereoMatcher::*)() const>::type getDisp12MaxDiff = &cv::StereoMatcher::getDisp12MaxDiff;
identity<void (cv::StereoMatcher::*)(int)>::type setDisp12MaxDiff = &cv::StereoMatcher::setDisp12MaxDiff;
}// end of namespace StereoMatcher
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_StereoBM{
identity<int (cv::StereoBM::*)() const>::type getPreFilterType = &cv::StereoBM::getPreFilterType;
identity<void (cv::StereoBM::*)(int)>::type setPreFilterType = &cv::StereoBM::setPreFilterType;
identity<int (cv::StereoBM::*)() const>::type getPreFilterSize = &cv::StereoBM::getPreFilterSize;
identity<void (cv::StereoBM::*)(int)>::type setPreFilterSize = &cv::StereoBM::setPreFilterSize;
identity<int (cv::StereoBM::*)() const>::type getPreFilterCap = &cv::StereoBM::getPreFilterCap;
identity<void (cv::StereoBM::*)(int)>::type setPreFilterCap = &cv::StereoBM::setPreFilterCap;
identity<int (cv::StereoBM::*)() const>::type getTextureThreshold = &cv::StereoBM::getTextureThreshold;
identity<void (cv::StereoBM::*)(int)>::type setTextureThreshold = &cv::StereoBM::setTextureThreshold;
identity<int (cv::StereoBM::*)() const>::type getUniquenessRatio = &cv::StereoBM::getUniquenessRatio;
identity<void (cv::StereoBM::*)(int)>::type setUniquenessRatio = &cv::StereoBM::setUniquenessRatio;
identity<int (cv::StereoBM::*)() const>::type getSmallerBlockSize = &cv::StereoBM::getSmallerBlockSize;
identity<void (cv::StereoBM::*)(int)>::type setSmallerBlockSize = &cv::StereoBM::setSmallerBlockSize;
identity<Rect (cv::StereoBM::*)() const>::type getROI1 = &cv::StereoBM::getROI1;
identity<void (cv::StereoBM::*)(Rect)>::type setROI1 = &cv::StereoBM::setROI1;
identity<Rect (cv::StereoBM::*)() const>::type getROI2 = &cv::StereoBM::getROI2;
identity<void (cv::StereoBM::*)(Rect)>::type setROI2 = &cv::StereoBM::setROI2;
identity<Ptr<StereoBM> (*)(int,int)>::type create = &cv::StereoBM::create;
}// end of namespace StereoBM
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_StereoSGBM{
identity<int (cv::StereoSGBM::*)() const>::type getPreFilterCap = &cv::StereoSGBM::getPreFilterCap;
identity<void (cv::StereoSGBM::*)(int)>::type setPreFilterCap = &cv::StereoSGBM::setPreFilterCap;
identity<int (cv::StereoSGBM::*)() const>::type getUniquenessRatio = &cv::StereoSGBM::getUniquenessRatio;
identity<void (cv::StereoSGBM::*)(int)>::type setUniquenessRatio = &cv::StereoSGBM::setUniquenessRatio;
identity<int (cv::StereoSGBM::*)() const>::type getP1 = &cv::StereoSGBM::getP1;
identity<void (cv::StereoSGBM::*)(int)>::type setP1 = &cv::StereoSGBM::setP1;
identity<int (cv::StereoSGBM::*)() const>::type getP2 = &cv::StereoSGBM::getP2;
identity<void (cv::StereoSGBM::*)(int)>::type setP2 = &cv::StereoSGBM::setP2;
identity<int (cv::StereoSGBM::*)() const>::type getMode = &cv::StereoSGBM::getMode;
identity<void (cv::StereoSGBM::*)(int)>::type setMode = &cv::StereoSGBM::setMode;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::StereoSGBM::create,  10, 11, Ptr<StereoSGBM> (*)(int,int,int,int,int,int,int,int,int,int,int));
auto create = create_wrap_obj();
}// end of namespace StereoSGBM
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_AsyncArray{
identity<void (cv::AsyncArray::*)()>::type release = &cv::AsyncArray::release;
identity<void (cv::AsyncArray::*)(OutputArray) const>::type get0 = &cv::AsyncArray::get;
identity<bool (cv::AsyncArray::*)(OutputArray,int64) const>::type get1 = &cv::AsyncArray::get;
identity<bool (cv::AsyncArray::*)(OutputArray,double) const>::type get2 = &cv::AsyncArray::get;
auto get = kaguya::overload(get0,get1,get2);
identity<bool (cv::AsyncArray::*)(int64) const>::type wait_for0 = &cv::AsyncArray::wait_for;
identity<bool (cv::AsyncArray::*)(double) const>::type wait_for1 = &cv::AsyncArray::wait_for;
auto wait_for = kaguya::overload(wait_for0,wait_for1);
identity<bool (cv::AsyncArray::*)() const>::type valid = &cv::AsyncArray::valid;
identity<void * (cv::AsyncArray::*)() const>::type _getImpl = &cv::AsyncArray::_getImpl;
}// end of namespace AsyncArray
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_VideoCapture{
identity<bool (cv::VideoCapture::*)(const String &,int)>::type open0 = &cv::VideoCapture::open;
identity<bool (cv::VideoCapture::*)(const String &,int,const std::vector<int> &)>::type open1 = &cv::VideoCapture::open;
identity<bool (cv::VideoCapture::*)(int,int)>::type open2 = &cv::VideoCapture::open;
identity<bool (cv::VideoCapture::*)(int,int,const std::vector<int> &)>::type open3 = &cv::VideoCapture::open;
auto open = kaguya::overload(open0,open1,open2,open3);
identity<bool (cv::VideoCapture::*)() const>::type isOpened = &cv::VideoCapture::isOpened;
identity<void (cv::VideoCapture::*)()>::type release = &cv::VideoCapture::release;
identity<bool (cv::VideoCapture::*)()>::type grab = &cv::VideoCapture::grab;
identity<bool (cv::VideoCapture::*)(OutputArray,int)>::type retrieve = &cv::VideoCapture::retrieve;
identity<bool (cv::VideoCapture::*)(OutputArray)>::type read = &cv::VideoCapture::read;
identity<bool (cv::VideoCapture::*)(int,double)>::type set = &cv::VideoCapture::set;
identity<double (cv::VideoCapture::*)(int) const>::type get = &cv::VideoCapture::get;
identity<String (cv::VideoCapture::*)() const>::type getBackendName = &cv::VideoCapture::getBackendName;
identity<void (cv::VideoCapture::*)(bool)>::type setExceptionMode = &cv::VideoCapture::setExceptionMode;
identity<bool (cv::VideoCapture::*)()>::type getExceptionMode = &cv::VideoCapture::getExceptionMode;
identity<bool (*)(const std::vector<VideoCapture> &,std::vector<int> &,int64)>::type waitAny = &cv::VideoCapture::waitAny;
}// end of namespace VideoCapture
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_VideoWriter{
identity<bool (cv::VideoWriter::*)(const String &,int,double,Size,bool)>::type open0 = &cv::VideoWriter::open;
identity<bool (cv::VideoWriter::*)(const String &,int,int,double,Size,bool)>::type open1 = &cv::VideoWriter::open;
identity<bool (cv::VideoWriter::*)(const String &,int,double,const Size &,const std::vector<int> &)>::type open2 = &cv::VideoWriter::open;
identity<bool (cv::VideoWriter::*)(const String &,int,int,double,const Size &,const std::vector<int> &)>::type open3 = &cv::VideoWriter::open;
auto open = kaguya::overload(open0,open1,open2,open3);
identity<bool (cv::VideoWriter::*)() const>::type isOpened = &cv::VideoWriter::isOpened;
identity<void (cv::VideoWriter::*)()>::type release = &cv::VideoWriter::release;
identity<void (cv::VideoWriter::*)(InputArray)>::type write = &cv::VideoWriter::write;
identity<bool (cv::VideoWriter::*)(int,double)>::type set = &cv::VideoWriter::set;
identity<double (cv::VideoWriter::*)(int) const>::type get = &cv::VideoWriter::get;
identity<int (*)(char,char,char,char)>::type fourcc = &cv::VideoWriter::fourcc;
identity<String (cv::VideoWriter::*)() const>::type getBackendName = &cv::VideoWriter::getBackendName;
}// end of namespace VideoWriter
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_GeneralizedHough{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( setTemplate_wrap_obj0 , cv::GeneralizedHough , setTemplate,  1, 2, void (cv::GeneralizedHough::*)(InputArray,Point));
auto setTemplate0 = setTemplate_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( setTemplate_wrap_obj1 , cv::GeneralizedHough , setTemplate,  3, 4, void (cv::GeneralizedHough::*)(InputArray,InputArray,InputArray,Point));
auto setTemplate1 = setTemplate_wrap_obj1();
auto setTemplate = kaguya::overload(setTemplate0,setTemplate1);
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detect_wrap_obj0 , cv::GeneralizedHough , detect,  2, 3, void (cv::GeneralizedHough::*)(InputArray,OutputArray,OutputArray));
auto detect0 = detect_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detect_wrap_obj1 , cv::GeneralizedHough , detect,  4, 5, void (cv::GeneralizedHough::*)(InputArray,InputArray,InputArray,OutputArray,OutputArray));
auto detect1 = detect_wrap_obj1();
auto detect = kaguya::overload(detect0,detect1);
identity<void (cv::GeneralizedHough::*)(int)>::type setCannyLowThresh = &cv::GeneralizedHough::setCannyLowThresh;
identity<int (cv::GeneralizedHough::*)() const>::type getCannyLowThresh = &cv::GeneralizedHough::getCannyLowThresh;
identity<void (cv::GeneralizedHough::*)(int)>::type setCannyHighThresh = &cv::GeneralizedHough::setCannyHighThresh;
identity<int (cv::GeneralizedHough::*)() const>::type getCannyHighThresh = &cv::GeneralizedHough::getCannyHighThresh;
identity<void (cv::GeneralizedHough::*)(double)>::type setMinDist = &cv::GeneralizedHough::setMinDist;
identity<double (cv::GeneralizedHough::*)() const>::type getMinDist = &cv::GeneralizedHough::getMinDist;
identity<void (cv::GeneralizedHough::*)(double)>::type setDp = &cv::GeneralizedHough::setDp;
identity<double (cv::GeneralizedHough::*)() const>::type getDp = &cv::GeneralizedHough::getDp;
identity<void (cv::GeneralizedHough::*)(int)>::type setMaxBufferSize = &cv::GeneralizedHough::setMaxBufferSize;
identity<int (cv::GeneralizedHough::*)() const>::type getMaxBufferSize = &cv::GeneralizedHough::getMaxBufferSize;
}// end of namespace GeneralizedHough
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_GeneralizedHoughBallard{
identity<void (cv::GeneralizedHoughBallard::*)(int)>::type setLevels = &cv::GeneralizedHoughBallard::setLevels;
identity<int (cv::GeneralizedHoughBallard::*)() const>::type getLevels = &cv::GeneralizedHoughBallard::getLevels;
identity<void (cv::GeneralizedHoughBallard::*)(int)>::type setVotesThreshold = &cv::GeneralizedHoughBallard::setVotesThreshold;
identity<int (cv::GeneralizedHoughBallard::*)() const>::type getVotesThreshold = &cv::GeneralizedHoughBallard::getVotesThreshold;
}// end of namespace GeneralizedHoughBallard
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_GeneralizedHoughGuil{
identity<void (cv::GeneralizedHoughGuil::*)(double)>::type setXi = &cv::GeneralizedHoughGuil::setXi;
identity<double (cv::GeneralizedHoughGuil::*)() const>::type getXi = &cv::GeneralizedHoughGuil::getXi;
identity<void (cv::GeneralizedHoughGuil::*)(int)>::type setLevels = &cv::GeneralizedHoughGuil::setLevels;
identity<int (cv::GeneralizedHoughGuil::*)() const>::type getLevels = &cv::GeneralizedHoughGuil::getLevels;
identity<void (cv::GeneralizedHoughGuil::*)(double)>::type setAngleEpsilon = &cv::GeneralizedHoughGuil::setAngleEpsilon;
identity<double (cv::GeneralizedHoughGuil::*)() const>::type getAngleEpsilon = &cv::GeneralizedHoughGuil::getAngleEpsilon;
identity<void (cv::GeneralizedHoughGuil::*)(double)>::type setMinAngle = &cv::GeneralizedHoughGuil::setMinAngle;
identity<double (cv::GeneralizedHoughGuil::*)() const>::type getMinAngle = &cv::GeneralizedHoughGuil::getMinAngle;
identity<void (cv::GeneralizedHoughGuil::*)(double)>::type setMaxAngle = &cv::GeneralizedHoughGuil::setMaxAngle;
identity<double (cv::GeneralizedHoughGuil::*)() const>::type getMaxAngle = &cv::GeneralizedHoughGuil::getMaxAngle;
identity<void (cv::GeneralizedHoughGuil::*)(double)>::type setAngleStep = &cv::GeneralizedHoughGuil::setAngleStep;
identity<double (cv::GeneralizedHoughGuil::*)() const>::type getAngleStep = &cv::GeneralizedHoughGuil::getAngleStep;
identity<void (cv::GeneralizedHoughGuil::*)(int)>::type setAngleThresh = &cv::GeneralizedHoughGuil::setAngleThresh;
identity<int (cv::GeneralizedHoughGuil::*)() const>::type getAngleThresh = &cv::GeneralizedHoughGuil::getAngleThresh;
identity<void (cv::GeneralizedHoughGuil::*)(double)>::type setMinScale = &cv::GeneralizedHoughGuil::setMinScale;
identity<double (cv::GeneralizedHoughGuil::*)() const>::type getMinScale = &cv::GeneralizedHoughGuil::getMinScale;
identity<void (cv::GeneralizedHoughGuil::*)(double)>::type setMaxScale = &cv::GeneralizedHoughGuil::setMaxScale;
identity<double (cv::GeneralizedHoughGuil::*)() const>::type getMaxScale = &cv::GeneralizedHoughGuil::getMaxScale;
identity<void (cv::GeneralizedHoughGuil::*)(double)>::type setScaleStep = &cv::GeneralizedHoughGuil::setScaleStep;
identity<double (cv::GeneralizedHoughGuil::*)() const>::type getScaleStep = &cv::GeneralizedHoughGuil::getScaleStep;
identity<void (cv::GeneralizedHoughGuil::*)(int)>::type setScaleThresh = &cv::GeneralizedHoughGuil::setScaleThresh;
identity<int (cv::GeneralizedHoughGuil::*)() const>::type getScaleThresh = &cv::GeneralizedHoughGuil::getScaleThresh;
identity<void (cv::GeneralizedHoughGuil::*)(int)>::type setPosThresh = &cv::GeneralizedHoughGuil::setPosThresh;
identity<int (cv::GeneralizedHoughGuil::*)() const>::type getPosThresh = &cv::GeneralizedHoughGuil::getPosThresh;
}// end of namespace GeneralizedHoughGuil
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_CLAHE{
identity<void (cv::CLAHE::*)(InputArray,OutputArray)>::type apply = &cv::CLAHE::apply;
identity<void (cv::CLAHE::*)(double)>::type setClipLimit = &cv::CLAHE::setClipLimit;
identity<double (cv::CLAHE::*)() const>::type getClipLimit = &cv::CLAHE::getClipLimit;
identity<void (cv::CLAHE::*)(Size)>::type setTilesGridSize = &cv::CLAHE::setTilesGridSize;
identity<Size (cv::CLAHE::*)() const>::type getTilesGridSize = &cv::CLAHE::getTilesGridSize;
identity<void (cv::CLAHE::*)()>::type collectGarbage = &cv::CLAHE::collectGarbage;
}// end of namespace CLAHE
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_Subdiv2D{
identity<void (cv::Subdiv2D::*)(Rect)>::type initDelaunay = &cv::Subdiv2D::initDelaunay;
identity<int (cv::Subdiv2D::*)(Point2f)>::type insert0 = &cv::Subdiv2D::insert;
identity<void (cv::Subdiv2D::*)(const std::vector<Point2f> &)>::type insert1 = &cv::Subdiv2D::insert;
auto insert = kaguya::overload(insert0,insert1);
identity<int (cv::Subdiv2D::*)(Point2f,int &,int &)>::type locate = &cv::Subdiv2D::locate;
identity<int (cv::Subdiv2D::*)(Point2f,Point2f *)>::type findNearest = &cv::Subdiv2D::findNearest;
identity<void (cv::Subdiv2D::*)(std::vector<Vec4f> &) const>::type getEdgeList = &cv::Subdiv2D::getEdgeList;
identity<void (cv::Subdiv2D::*)(std::vector<int> &) const>::type getLeadingEdgeList = &cv::Subdiv2D::getLeadingEdgeList;
identity<void (cv::Subdiv2D::*)(std::vector<Vec6f> &) const>::type getTriangleList = &cv::Subdiv2D::getTriangleList;
identity<void (cv::Subdiv2D::*)(const std::vector<int> &,std::vector<std::vector<Point2f>> &,std::vector<Point2f> &)>::type getVoronoiFacetList = &cv::Subdiv2D::getVoronoiFacetList;
identity<Point2f (cv::Subdiv2D::*)(int,int *) const>::type getVertex = &cv::Subdiv2D::getVertex;
identity<int (cv::Subdiv2D::*)(int,int) const>::type getEdge = &cv::Subdiv2D::getEdge;
identity<int (cv::Subdiv2D::*)(int) const>::type nextEdge = &cv::Subdiv2D::nextEdge;
identity<int (cv::Subdiv2D::*)(int,int) const>::type rotateEdge = &cv::Subdiv2D::rotateEdge;
identity<int (cv::Subdiv2D::*)(int) const>::type symEdge = &cv::Subdiv2D::symEdge;
identity<int (cv::Subdiv2D::*)(int,Point2f *) const>::type edgeOrg = &cv::Subdiv2D::edgeOrg;
identity<int (cv::Subdiv2D::*)(int,Point2f *) const>::type edgeDst = &cv::Subdiv2D::edgeDst;
}// end of namespace Subdiv2D
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_LineSegmentDetector{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detect_wrap_obj , cv::LineSegmentDetector , detect,  2, 5, void (cv::LineSegmentDetector::*)(InputArray,OutputArray,OutputArray,OutputArray,OutputArray));
auto detect = detect_wrap_obj();
identity<void (cv::LineSegmentDetector::*)(InputOutputArray,InputArray)>::type drawSegments = &cv::LineSegmentDetector::drawSegments;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( compareSegments_wrap_obj , cv::LineSegmentDetector , compareSegments,  3, 4, int (cv::LineSegmentDetector::*)(const Size &,InputArray,InputArray,InputOutputArray));
auto compareSegments = compareSegments_wrap_obj();
}// end of namespace LineSegmentDetector
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_LineIterator{
identity<void (cv::LineIterator::*)(const Mat *,Rect,Point,Point,int,bool)>::type init = &cv::LineIterator::init;
identity<Point (cv::LineIterator::*)() const>::type pos = &cv::LineIterator::pos;
}// end of namespace LineIterator
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BaseCascadeClassifier{
identity<bool (cv::BaseCascadeClassifier::*)() const>::type empty = &cv::BaseCascadeClassifier::empty;
identity<bool (cv::BaseCascadeClassifier::*)(const String &)>::type load = &cv::BaseCascadeClassifier::load;
identity<void (cv::BaseCascadeClassifier::*)(InputArray,std::vector<Rect> &,double,int,int,Size,Size)>::type detectMultiScale0 = &cv::BaseCascadeClassifier::detectMultiScale;
identity<void (cv::BaseCascadeClassifier::*)(InputArray,std::vector<Rect> &,std::vector<int> &,double,int,int,Size,Size)>::type detectMultiScale1 = &cv::BaseCascadeClassifier::detectMultiScale;
identity<void (cv::BaseCascadeClassifier::*)(InputArray,std::vector<Rect> &,std::vector<int> &,std::vector<double> &,double,int,int,Size,Size,bool)>::type detectMultiScale2 = &cv::BaseCascadeClassifier::detectMultiScale;
auto detectMultiScale = kaguya::overload(detectMultiScale0,detectMultiScale1,detectMultiScale2);
identity<bool (cv::BaseCascadeClassifier::*)() const>::type isOldFormatCascade = &cv::BaseCascadeClassifier::isOldFormatCascade;
identity<Size (cv::BaseCascadeClassifier::*)() const>::type getOriginalWindowSize = &cv::BaseCascadeClassifier::getOriginalWindowSize;
identity<int (cv::BaseCascadeClassifier::*)() const>::type getFeatureType = &cv::BaseCascadeClassifier::getFeatureType;
identity<void * (cv::BaseCascadeClassifier::*)()>::type getOldCascade = &cv::BaseCascadeClassifier::getOldCascade;
identity<void (cv::BaseCascadeClassifier::*)(const Ptr<MaskGenerator> &)>::type setMaskGenerator = &cv::BaseCascadeClassifier::setMaskGenerator;
identity<Ptr<MaskGenerator> (cv::BaseCascadeClassifier::*)()>::type getMaskGenerator = &cv::BaseCascadeClassifier::getMaskGenerator;
}// end of namespace BaseCascadeClassifier
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_CascadeClassifier{
identity<bool (cv::CascadeClassifier::*)() const>::type empty = &cv::CascadeClassifier::empty;
identity<bool (cv::CascadeClassifier::*)(const String &)>::type load = &cv::CascadeClassifier::load;
identity<bool (cv::CascadeClassifier::*)(const FileNode &)>::type read = &cv::CascadeClassifier::read;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detectMultiScale_wrap_obj0 , cv::CascadeClassifier , detectMultiScale,  5, 7, void (cv::CascadeClassifier::*)(InputArray,std::vector<Rect> &,double,int,int,Size,Size));
auto detectMultiScale0 = detectMultiScale_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detectMultiScale_wrap_obj1 , cv::CascadeClassifier , detectMultiScale,  6, 8, void (cv::CascadeClassifier::*)(InputArray,std::vector<Rect> &,std::vector<int> &,double,int,int,Size,Size));
auto detectMultiScale1 = detectMultiScale_wrap_obj1();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detectMultiScale_wrap_obj2 , cv::CascadeClassifier , detectMultiScale,  8, 10, void (cv::CascadeClassifier::*)(InputArray,std::vector<Rect> &,std::vector<int> &,std::vector<double> &,double,int,int,Size,Size,bool));
auto detectMultiScale2 = detectMultiScale_wrap_obj2();
auto detectMultiScale = kaguya::overload(detectMultiScale0,detectMultiScale1,detectMultiScale2);
identity<bool (cv::CascadeClassifier::*)() const>::type isOldFormatCascade = &cv::CascadeClassifier::isOldFormatCascade;
identity<Size (cv::CascadeClassifier::*)() const>::type getOriginalWindowSize = &cv::CascadeClassifier::getOriginalWindowSize;
identity<int (cv::CascadeClassifier::*)() const>::type getFeatureType = &cv::CascadeClassifier::getFeatureType;
identity<void * (cv::CascadeClassifier::*)()>::type getOldCascade = &cv::CascadeClassifier::getOldCascade;
identity<bool (*)(const String &,const String &)>::type convert = &cv::CascadeClassifier::convert;
identity<void (cv::CascadeClassifier::*)(const Ptr<BaseCascadeClassifier::MaskGenerator> &)>::type setMaskGenerator = &cv::CascadeClassifier::setMaskGenerator;
identity<Ptr<BaseCascadeClassifier::MaskGenerator> (cv::CascadeClassifier::*)()>::type getMaskGenerator = &cv::CascadeClassifier::getMaskGenerator;
}// end of namespace CascadeClassifier
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_HOGDescriptor{
identity<size_t (cv::HOGDescriptor::*)() const>::type getDescriptorSize = &cv::HOGDescriptor::getDescriptorSize;
identity<bool (cv::HOGDescriptor::*)() const>::type checkDetectorSize = &cv::HOGDescriptor::checkDetectorSize;
identity<double (cv::HOGDescriptor::*)() const>::type getWinSigma = &cv::HOGDescriptor::getWinSigma;
identity<void (cv::HOGDescriptor::*)(InputArray)>::type setSVMDetector = &cv::HOGDescriptor::setSVMDetector;
identity<bool (cv::HOGDescriptor::*)(FileNode &)>::type read = &cv::HOGDescriptor::read;
identity<void (cv::HOGDescriptor::*)(FileStorage &,const String &) const>::type write = &cv::HOGDescriptor::write;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( load_wrap_obj , cv::HOGDescriptor , load,  1, 2, bool (cv::HOGDescriptor::*)(const String &,const String &));
auto load = load_wrap_obj();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( save_wrap_obj , cv::HOGDescriptor , save,  1, 2, void (cv::HOGDescriptor::*)(const String &,const String &) const);
auto save = save_wrap_obj();
identity<void (cv::HOGDescriptor::*)(HOGDescriptor &) const>::type copyTo = &cv::HOGDescriptor::copyTo;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( compute_wrap_obj , cv::HOGDescriptor , compute,  2, 5, void (cv::HOGDescriptor::*)(InputArray,std::vector<float> &,Size,Size,const std::vector<Point> &) const);
auto compute = compute_wrap_obj();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detect_wrap_obj0 , cv::HOGDescriptor , detect,  4, 7, void (cv::HOGDescriptor::*)(InputArray,std::vector<Point> &,std::vector<double> &,double,Size,Size,const std::vector<Point> &) const);
auto detect0 = detect_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detect_wrap_obj1 , cv::HOGDescriptor , detect,  3, 6, void (cv::HOGDescriptor::*)(InputArray,std::vector<Point> &,double,Size,Size,const std::vector<Point> &) const);
auto detect1 = detect_wrap_obj1();
auto detect = kaguya::overload(detect0,detect1);
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detectMultiScale_wrap_obj0 , cv::HOGDescriptor , detectMultiScale,  7, 9, void (cv::HOGDescriptor::*)(InputArray,std::vector<Rect> &,std::vector<double> &,double,Size,Size,double,double,bool) const);
auto detectMultiScale0 = detectMultiScale_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detectMultiScale_wrap_obj1 , cv::HOGDescriptor , detectMultiScale,  6, 8, void (cv::HOGDescriptor::*)(InputArray,std::vector<Rect> &,double,Size,Size,double,double,bool) const);
auto detectMultiScale1 = detectMultiScale_wrap_obj1();
auto detectMultiScale = kaguya::overload(detectMultiScale0,detectMultiScale1);
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( computeGradient_wrap_obj , cv::HOGDescriptor , computeGradient,  3, 5, void (cv::HOGDescriptor::*)(InputArray,InputOutputArray,InputOutputArray,Size,Size) const);
auto computeGradient = computeGradient_wrap_obj();
identity<std::vector<float> (*)()>::type getDefaultPeopleDetector = &cv::HOGDescriptor::getDefaultPeopleDetector;
identity<std::vector<float> (*)()>::type getDaimlerPeopleDetector = &cv::HOGDescriptor::getDaimlerPeopleDetector;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detectROI_wrap_obj , cv::HOGDescriptor , detectROI,  5, 7, void (cv::HOGDescriptor::*)(InputArray,const std::vector<cv::Point> &,std::vector<cv::Point> &,std::vector<double> &,double,cv::Size,cv::Size) const);
auto detectROI = detectROI_wrap_obj();
identity<void (cv::HOGDescriptor::*)(InputArray,std::vector<cv::Rect> &,std::vector<DetectionROI> &,double,int) const>::type detectMultiScaleROI = &cv::HOGDescriptor::detectMultiScaleROI;
identity<void (cv::HOGDescriptor::*)(std::vector<cv::Rect> &,std::vector<double> &,int,double) const>::type groupRectangles = &cv::HOGDescriptor::groupRectangles;
}// end of namespace HOGDescriptor
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_QRCodeDetector{
identity<void (cv::QRCodeDetector::*)(double)>::type setEpsX = &cv::QRCodeDetector::setEpsX;
identity<void (cv::QRCodeDetector::*)(double)>::type setEpsY = &cv::QRCodeDetector::setEpsY;
identity<bool (cv::QRCodeDetector::*)(InputArray,OutputArray) const>::type detect = &cv::QRCodeDetector::detect;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( decode_wrap_obj , cv::QRCodeDetector , decode,  2, 3, std::string (cv::QRCodeDetector::*)(InputArray,InputArray,OutputArray));
auto decode = decode_wrap_obj();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( decodeCurved_wrap_obj , cv::QRCodeDetector , decodeCurved,  2, 3, cv::String (cv::QRCodeDetector::*)(InputArray,InputArray,OutputArray));
auto decodeCurved = decodeCurved_wrap_obj();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detectAndDecode_wrap_obj , cv::QRCodeDetector , detectAndDecode,  1, 3, std::string (cv::QRCodeDetector::*)(InputArray,OutputArray,OutputArray));
auto detectAndDecode = detectAndDecode_wrap_obj();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detectAndDecodeCurved_wrap_obj , cv::QRCodeDetector , detectAndDecodeCurved,  1, 3, std::string (cv::QRCodeDetector::*)(InputArray,OutputArray,OutputArray));
auto detectAndDecodeCurved = detectAndDecodeCurved_wrap_obj();
identity<bool (cv::QRCodeDetector::*)(InputArray,OutputArray) const>::type detectMulti = &cv::QRCodeDetector::detectMulti;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( decodeMulti_wrap_obj , cv::QRCodeDetector , decodeMulti,  3, 4, bool (cv::QRCodeDetector::*)(InputArray,InputArray,std::vector<std::string> &,OutputArrayOfArrays) const);
auto decodeMulti = decodeMulti_wrap_obj();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detectAndDecodeMulti_wrap_obj , cv::QRCodeDetector , detectAndDecodeMulti,  2, 4, bool (cv::QRCodeDetector::*)(InputArray,std::vector<std::string> &,OutputArray,OutputArrayOfArrays) const);
auto detectAndDecodeMulti = detectAndDecodeMulti_wrap_obj();
}// end of namespace QRCodeDetector
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_FaceDetectorYN{
identity<void (cv::FaceDetectorYN::*)(const Size &)>::type setInputSize = &cv::FaceDetectorYN::setInputSize;
identity<Size (cv::FaceDetectorYN::*)()>::type getInputSize = &cv::FaceDetectorYN::getInputSize;
identity<void (cv::FaceDetectorYN::*)(float)>::type setScoreThreshold = &cv::FaceDetectorYN::setScoreThreshold;
identity<float (cv::FaceDetectorYN::*)()>::type getScoreThreshold = &cv::FaceDetectorYN::getScoreThreshold;
identity<void (cv::FaceDetectorYN::*)(float)>::type setNMSThreshold = &cv::FaceDetectorYN::setNMSThreshold;
identity<float (cv::FaceDetectorYN::*)()>::type getNMSThreshold = &cv::FaceDetectorYN::getNMSThreshold;
identity<void (cv::FaceDetectorYN::*)(int)>::type setTopK = &cv::FaceDetectorYN::setTopK;
identity<int (cv::FaceDetectorYN::*)()>::type getTopK = &cv::FaceDetectorYN::getTopK;
identity<int (cv::FaceDetectorYN::*)(InputArray,OutputArray)>::type detect = &cv::FaceDetectorYN::detect;
identity<Ptr<FaceDetectorYN> (*)(const String &,const String &,const Size &,float,float,int,int,int)>::type create = &cv::FaceDetectorYN::create;
}// end of namespace FaceDetectorYN
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_FaceRecognizerSF{
identity<void (cv::FaceRecognizerSF::*)(InputArray,InputArray,OutputArray) const>::type alignCrop = &cv::FaceRecognizerSF::alignCrop;
identity<void (cv::FaceRecognizerSF::*)(InputArray,OutputArray)>::type feature = &cv::FaceRecognizerSF::feature;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( match_wrap_obj , cv::FaceRecognizerSF , match,  2, 3, double (cv::FaceRecognizerSF::*)(InputArray,InputArray,int) const);
auto match = match_wrap_obj();
identity<Ptr<FaceRecognizerSF> (*)(const String &,const String &,int,int)>::type create = &cv::FaceRecognizerSF::create;
}// end of namespace FaceRecognizerSF
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_Tonemap{
identity<void (cv::Tonemap::*)(InputArray,OutputArray)>::type process = &cv::Tonemap::process;
identity<float (cv::Tonemap::*)() const>::type getGamma = &cv::Tonemap::getGamma;
identity<void (cv::Tonemap::*)(float)>::type setGamma = &cv::Tonemap::setGamma;
}// end of namespace Tonemap
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_TonemapDrago{
identity<float (cv::TonemapDrago::*)() const>::type getSaturation = &cv::TonemapDrago::getSaturation;
identity<void (cv::TonemapDrago::*)(float)>::type setSaturation = &cv::TonemapDrago::setSaturation;
identity<float (cv::TonemapDrago::*)() const>::type getBias = &cv::TonemapDrago::getBias;
identity<void (cv::TonemapDrago::*)(float)>::type setBias = &cv::TonemapDrago::setBias;
}// end of namespace TonemapDrago
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_TonemapReinhard{
identity<float (cv::TonemapReinhard::*)() const>::type getIntensity = &cv::TonemapReinhard::getIntensity;
identity<void (cv::TonemapReinhard::*)(float)>::type setIntensity = &cv::TonemapReinhard::setIntensity;
identity<float (cv::TonemapReinhard::*)() const>::type getLightAdaptation = &cv::TonemapReinhard::getLightAdaptation;
identity<void (cv::TonemapReinhard::*)(float)>::type setLightAdaptation = &cv::TonemapReinhard::setLightAdaptation;
identity<float (cv::TonemapReinhard::*)() const>::type getColorAdaptation = &cv::TonemapReinhard::getColorAdaptation;
identity<void (cv::TonemapReinhard::*)(float)>::type setColorAdaptation = &cv::TonemapReinhard::setColorAdaptation;
}// end of namespace TonemapReinhard
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_TonemapMantiuk{
identity<float (cv::TonemapMantiuk::*)() const>::type getScale = &cv::TonemapMantiuk::getScale;
identity<void (cv::TonemapMantiuk::*)(float)>::type setScale = &cv::TonemapMantiuk::setScale;
identity<float (cv::TonemapMantiuk::*)() const>::type getSaturation = &cv::TonemapMantiuk::getSaturation;
identity<void (cv::TonemapMantiuk::*)(float)>::type setSaturation = &cv::TonemapMantiuk::setSaturation;
}// end of namespace TonemapMantiuk
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_AlignExposures{
identity<void (cv::AlignExposures::*)(InputArrayOfArrays,std::vector<Mat> &,InputArray,InputArray)>::type process = &cv::AlignExposures::process;
}// end of namespace AlignExposures
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_AlignMTB{
identity<void (cv::AlignMTB::*)(InputArrayOfArrays,std::vector<Mat> &,InputArray,InputArray)>::type process0 = &cv::AlignMTB::process;
identity<void (cv::AlignMTB::*)(InputArrayOfArrays,std::vector<Mat> &)>::type process1 = &cv::AlignMTB::process;
auto process = kaguya::overload(process0,process1);
identity<Point (cv::AlignMTB::*)(InputArray,InputArray)>::type calculateShift = &cv::AlignMTB::calculateShift;
identity<void (cv::AlignMTB::*)(InputArray,OutputArray,const Point)>::type shiftMat = &cv::AlignMTB::shiftMat;
identity<void (cv::AlignMTB::*)(InputArray,OutputArray,OutputArray)>::type computeBitmaps = &cv::AlignMTB::computeBitmaps;
identity<int (cv::AlignMTB::*)() const>::type getMaxBits = &cv::AlignMTB::getMaxBits;
identity<void (cv::AlignMTB::*)(int)>::type setMaxBits = &cv::AlignMTB::setMaxBits;
identity<int (cv::AlignMTB::*)() const>::type getExcludeRange = &cv::AlignMTB::getExcludeRange;
identity<void (cv::AlignMTB::*)(int)>::type setExcludeRange = &cv::AlignMTB::setExcludeRange;
identity<bool (cv::AlignMTB::*)() const>::type getCut = &cv::AlignMTB::getCut;
identity<void (cv::AlignMTB::*)(bool)>::type setCut = &cv::AlignMTB::setCut;
}// end of namespace AlignMTB
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_CalibrateCRF{
identity<void (cv::CalibrateCRF::*)(InputArrayOfArrays,OutputArray,InputArray)>::type process = &cv::CalibrateCRF::process;
}// end of namespace CalibrateCRF
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_CalibrateDebevec{
identity<float (cv::CalibrateDebevec::*)() const>::type getLambda = &cv::CalibrateDebevec::getLambda;
identity<void (cv::CalibrateDebevec::*)(float)>::type setLambda = &cv::CalibrateDebevec::setLambda;
identity<int (cv::CalibrateDebevec::*)() const>::type getSamples = &cv::CalibrateDebevec::getSamples;
identity<void (cv::CalibrateDebevec::*)(int)>::type setSamples = &cv::CalibrateDebevec::setSamples;
identity<bool (cv::CalibrateDebevec::*)() const>::type getRandom = &cv::CalibrateDebevec::getRandom;
identity<void (cv::CalibrateDebevec::*)(bool)>::type setRandom = &cv::CalibrateDebevec::setRandom;
}// end of namespace CalibrateDebevec
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_CalibrateRobertson{
identity<int (cv::CalibrateRobertson::*)() const>::type getMaxIter = &cv::CalibrateRobertson::getMaxIter;
identity<void (cv::CalibrateRobertson::*)(int)>::type setMaxIter = &cv::CalibrateRobertson::setMaxIter;
identity<float (cv::CalibrateRobertson::*)() const>::type getThreshold = &cv::CalibrateRobertson::getThreshold;
identity<void (cv::CalibrateRobertson::*)(float)>::type setThreshold = &cv::CalibrateRobertson::setThreshold;
identity<Mat (cv::CalibrateRobertson::*)() const>::type getRadiance = &cv::CalibrateRobertson::getRadiance;
}// end of namespace CalibrateRobertson
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MergeExposures{
identity<void (cv::MergeExposures::*)(InputArrayOfArrays,OutputArray,InputArray,InputArray)>::type process = &cv::MergeExposures::process;
}// end of namespace MergeExposures
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MergeDebevec{
identity<void (cv::MergeDebevec::*)(InputArrayOfArrays,OutputArray,InputArray,InputArray)>::type process0 = &cv::MergeDebevec::process;
identity<void (cv::MergeDebevec::*)(InputArrayOfArrays,OutputArray,InputArray)>::type process1 = &cv::MergeDebevec::process;
auto process = kaguya::overload(process0,process1);
}// end of namespace MergeDebevec
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MergeMertens{
identity<void (cv::MergeMertens::*)(InputArrayOfArrays,OutputArray,InputArray,InputArray)>::type process0 = &cv::MergeMertens::process;
identity<void (cv::MergeMertens::*)(InputArrayOfArrays,OutputArray)>::type process1 = &cv::MergeMertens::process;
auto process = kaguya::overload(process0,process1);
identity<float (cv::MergeMertens::*)() const>::type getContrastWeight = &cv::MergeMertens::getContrastWeight;
identity<void (cv::MergeMertens::*)(float)>::type setContrastWeight = &cv::MergeMertens::setContrastWeight;
identity<float (cv::MergeMertens::*)() const>::type getSaturationWeight = &cv::MergeMertens::getSaturationWeight;
identity<void (cv::MergeMertens::*)(float)>::type setSaturationWeight = &cv::MergeMertens::setSaturationWeight;
identity<float (cv::MergeMertens::*)() const>::type getExposureWeight = &cv::MergeMertens::getExposureWeight;
identity<void (cv::MergeMertens::*)(float)>::type setExposureWeight = &cv::MergeMertens::setExposureWeight;
}// end of namespace MergeMertens
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MergeRobertson{
identity<void (cv::MergeRobertson::*)(InputArrayOfArrays,OutputArray,InputArray,InputArray)>::type process0 = &cv::MergeRobertson::process;
identity<void (cv::MergeRobertson::*)(InputArrayOfArrays,OutputArray,InputArray)>::type process1 = &cv::MergeRobertson::process;
auto process = kaguya::overload(process0,process1);
}// end of namespace MergeRobertson
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_PyRotationWarper{
identity<Point2f (cv::PyRotationWarper::*)(const Point2f &,InputArray,InputArray)>::type warpPoint = &cv::PyRotationWarper::warpPoint;
identity<Point2f (cv::PyRotationWarper::*)(const Point2f &,InputArray,InputArray)>::type warpPointBackward = &cv::PyRotationWarper::warpPointBackward;
identity<Rect (cv::PyRotationWarper::*)(Size,InputArray,InputArray,OutputArray,OutputArray)>::type buildMaps = &cv::PyRotationWarper::buildMaps;
identity<Point (cv::PyRotationWarper::*)(InputArray,InputArray,InputArray,int,int,OutputArray)>::type warp = &cv::PyRotationWarper::warp;
identity<void (cv::PyRotationWarper::*)(InputArray,InputArray,InputArray,int,int,Size,OutputArray)>::type warpBackward = &cv::PyRotationWarper::warpBackward;
identity<Rect (cv::PyRotationWarper::*)(Size,InputArray,InputArray)>::type warpRoi = &cv::PyRotationWarper::warpRoi;
identity<float (cv::PyRotationWarper::*)() const>::type getScale = &cv::PyRotationWarper::getScale;
identity<void (cv::PyRotationWarper::*)(float)>::type setScale = &cv::PyRotationWarper::setScale;
}// end of namespace PyRotationWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_WarperCreator{
identity<Ptr<detail::RotationWarper> (cv::WarperCreator::*)(float) const>::type create = &cv::WarperCreator::create;
}// end of namespace WarperCreator
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_PlaneWarper{
identity<Ptr<detail::RotationWarper> (cv::PlaneWarper::*)(float) const>::type create = &cv::PlaneWarper::create;
}// end of namespace PlaneWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_AffineWarper{
identity<Ptr<detail::RotationWarper> (cv::AffineWarper::*)(float) const>::type create = &cv::AffineWarper::create;
}// end of namespace AffineWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_CylindricalWarper{
identity<Ptr<detail::RotationWarper> (cv::CylindricalWarper::*)(float) const>::type create = &cv::CylindricalWarper::create;
}// end of namespace CylindricalWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_SphericalWarper{
identity<Ptr<detail::RotationWarper> (cv::SphericalWarper::*)(float) const>::type create = &cv::SphericalWarper::create;
}// end of namespace SphericalWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_FisheyeWarper{
identity<Ptr<detail::RotationWarper> (cv::FisheyeWarper::*)(float) const>::type create = &cv::FisheyeWarper::create;
}// end of namespace FisheyeWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_StereographicWarper{
identity<Ptr<detail::RotationWarper> (cv::StereographicWarper::*)(float) const>::type create = &cv::StereographicWarper::create;
}// end of namespace StereographicWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_CompressedRectilinearWarper{
identity<Ptr<detail::RotationWarper> (cv::CompressedRectilinearWarper::*)(float) const>::type create = &cv::CompressedRectilinearWarper::create;
}// end of namespace CompressedRectilinearWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_CompressedRectilinearPortraitWarper{
identity<Ptr<detail::RotationWarper> (cv::CompressedRectilinearPortraitWarper::*)(float) const>::type create = &cv::CompressedRectilinearPortraitWarper::create;
}// end of namespace CompressedRectilinearPortraitWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_PaniniWarper{
identity<Ptr<detail::RotationWarper> (cv::PaniniWarper::*)(float) const>::type create = &cv::PaniniWarper::create;
}// end of namespace PaniniWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_PaniniPortraitWarper{
identity<Ptr<detail::RotationWarper> (cv::PaniniPortraitWarper::*)(float) const>::type create = &cv::PaniniPortraitWarper::create;
}// end of namespace PaniniPortraitWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MercatorWarper{
identity<Ptr<detail::RotationWarper> (cv::MercatorWarper::*)(float) const>::type create = &cv::MercatorWarper::create;
}// end of namespace MercatorWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_TransverseMercatorWarper{
identity<Ptr<detail::RotationWarper> (cv::TransverseMercatorWarper::*)(float) const>::type create = &cv::TransverseMercatorWarper::create;
}// end of namespace TransverseMercatorWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_Stitcher{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::Stitcher::create,  0, 1, Ptr<Stitcher> (*)(Mode));
auto create = create_wrap_obj();
identity<double (cv::Stitcher::*)() const>::type registrationResol = &cv::Stitcher::registrationResol;
identity<void (cv::Stitcher::*)(double)>::type setRegistrationResol = &cv::Stitcher::setRegistrationResol;
identity<double (cv::Stitcher::*)() const>::type seamEstimationResol = &cv::Stitcher::seamEstimationResol;
identity<void (cv::Stitcher::*)(double)>::type setSeamEstimationResol = &cv::Stitcher::setSeamEstimationResol;
identity<double (cv::Stitcher::*)() const>::type compositingResol = &cv::Stitcher::compositingResol;
identity<void (cv::Stitcher::*)(double)>::type setCompositingResol = &cv::Stitcher::setCompositingResol;
identity<double (cv::Stitcher::*)() const>::type panoConfidenceThresh = &cv::Stitcher::panoConfidenceThresh;
identity<void (cv::Stitcher::*)(double)>::type setPanoConfidenceThresh = &cv::Stitcher::setPanoConfidenceThresh;
identity<bool (cv::Stitcher::*)() const>::type waveCorrection = &cv::Stitcher::waveCorrection;
identity<void (cv::Stitcher::*)(bool)>::type setWaveCorrection = &cv::Stitcher::setWaveCorrection;
identity<InterpolationFlags (cv::Stitcher::*)() const>::type interpolationFlags = &cv::Stitcher::interpolationFlags;
identity<void (cv::Stitcher::*)(InterpolationFlags)>::type setInterpolationFlags = &cv::Stitcher::setInterpolationFlags;
identity<detail::WaveCorrectKind (cv::Stitcher::*)() const>::type waveCorrectKind = &cv::Stitcher::waveCorrectKind;
identity<void (cv::Stitcher::*)(detail::WaveCorrectKind)>::type setWaveCorrectKind = &cv::Stitcher::setWaveCorrectKind;
identity<Ptr<Feature2D> (cv::Stitcher::*)()>::type featuresFinder0 = &cv::Stitcher::featuresFinder;
identity<const Ptr<Feature2D> (cv::Stitcher::*)() const>::type featuresFinder1 = &cv::Stitcher::featuresFinder;
auto featuresFinder = kaguya::overload(featuresFinder0,featuresFinder1);
identity<void (cv::Stitcher::*)(Ptr<Feature2D>)>::type setFeaturesFinder = &cv::Stitcher::setFeaturesFinder;
identity<Ptr<detail::FeaturesMatcher> (cv::Stitcher::*)()>::type featuresMatcher0 = &cv::Stitcher::featuresMatcher;
identity<const Ptr<detail::FeaturesMatcher> (cv::Stitcher::*)() const>::type featuresMatcher1 = &cv::Stitcher::featuresMatcher;
auto featuresMatcher = kaguya::overload(featuresMatcher0,featuresMatcher1);
identity<void (cv::Stitcher::*)(Ptr<detail::FeaturesMatcher>)>::type setFeaturesMatcher = &cv::Stitcher::setFeaturesMatcher;
identity<const cv::UMat & (cv::Stitcher::*)() const>::type matchingMask = &cv::Stitcher::matchingMask;
identity<void (cv::Stitcher::*)(const cv::UMat &)>::type setMatchingMask = &cv::Stitcher::setMatchingMask;
identity<Ptr<detail::BundleAdjusterBase> (cv::Stitcher::*)()>::type bundleAdjuster0 = &cv::Stitcher::bundleAdjuster;
identity<const Ptr<detail::BundleAdjusterBase> (cv::Stitcher::*)() const>::type bundleAdjuster1 = &cv::Stitcher::bundleAdjuster;
auto bundleAdjuster = kaguya::overload(bundleAdjuster0,bundleAdjuster1);
identity<void (cv::Stitcher::*)(Ptr<detail::BundleAdjusterBase>)>::type setBundleAdjuster = &cv::Stitcher::setBundleAdjuster;
identity<Ptr<detail::Estimator> (cv::Stitcher::*)()>::type estimator0 = &cv::Stitcher::estimator;
identity<const Ptr<detail::Estimator> (cv::Stitcher::*)() const>::type estimator1 = &cv::Stitcher::estimator;
auto estimator = kaguya::overload(estimator0,estimator1);
identity<void (cv::Stitcher::*)(Ptr<detail::Estimator>)>::type setEstimator = &cv::Stitcher::setEstimator;
identity<Ptr<WarperCreator> (cv::Stitcher::*)()>::type warper0 = &cv::Stitcher::warper;
identity<const Ptr<WarperCreator> (cv::Stitcher::*)() const>::type warper1 = &cv::Stitcher::warper;
auto warper = kaguya::overload(warper0,warper1);
identity<void (cv::Stitcher::*)(Ptr<WarperCreator>)>::type setWarper = &cv::Stitcher::setWarper;
identity<Ptr<detail::ExposureCompensator> (cv::Stitcher::*)()>::type exposureCompensator0 = &cv::Stitcher::exposureCompensator;
identity<const Ptr<detail::ExposureCompensator> (cv::Stitcher::*)() const>::type exposureCompensator1 = &cv::Stitcher::exposureCompensator;
auto exposureCompensator = kaguya::overload(exposureCompensator0,exposureCompensator1);
identity<void (cv::Stitcher::*)(Ptr<detail::ExposureCompensator>)>::type setExposureCompensator = &cv::Stitcher::setExposureCompensator;
identity<Ptr<detail::SeamFinder> (cv::Stitcher::*)()>::type seamFinder0 = &cv::Stitcher::seamFinder;
identity<const Ptr<detail::SeamFinder> (cv::Stitcher::*)() const>::type seamFinder1 = &cv::Stitcher::seamFinder;
auto seamFinder = kaguya::overload(seamFinder0,seamFinder1);
identity<void (cv::Stitcher::*)(Ptr<detail::SeamFinder>)>::type setSeamFinder = &cv::Stitcher::setSeamFinder;
identity<Ptr<detail::Blender> (cv::Stitcher::*)()>::type blender0 = &cv::Stitcher::blender;
identity<const Ptr<detail::Blender> (cv::Stitcher::*)() const>::type blender1 = &cv::Stitcher::blender;
auto blender = kaguya::overload(blender0,blender1);
identity<void (cv::Stitcher::*)(Ptr<detail::Blender>)>::type setBlender = &cv::Stitcher::setBlender;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( estimateTransform_wrap_obj , cv::Stitcher , estimateTransform,  1, 2, Status (cv::Stitcher::*)(InputArrayOfArrays,InputArrayOfArrays));
auto estimateTransform = estimateTransform_wrap_obj();
identity<Status (cv::Stitcher::*)(InputArrayOfArrays,const std::vector<detail::CameraParams> &,const std::vector<int> &)>::type setTransform0 = &cv::Stitcher::setTransform;
identity<Status (cv::Stitcher::*)(InputArrayOfArrays,const std::vector<detail::CameraParams> &)>::type setTransform1 = &cv::Stitcher::setTransform;
auto setTransform = kaguya::overload(setTransform0,setTransform1);
identity<Status (cv::Stitcher::*)(OutputArray)>::type composePanorama0 = &cv::Stitcher::composePanorama;
identity<Status (cv::Stitcher::*)(InputArrayOfArrays,OutputArray)>::type composePanorama1 = &cv::Stitcher::composePanorama;
auto composePanorama = kaguya::overload(composePanorama0,composePanorama1);
identity<Status (cv::Stitcher::*)(InputArrayOfArrays,OutputArray)>::type stitch0 = &cv::Stitcher::stitch;
identity<Status (cv::Stitcher::*)(InputArrayOfArrays,InputArrayOfArrays,OutputArray)>::type stitch1 = &cv::Stitcher::stitch;
auto stitch = kaguya::overload(stitch0,stitch1);
identity<std::vector<int> (cv::Stitcher::*)() const>::type component = &cv::Stitcher::component;
identity<std::vector<detail::CameraParams> (cv::Stitcher::*)() const>::type cameras = &cv::Stitcher::cameras;
identity<double (cv::Stitcher::*)() const>::type workScale = &cv::Stitcher::workScale;
identity<UMat (cv::Stitcher::*)() const>::type resultMask = &cv::Stitcher::resultMask;
}// end of namespace Stitcher
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_KalmanFilter{
identity<void (cv::KalmanFilter::*)(int,int,int,int)>::type init = &cv::KalmanFilter::init;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( predict_wrap_obj , cv::KalmanFilter , predict,  0, 1, const Mat & (cv::KalmanFilter::*)(const Mat &));
auto predict = predict_wrap_obj();
identity<const Mat & (cv::KalmanFilter::*)(const Mat &)>::type correct = &cv::KalmanFilter::correct;
}// end of namespace KalmanFilter
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_DenseOpticalFlow{
identity<void (cv::DenseOpticalFlow::*)(InputArray,InputArray,InputOutputArray)>::type calc = &cv::DenseOpticalFlow::calc;
identity<void (cv::DenseOpticalFlow::*)()>::type collectGarbage = &cv::DenseOpticalFlow::collectGarbage;
}// end of namespace DenseOpticalFlow
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_SparseOpticalFlow{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( calc_wrap_obj , cv::SparseOpticalFlow , calc,  5, 6, void (cv::SparseOpticalFlow::*)(InputArray,InputArray,InputArray,InputOutputArray,OutputArray,OutputArray));
auto calc = calc_wrap_obj();
}// end of namespace SparseOpticalFlow
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_FarnebackOpticalFlow{
identity<int (cv::FarnebackOpticalFlow::*)() const>::type getNumLevels = &cv::FarnebackOpticalFlow::getNumLevels;
identity<void (cv::FarnebackOpticalFlow::*)(int)>::type setNumLevels = &cv::FarnebackOpticalFlow::setNumLevels;
identity<double (cv::FarnebackOpticalFlow::*)() const>::type getPyrScale = &cv::FarnebackOpticalFlow::getPyrScale;
identity<void (cv::FarnebackOpticalFlow::*)(double)>::type setPyrScale = &cv::FarnebackOpticalFlow::setPyrScale;
identity<bool (cv::FarnebackOpticalFlow::*)() const>::type getFastPyramids = &cv::FarnebackOpticalFlow::getFastPyramids;
identity<void (cv::FarnebackOpticalFlow::*)(bool)>::type setFastPyramids = &cv::FarnebackOpticalFlow::setFastPyramids;
identity<int (cv::FarnebackOpticalFlow::*)() const>::type getWinSize = &cv::FarnebackOpticalFlow::getWinSize;
identity<void (cv::FarnebackOpticalFlow::*)(int)>::type setWinSize = &cv::FarnebackOpticalFlow::setWinSize;
identity<int (cv::FarnebackOpticalFlow::*)() const>::type getNumIters = &cv::FarnebackOpticalFlow::getNumIters;
identity<void (cv::FarnebackOpticalFlow::*)(int)>::type setNumIters = &cv::FarnebackOpticalFlow::setNumIters;
identity<int (cv::FarnebackOpticalFlow::*)() const>::type getPolyN = &cv::FarnebackOpticalFlow::getPolyN;
identity<void (cv::FarnebackOpticalFlow::*)(int)>::type setPolyN = &cv::FarnebackOpticalFlow::setPolyN;
identity<double (cv::FarnebackOpticalFlow::*)() const>::type getPolySigma = &cv::FarnebackOpticalFlow::getPolySigma;
identity<void (cv::FarnebackOpticalFlow::*)(double)>::type setPolySigma = &cv::FarnebackOpticalFlow::setPolySigma;
identity<int (cv::FarnebackOpticalFlow::*)() const>::type getFlags = &cv::FarnebackOpticalFlow::getFlags;
identity<void (cv::FarnebackOpticalFlow::*)(int)>::type setFlags = &cv::FarnebackOpticalFlow::setFlags;
identity<Ptr<FarnebackOpticalFlow> (*)(int,double,bool,int,int,int,double,int)>::type create = &cv::FarnebackOpticalFlow::create;
}// end of namespace FarnebackOpticalFlow
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_VariationalRefinement{
identity<void (cv::VariationalRefinement::*)(InputArray,InputArray,InputOutputArray,InputOutputArray)>::type calcUV = &cv::VariationalRefinement::calcUV;
identity<int (cv::VariationalRefinement::*)() const>::type getFixedPointIterations = &cv::VariationalRefinement::getFixedPointIterations;
identity<void (cv::VariationalRefinement::*)(int)>::type setFixedPointIterations = &cv::VariationalRefinement::setFixedPointIterations;
identity<int (cv::VariationalRefinement::*)() const>::type getSorIterations = &cv::VariationalRefinement::getSorIterations;
identity<void (cv::VariationalRefinement::*)(int)>::type setSorIterations = &cv::VariationalRefinement::setSorIterations;
identity<float (cv::VariationalRefinement::*)() const>::type getOmega = &cv::VariationalRefinement::getOmega;
identity<void (cv::VariationalRefinement::*)(float)>::type setOmega = &cv::VariationalRefinement::setOmega;
identity<float (cv::VariationalRefinement::*)() const>::type getAlpha = &cv::VariationalRefinement::getAlpha;
identity<void (cv::VariationalRefinement::*)(float)>::type setAlpha = &cv::VariationalRefinement::setAlpha;
identity<float (cv::VariationalRefinement::*)() const>::type getDelta = &cv::VariationalRefinement::getDelta;
identity<void (cv::VariationalRefinement::*)(float)>::type setDelta = &cv::VariationalRefinement::setDelta;
identity<float (cv::VariationalRefinement::*)() const>::type getGamma = &cv::VariationalRefinement::getGamma;
identity<void (cv::VariationalRefinement::*)(float)>::type setGamma = &cv::VariationalRefinement::setGamma;
identity<Ptr<VariationalRefinement> (*)()>::type create = &cv::VariationalRefinement::create;
}// end of namespace VariationalRefinement
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_DISOpticalFlow{
identity<int (cv::DISOpticalFlow::*)() const>::type getFinestScale = &cv::DISOpticalFlow::getFinestScale;
identity<void (cv::DISOpticalFlow::*)(int)>::type setFinestScale = &cv::DISOpticalFlow::setFinestScale;
identity<int (cv::DISOpticalFlow::*)() const>::type getPatchSize = &cv::DISOpticalFlow::getPatchSize;
identity<void (cv::DISOpticalFlow::*)(int)>::type setPatchSize = &cv::DISOpticalFlow::setPatchSize;
identity<int (cv::DISOpticalFlow::*)() const>::type getPatchStride = &cv::DISOpticalFlow::getPatchStride;
identity<void (cv::DISOpticalFlow::*)(int)>::type setPatchStride = &cv::DISOpticalFlow::setPatchStride;
identity<int (cv::DISOpticalFlow::*)() const>::type getGradientDescentIterations = &cv::DISOpticalFlow::getGradientDescentIterations;
identity<void (cv::DISOpticalFlow::*)(int)>::type setGradientDescentIterations = &cv::DISOpticalFlow::setGradientDescentIterations;
identity<int (cv::DISOpticalFlow::*)() const>::type getVariationalRefinementIterations = &cv::DISOpticalFlow::getVariationalRefinementIterations;
identity<void (cv::DISOpticalFlow::*)(int)>::type setVariationalRefinementIterations = &cv::DISOpticalFlow::setVariationalRefinementIterations;
identity<float (cv::DISOpticalFlow::*)() const>::type getVariationalRefinementAlpha = &cv::DISOpticalFlow::getVariationalRefinementAlpha;
identity<void (cv::DISOpticalFlow::*)(float)>::type setVariationalRefinementAlpha = &cv::DISOpticalFlow::setVariationalRefinementAlpha;
identity<float (cv::DISOpticalFlow::*)() const>::type getVariationalRefinementDelta = &cv::DISOpticalFlow::getVariationalRefinementDelta;
identity<void (cv::DISOpticalFlow::*)(float)>::type setVariationalRefinementDelta = &cv::DISOpticalFlow::setVariationalRefinementDelta;
identity<float (cv::DISOpticalFlow::*)() const>::type getVariationalRefinementGamma = &cv::DISOpticalFlow::getVariationalRefinementGamma;
identity<void (cv::DISOpticalFlow::*)(float)>::type setVariationalRefinementGamma = &cv::DISOpticalFlow::setVariationalRefinementGamma;
identity<bool (cv::DISOpticalFlow::*)() const>::type getUseMeanNormalization = &cv::DISOpticalFlow::getUseMeanNormalization;
identity<void (cv::DISOpticalFlow::*)(bool)>::type setUseMeanNormalization = &cv::DISOpticalFlow::setUseMeanNormalization;
identity<bool (cv::DISOpticalFlow::*)() const>::type getUseSpatialPropagation = &cv::DISOpticalFlow::getUseSpatialPropagation;
identity<void (cv::DISOpticalFlow::*)(bool)>::type setUseSpatialPropagation = &cv::DISOpticalFlow::setUseSpatialPropagation;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::DISOpticalFlow::create,  0, 1, Ptr<DISOpticalFlow> (*)(int));
auto create = create_wrap_obj();
}// end of namespace DISOpticalFlow
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_SparsePyrLKOpticalFlow{
identity<Size (cv::SparsePyrLKOpticalFlow::*)() const>::type getWinSize = &cv::SparsePyrLKOpticalFlow::getWinSize;
identity<void (cv::SparsePyrLKOpticalFlow::*)(Size)>::type setWinSize = &cv::SparsePyrLKOpticalFlow::setWinSize;
identity<int (cv::SparsePyrLKOpticalFlow::*)() const>::type getMaxLevel = &cv::SparsePyrLKOpticalFlow::getMaxLevel;
identity<void (cv::SparsePyrLKOpticalFlow::*)(int)>::type setMaxLevel = &cv::SparsePyrLKOpticalFlow::setMaxLevel;
identity<TermCriteria (cv::SparsePyrLKOpticalFlow::*)() const>::type getTermCriteria = &cv::SparsePyrLKOpticalFlow::getTermCriteria;
identity<void (cv::SparsePyrLKOpticalFlow::*)(TermCriteria &)>::type setTermCriteria = &cv::SparsePyrLKOpticalFlow::setTermCriteria;
identity<int (cv::SparsePyrLKOpticalFlow::*)() const>::type getFlags = &cv::SparsePyrLKOpticalFlow::getFlags;
identity<void (cv::SparsePyrLKOpticalFlow::*)(int)>::type setFlags = &cv::SparsePyrLKOpticalFlow::setFlags;
identity<double (cv::SparsePyrLKOpticalFlow::*)() const>::type getMinEigThreshold = &cv::SparsePyrLKOpticalFlow::getMinEigThreshold;
identity<void (cv::SparsePyrLKOpticalFlow::*)(double)>::type setMinEigThreshold = &cv::SparsePyrLKOpticalFlow::setMinEigThreshold;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::SparsePyrLKOpticalFlow::create,  3, 5, Ptr<SparsePyrLKOpticalFlow> (*)(Size,int,TermCriteria,int,double));
auto create = create_wrap_obj();
}// end of namespace SparsePyrLKOpticalFlow
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_Tracker{
identity<void (cv::Tracker::*)(InputArray,const Rect &)>::type init = &cv::Tracker::init;
identity<bool (cv::Tracker::*)(InputArray,Rect &)>::type update = &cv::Tracker::update;
}// end of namespace Tracker
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_TrackerMIL{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::TrackerMIL::create,  0, 1, Ptr<TrackerMIL> (*)(const TrackerMIL::Params &));
auto create = create_wrap_obj();
}// end of namespace TrackerMIL
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_TrackerGOTURN{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::TrackerGOTURN::create,  0, 1, Ptr<TrackerGOTURN> (*)(const TrackerGOTURN::Params &));
auto create = create_wrap_obj();
}// end of namespace TrackerGOTURN
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_TrackerDaSiamRPN{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::TrackerDaSiamRPN::create,  0, 1, Ptr<TrackerDaSiamRPN> (*)(const TrackerDaSiamRPN::Params &));
auto create = create_wrap_obj();
identity<float (cv::TrackerDaSiamRPN::*)()>::type getTrackingScore = &cv::TrackerDaSiamRPN::getTrackingScore;
}// end of namespace TrackerDaSiamRPN
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BackgroundSubtractor{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( apply_wrap_obj , cv::BackgroundSubtractor , apply,  2, 3, void (cv::BackgroundSubtractor::*)(InputArray,OutputArray,double));
auto apply = apply_wrap_obj();
identity<void (cv::BackgroundSubtractor::*)(OutputArray) const>::type getBackgroundImage = &cv::BackgroundSubtractor::getBackgroundImage;
}// end of namespace BackgroundSubtractor
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BackgroundSubtractorMOG2{
identity<int (cv::BackgroundSubtractorMOG2::*)() const>::type getHistory = &cv::BackgroundSubtractorMOG2::getHistory;
identity<void (cv::BackgroundSubtractorMOG2::*)(int)>::type setHistory = &cv::BackgroundSubtractorMOG2::setHistory;
identity<int (cv::BackgroundSubtractorMOG2::*)() const>::type getNMixtures = &cv::BackgroundSubtractorMOG2::getNMixtures;
identity<void (cv::BackgroundSubtractorMOG2::*)(int)>::type setNMixtures = &cv::BackgroundSubtractorMOG2::setNMixtures;
identity<double (cv::BackgroundSubtractorMOG2::*)() const>::type getBackgroundRatio = &cv::BackgroundSubtractorMOG2::getBackgroundRatio;
identity<void (cv::BackgroundSubtractorMOG2::*)(double)>::type setBackgroundRatio = &cv::BackgroundSubtractorMOG2::setBackgroundRatio;
identity<double (cv::BackgroundSubtractorMOG2::*)() const>::type getVarThreshold = &cv::BackgroundSubtractorMOG2::getVarThreshold;
identity<void (cv::BackgroundSubtractorMOG2::*)(double)>::type setVarThreshold = &cv::BackgroundSubtractorMOG2::setVarThreshold;
identity<double (cv::BackgroundSubtractorMOG2::*)() const>::type getVarThresholdGen = &cv::BackgroundSubtractorMOG2::getVarThresholdGen;
identity<void (cv::BackgroundSubtractorMOG2::*)(double)>::type setVarThresholdGen = &cv::BackgroundSubtractorMOG2::setVarThresholdGen;
identity<double (cv::BackgroundSubtractorMOG2::*)() const>::type getVarInit = &cv::BackgroundSubtractorMOG2::getVarInit;
identity<void (cv::BackgroundSubtractorMOG2::*)(double)>::type setVarInit = &cv::BackgroundSubtractorMOG2::setVarInit;
identity<double (cv::BackgroundSubtractorMOG2::*)() const>::type getVarMin = &cv::BackgroundSubtractorMOG2::getVarMin;
identity<void (cv::BackgroundSubtractorMOG2::*)(double)>::type setVarMin = &cv::BackgroundSubtractorMOG2::setVarMin;
identity<double (cv::BackgroundSubtractorMOG2::*)() const>::type getVarMax = &cv::BackgroundSubtractorMOG2::getVarMax;
identity<void (cv::BackgroundSubtractorMOG2::*)(double)>::type setVarMax = &cv::BackgroundSubtractorMOG2::setVarMax;
identity<double (cv::BackgroundSubtractorMOG2::*)() const>::type getComplexityReductionThreshold = &cv::BackgroundSubtractorMOG2::getComplexityReductionThreshold;
identity<void (cv::BackgroundSubtractorMOG2::*)(double)>::type setComplexityReductionThreshold = &cv::BackgroundSubtractorMOG2::setComplexityReductionThreshold;
identity<bool (cv::BackgroundSubtractorMOG2::*)() const>::type getDetectShadows = &cv::BackgroundSubtractorMOG2::getDetectShadows;
identity<void (cv::BackgroundSubtractorMOG2::*)(bool)>::type setDetectShadows = &cv::BackgroundSubtractorMOG2::setDetectShadows;
identity<int (cv::BackgroundSubtractorMOG2::*)() const>::type getShadowValue = &cv::BackgroundSubtractorMOG2::getShadowValue;
identity<void (cv::BackgroundSubtractorMOG2::*)(int)>::type setShadowValue = &cv::BackgroundSubtractorMOG2::setShadowValue;
identity<double (cv::BackgroundSubtractorMOG2::*)() const>::type getShadowThreshold = &cv::BackgroundSubtractorMOG2::getShadowThreshold;
identity<void (cv::BackgroundSubtractorMOG2::*)(double)>::type setShadowThreshold = &cv::BackgroundSubtractorMOG2::setShadowThreshold;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( apply_wrap_obj , cv::BackgroundSubtractorMOG2 , apply,  2, 3, void (cv::BackgroundSubtractorMOG2::*)(InputArray,OutputArray,double));
auto apply = apply_wrap_obj();
}// end of namespace BackgroundSubtractorMOG2
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BackgroundSubtractorKNN{
identity<int (cv::BackgroundSubtractorKNN::*)() const>::type getHistory = &cv::BackgroundSubtractorKNN::getHistory;
identity<void (cv::BackgroundSubtractorKNN::*)(int)>::type setHistory = &cv::BackgroundSubtractorKNN::setHistory;
identity<int (cv::BackgroundSubtractorKNN::*)() const>::type getNSamples = &cv::BackgroundSubtractorKNN::getNSamples;
identity<void (cv::BackgroundSubtractorKNN::*)(int)>::type setNSamples = &cv::BackgroundSubtractorKNN::setNSamples;
identity<double (cv::BackgroundSubtractorKNN::*)() const>::type getDist2Threshold = &cv::BackgroundSubtractorKNN::getDist2Threshold;
identity<void (cv::BackgroundSubtractorKNN::*)(double)>::type setDist2Threshold = &cv::BackgroundSubtractorKNN::setDist2Threshold;
identity<int (cv::BackgroundSubtractorKNN::*)() const>::type getkNNSamples = &cv::BackgroundSubtractorKNN::getkNNSamples;
identity<void (cv::BackgroundSubtractorKNN::*)(int)>::type setkNNSamples = &cv::BackgroundSubtractorKNN::setkNNSamples;
identity<bool (cv::BackgroundSubtractorKNN::*)() const>::type getDetectShadows = &cv::BackgroundSubtractorKNN::getDetectShadows;
identity<void (cv::BackgroundSubtractorKNN::*)(bool)>::type setDetectShadows = &cv::BackgroundSubtractorKNN::setDetectShadows;
identity<int (cv::BackgroundSubtractorKNN::*)() const>::type getShadowValue = &cv::BackgroundSubtractorKNN::getShadowValue;
identity<void (cv::BackgroundSubtractorKNN::*)(int)>::type setShadowValue = &cv::BackgroundSubtractorKNN::setShadowValue;
identity<double (cv::BackgroundSubtractorKNN::*)() const>::type getShadowThreshold = &cv::BackgroundSubtractorKNN::getShadowThreshold;
identity<void (cv::BackgroundSubtractorKNN::*)(double)>::type setShadowThreshold = &cv::BackgroundSubtractorKNN::setShadowThreshold;
}// end of namespace gen_wrap_BackgroundSubtractorKNN
}// end of namespace gen_wrap_cv
KAGUYA_BINDINGS(cv) {
using namespace kaguya;
  function("abs", gen_wrap_cv::abs);
  function("fastMalloc", gen_wrap_cv::fastMalloc);
  function("fastFree", gen_wrap_cv::fastFree);
  function("toLowerCase", gen_wrap_cv::toLowerCase);
  function("toUpperCase", gen_wrap_cv::toUpperCase);
  function("error", gen_wrap_cv::error);
  function("cv_abs", gen_wrap_cv::cv_abs);
  function("normL2Sqr", gen_wrap_cv::normL2Sqr);
  function("normL1", gen_wrap_cv::normL1);
  function("cubeRoot", gen_wrap_cv::cubeRoot);
  function("fastAtan2", gen_wrap_cv::fastAtan2);
  function("LU", gen_wrap_cv::LU);
  function("Cholesky", gen_wrap_cv::Cholesky);
  function("depthToString", gen_wrap_cv::depthToString);
  function("typeToString", gen_wrap_cv::typeToString);
  function("noArray", gen_wrap_cv::noArray);
  function("min", gen_wrap_cv::min);
  function("max", gen_wrap_cv::max);
  function("write", gen_wrap_cv::write);
  function("writeScalar", gen_wrap_cv::writeScalar);
  function("read", gen_wrap_cv::read);
  function("borderInterpolate", gen_wrap_cv::borderInterpolate);
  function("copyMakeBorder", gen_wrap_cv::copyMakeBorder);
  function("add", gen_wrap_cv::add);
  function("subtract", gen_wrap_cv::subtract);
  function("multiply", gen_wrap_cv::multiply);
  function("divide", gen_wrap_cv::divide);
  function("scaleAdd", gen_wrap_cv::scaleAdd);
  function("addWeighted", gen_wrap_cv::addWeighted);
  function("convertScaleAbs", gen_wrap_cv::convertScaleAbs);
  function("convertFp16", gen_wrap_cv::convertFp16);
  function("LUT", gen_wrap_cv::LUT);
  function("sum", gen_wrap_cv::sum);
  function("countNonZero", gen_wrap_cv::countNonZero);
  function("findNonZero", gen_wrap_cv::findNonZero);
  function("mean", gen_wrap_cv::mean);
  function("meanStdDev", gen_wrap_cv::meanStdDev);
  function("norm", gen_wrap_cv::norm);
  function("PSNR", gen_wrap_cv::PSNR);
  function("batchDistance", gen_wrap_cv::batchDistance);
  function("normalize", gen_wrap_cv::normalize);
  function("minMaxLoc", gen_wrap_cv::minMaxLoc);
  function("minMaxIdx", gen_wrap_cv::minMaxIdx);
  function("reduce", gen_wrap_cv::reduce);
  function("merge", gen_wrap_cv::merge);
  function("split", gen_wrap_cv::split);
  function("mixChannels", gen_wrap_cv::mixChannels);
  function("extractChannel", gen_wrap_cv::extractChannel);
  function("insertChannel", gen_wrap_cv::insertChannel);
  function("flip", gen_wrap_cv::flip);
  function("rotate", gen_wrap_cv::rotate);
  function("repeat", gen_wrap_cv::repeat);
  function("hconcat", gen_wrap_cv::hconcat);
  function("vconcat", gen_wrap_cv::vconcat);
  function("bitwise_and", gen_wrap_cv::bitwise_and);
  function("bitwise_or", gen_wrap_cv::bitwise_or);
  function("bitwise_xor", gen_wrap_cv::bitwise_xor);
  function("bitwise_not", gen_wrap_cv::bitwise_not);
  function("absdiff", gen_wrap_cv::absdiff);
  function("copyTo", gen_wrap_cv::copyTo);
  function("inRange", gen_wrap_cv::inRange);
  function("compare", gen_wrap_cv::compare);
  function("sqrt", gen_wrap_cv::sqrt);
  function("pow", gen_wrap_cv::pow);
  function("exp", gen_wrap_cv::exp);
  function("log", gen_wrap_cv::log);
  function("polarToCart", gen_wrap_cv::polarToCart);
  function("cartToPolar", gen_wrap_cv::cartToPolar);
  function("phase", gen_wrap_cv::phase);
  function("magnitude", gen_wrap_cv::magnitude);
  function("checkRange", gen_wrap_cv::checkRange);
  function("patchNaNs", gen_wrap_cv::patchNaNs);
  function("gemm", gen_wrap_cv::gemm);
  function("mulTransposed", gen_wrap_cv::mulTransposed);
  function("transpose", gen_wrap_cv::transpose);
  function("transform", gen_wrap_cv::transform);
  function("perspectiveTransform", gen_wrap_cv::perspectiveTransform);
  function("completeSymm", gen_wrap_cv::completeSymm);
  function("setIdentity", gen_wrap_cv::setIdentity);
  function("determinant", gen_wrap_cv::determinant);
  function("trace", gen_wrap_cv::trace);
  function("invert", gen_wrap_cv::invert);
  function("solve", gen_wrap_cv::solve);
  function("sort", gen_wrap_cv::sort);
  function("sortIdx", gen_wrap_cv::sortIdx);
  function("solveCubic", gen_wrap_cv::solveCubic);
  function("solvePoly", gen_wrap_cv::solvePoly);
  function("eigen", gen_wrap_cv::eigen);
  function("eigenNonSymmetric", gen_wrap_cv::eigenNonSymmetric);
  function("calcCovarMatrix", gen_wrap_cv::calcCovarMatrix);
  function("PCACompute", gen_wrap_cv::PCACompute);
  function("PCAProject", gen_wrap_cv::PCAProject);
  function("PCABackProject", gen_wrap_cv::PCABackProject);
  function("SVDecomp", gen_wrap_cv::SVDecomp);
  function("SVBackSubst", gen_wrap_cv::SVBackSubst);
  function("Mahalanobis", gen_wrap_cv::Mahalanobis);
  function("dft", gen_wrap_cv::dft);
  function("idft", gen_wrap_cv::idft);
  function("dct", gen_wrap_cv::dct);
  function("idct", gen_wrap_cv::idct);
  function("mulSpectrums", gen_wrap_cv::mulSpectrums);
  function("getOptimalDFTSize", gen_wrap_cv::getOptimalDFTSize);
  function("theRNG", gen_wrap_cv::theRNG);
  function("setRNGSeed", gen_wrap_cv::setRNGSeed);
  function("randu", gen_wrap_cv::randu);
  function("randn", gen_wrap_cv::randn);
  function("randShuffle", gen_wrap_cv::randShuffle);
  function("kmeans", gen_wrap_cv::kmeans);
  function("print", gen_wrap_cv::print);
  function("setBreakOnError", gen_wrap_cv::setBreakOnError);
  function("tempfile", gen_wrap_cv::tempfile);
  function("glob", gen_wrap_cv::glob);
  function("setNumThreads", gen_wrap_cv::setNumThreads);
  function("getNumThreads", gen_wrap_cv::getNumThreads);
  function("getThreadNum", gen_wrap_cv::getThreadNum);
  function("getBuildInformation", gen_wrap_cv::getBuildInformation);
  function("getVersionString", gen_wrap_cv::getVersionString);
  function("getVersionMajor", gen_wrap_cv::getVersionMajor);
  function("getVersionMinor", gen_wrap_cv::getVersionMinor);
  function("getVersionRevision", gen_wrap_cv::getVersionRevision);
  function("getTickCount", gen_wrap_cv::getTickCount);
  function("getTickFrequency", gen_wrap_cv::getTickFrequency);
  function("getCPUTickCount", gen_wrap_cv::getCPUTickCount);
  function("checkHardwareSupport", gen_wrap_cv::checkHardwareSupport);
  function("getHardwareFeatureName", gen_wrap_cv::getHardwareFeatureName);
  function("getCPUFeaturesLine", gen_wrap_cv::getCPUFeaturesLine);
  function("getNumberOfCPUs", gen_wrap_cv::getNumberOfCPUs);
  function("alignSize", gen_wrap_cv::alignSize);
  function("divUp", gen_wrap_cv::divUp);
  function("roundUp", gen_wrap_cv::roundUp);
  function("setUseOptimized", gen_wrap_cv::setUseOptimized);
  function("useOptimized", gen_wrap_cv::useOptimized);
  function("getElemSize", gen_wrap_cv::getElemSize);
  function("parallel_for_", gen_wrap_cv::parallel_for_);
  function("solveLP", gen_wrap_cv::solveLP);
  function("haveOpenVX", gen_wrap_cv::haveOpenVX);
  function("useOpenVX", gen_wrap_cv::useOpenVX);
  function("setUseOpenVX", gen_wrap_cv::setUseOpenVX);
  function("FAST", gen_wrap_cv::FAST);
  function("AGAST", gen_wrap_cv::AGAST);
  function("drawKeypoints", gen_wrap_cv::drawKeypoints);
  function("drawMatches", gen_wrap_cv::drawMatches);
  function("evaluateFeatureDetector", gen_wrap_cv::evaluateFeatureDetector);
  function("computeRecallPrecisionCurve", gen_wrap_cv::computeRecallPrecisionCurve);
  function("getRecall", gen_wrap_cv::getRecall);
  function("getNearestPoint", gen_wrap_cv::getNearestPoint);
  function("Rodrigues", gen_wrap_cv::Rodrigues);
  function("findHomography", gen_wrap_cv::findHomography);
  function("RQDecomp3x3", gen_wrap_cv::RQDecomp3x3);
  function("decomposeProjectionMatrix", gen_wrap_cv::decomposeProjectionMatrix);
  function("matMulDeriv", gen_wrap_cv::matMulDeriv);
  function("composeRT", gen_wrap_cv::composeRT);
  function("projectPoints", gen_wrap_cv::projectPoints);
  function("solvePnP", gen_wrap_cv::solvePnP);
  function("solvePnPRansac", gen_wrap_cv::solvePnPRansac);
  function("solveP3P", gen_wrap_cv::solveP3P);
  function("solvePnPRefineLM", gen_wrap_cv::solvePnPRefineLM);
  function("solvePnPRefineVVS", gen_wrap_cv::solvePnPRefineVVS);
  function("solvePnPGeneric", gen_wrap_cv::solvePnPGeneric);
  function("initCameraMatrix2D", gen_wrap_cv::initCameraMatrix2D);
  function("findChessboardCorners", gen_wrap_cv::findChessboardCorners);
  function("checkChessboard", gen_wrap_cv::checkChessboard);
  function("findChessboardCornersSB", gen_wrap_cv::findChessboardCornersSB);
  function("estimateChessboardSharpness", gen_wrap_cv::estimateChessboardSharpness);
  function("find4QuadCornerSubpix", gen_wrap_cv::find4QuadCornerSubpix);
  function("drawChessboardCorners", gen_wrap_cv::drawChessboardCorners);
  function("drawFrameAxes", gen_wrap_cv::drawFrameAxes);
  function("findCirclesGrid", gen_wrap_cv::findCirclesGrid);
  function("calibrateCamera", gen_wrap_cv::calibrateCamera);
  function("calibrateCameraRO", gen_wrap_cv::calibrateCameraRO);
  function("calibrationMatrixValues", gen_wrap_cv::calibrationMatrixValues);
  function("stereoCalibrate", gen_wrap_cv::stereoCalibrate);
  function("stereoRectify", gen_wrap_cv::stereoRectify);
  function("stereoRectifyUncalibrated", gen_wrap_cv::stereoRectifyUncalibrated);
  function("rectify3Collinear", gen_wrap_cv::rectify3Collinear);
  function("getOptimalNewCameraMatrix", gen_wrap_cv::getOptimalNewCameraMatrix);
  function("calibrateHandEye", gen_wrap_cv::calibrateHandEye);
  function("calibrateRobotWorldHandEye", gen_wrap_cv::calibrateRobotWorldHandEye);
  function("convertPointsToHomogeneous", gen_wrap_cv::convertPointsToHomogeneous);
  function("convertPointsFromHomogeneous", gen_wrap_cv::convertPointsFromHomogeneous);
  function("convertPointsHomogeneous", gen_wrap_cv::convertPointsHomogeneous);
  function("findFundamentalMat", gen_wrap_cv::findFundamentalMat);
  function("findEssentialMat", gen_wrap_cv::findEssentialMat);
  function("decomposeEssentialMat", gen_wrap_cv::decomposeEssentialMat);
  function("recoverPose", gen_wrap_cv::recoverPose);
  function("computeCorrespondEpilines", gen_wrap_cv::computeCorrespondEpilines);
  function("triangulatePoints", gen_wrap_cv::triangulatePoints);
  function("correctMatches", gen_wrap_cv::correctMatches);
  function("filterSpeckles", gen_wrap_cv::filterSpeckles);
  function("getValidDisparityROI", gen_wrap_cv::getValidDisparityROI);
  function("validateDisparity", gen_wrap_cv::validateDisparity);
  function("reprojectImageTo3D", gen_wrap_cv::reprojectImageTo3D);
  function("sampsonDistance", gen_wrap_cv::sampsonDistance);
  function("estimateAffine3D", gen_wrap_cv::estimateAffine3D);
  function("estimateTranslation3D", gen_wrap_cv::estimateTranslation3D);
  function("estimateAffine2D", gen_wrap_cv::estimateAffine2D);
  function("estimateAffinePartial2D", gen_wrap_cv::estimateAffinePartial2D);
  function("decomposeHomographyMat", gen_wrap_cv::decomposeHomographyMat);
  function("filterHomographyDecompByVisibleRefpoints", gen_wrap_cv::filterHomographyDecompByVisibleRefpoints);
  function("undistort", gen_wrap_cv::undistort);
  function("initUndistortRectifyMap", gen_wrap_cv::initUndistortRectifyMap);
  function("initInverseRectificationMap", gen_wrap_cv::initInverseRectificationMap);
  function("initWideAngleProjMap", gen_wrap_cv::initWideAngleProjMap);
  function("getDefaultNewCameraMatrix", gen_wrap_cv::getDefaultNewCameraMatrix);
  function("undistortPoints", gen_wrap_cv::undistortPoints);
  function("imread", gen_wrap_cv::imread);
  function("imreadmulti", gen_wrap_cv::imreadmulti);
  function("imcount", gen_wrap_cv::imcount);
  function("imwrite", gen_wrap_cv::imwrite);
  function("imwritemulti", gen_wrap_cv::imwritemulti);
  function("imdecode", gen_wrap_cv::imdecode);
  function("imencode", gen_wrap_cv::imencode);
  function("haveImageReader", gen_wrap_cv::haveImageReader);
  function("haveImageWriter", gen_wrap_cv::haveImageWriter);
  function("namedWindow", gen_wrap_cv::namedWindow);
  function("destroyWindow", gen_wrap_cv::destroyWindow);
  function("destroyAllWindows", gen_wrap_cv::destroyAllWindows);
  function("startWindowThread", gen_wrap_cv::startWindowThread);
  function("waitKeyEx", gen_wrap_cv::waitKeyEx);
  function("waitKey", gen_wrap_cv::waitKey);
  function("pollKey", gen_wrap_cv::pollKey);
  function("imshow", gen_wrap_cv::imshow);
  function("resizeWindow", gen_wrap_cv::resizeWindow);
  function("moveWindow", gen_wrap_cv::moveWindow);
  function("setWindowProperty", gen_wrap_cv::setWindowProperty);
  function("setWindowTitle", gen_wrap_cv::setWindowTitle);
  function("getWindowProperty", gen_wrap_cv::getWindowProperty);
  function("getWindowImageRect", gen_wrap_cv::getWindowImageRect);
  function("getMouseWheelDelta", gen_wrap_cv::getMouseWheelDelta);
  function("selectROI", gen_wrap_cv::selectROI);
  function("selectROIs", gen_wrap_cv::selectROIs);
  function("getTrackbarPos", gen_wrap_cv::getTrackbarPos);
  function("setTrackbarPos", gen_wrap_cv::setTrackbarPos);
  function("setTrackbarMax", gen_wrap_cv::setTrackbarMax);
  function("setTrackbarMin", gen_wrap_cv::setTrackbarMin);
  function("setOpenGlContext", gen_wrap_cv::setOpenGlContext);
  function("updateWindow", gen_wrap_cv::updateWindow);
  function("fontQt", gen_wrap_cv::fontQt);
  function("addText", gen_wrap_cv::addText);
  function("displayOverlay", gen_wrap_cv::displayOverlay);
  function("displayStatusBar", gen_wrap_cv::displayStatusBar);
  function("saveWindowParameters", gen_wrap_cv::saveWindowParameters);
  function("loadWindowParameters", gen_wrap_cv::loadWindowParameters);
  function("stopLoop", gen_wrap_cv::stopLoop);
  function("createLineSegmentDetector", gen_wrap_cv::createLineSegmentDetector);
  function("getGaussianKernel", gen_wrap_cv::getGaussianKernel);
  function("getDerivKernels", gen_wrap_cv::getDerivKernels);
  function("getGaborKernel", gen_wrap_cv::getGaborKernel);
  function("morphologyDefaultBorderValue", gen_wrap_cv::morphologyDefaultBorderValue);
  function("getStructuringElement", gen_wrap_cv::getStructuringElement);
  function("medianBlur", gen_wrap_cv::medianBlur);
  function("GaussianBlur", gen_wrap_cv::GaussianBlur);
  function("bilateralFilter", gen_wrap_cv::bilateralFilter);
  function("boxFilter", gen_wrap_cv::boxFilter);
  function("sqrBoxFilter", gen_wrap_cv::sqrBoxFilter);
  function("blur", gen_wrap_cv::blur);
  function("filter2D", gen_wrap_cv::filter2D);
  function("sepFilter2D", gen_wrap_cv::sepFilter2D);
  function("Sobel", gen_wrap_cv::Sobel);
  function("spatialGradient", gen_wrap_cv::spatialGradient);
  function("Scharr", gen_wrap_cv::Scharr);
  function("Laplacian", gen_wrap_cv::Laplacian);
  function("Canny", gen_wrap_cv::Canny);
  function("cornerMinEigenVal", gen_wrap_cv::cornerMinEigenVal);
  function("cornerHarris", gen_wrap_cv::cornerHarris);
  function("cornerEigenValsAndVecs", gen_wrap_cv::cornerEigenValsAndVecs);
  function("preCornerDetect", gen_wrap_cv::preCornerDetect);
  function("cornerSubPix", gen_wrap_cv::cornerSubPix);
  function("goodFeaturesToTrack", gen_wrap_cv::goodFeaturesToTrack);
  function("HoughLines", gen_wrap_cv::HoughLines);
  function("HoughLinesP", gen_wrap_cv::HoughLinesP);
  function("HoughLinesPointSet", gen_wrap_cv::HoughLinesPointSet);
  function("HoughCircles", gen_wrap_cv::HoughCircles);
  function("erode", gen_wrap_cv::erode);
  function("dilate", gen_wrap_cv::dilate);
  function("morphologyEx", gen_wrap_cv::morphologyEx);
  function("resize", gen_wrap_cv::resize);
  function("warpAffine", gen_wrap_cv::warpAffine);
  function("warpPerspective", gen_wrap_cv::warpPerspective);
  function("remap", gen_wrap_cv::remap);
  function("convertMaps", gen_wrap_cv::convertMaps);
  function("getRotationMatrix2D", gen_wrap_cv::getRotationMatrix2D);
  function("getRotationMatrix2D_", gen_wrap_cv::getRotationMatrix2D_);
  function("getAffineTransform", gen_wrap_cv::getAffineTransform);
  function("invertAffineTransform", gen_wrap_cv::invertAffineTransform);
  function("getPerspectiveTransform", gen_wrap_cv::getPerspectiveTransform);
  function("getRectSubPix", gen_wrap_cv::getRectSubPix);
  function("logPolar", gen_wrap_cv::logPolar);
  function("linearPolar", gen_wrap_cv::linearPolar);
  function("warpPolar", gen_wrap_cv::warpPolar);
  function("integral", gen_wrap_cv::integral);
  function("accumulate", gen_wrap_cv::accumulate);
  function("accumulateSquare", gen_wrap_cv::accumulateSquare);
  function("accumulateProduct", gen_wrap_cv::accumulateProduct);
  function("accumulateWeighted", gen_wrap_cv::accumulateWeighted);
  function("phaseCorrelate", gen_wrap_cv::phaseCorrelate);
  function("createHanningWindow", gen_wrap_cv::createHanningWindow);
  function("divSpectrums", gen_wrap_cv::divSpectrums);
  function("threshold", gen_wrap_cv::threshold);
  function("adaptiveThreshold", gen_wrap_cv::adaptiveThreshold);
  function("pyrDown", gen_wrap_cv::pyrDown);
  function("pyrUp", gen_wrap_cv::pyrUp);
  function("buildPyramid", gen_wrap_cv::buildPyramid);
  function("calcHist", gen_wrap_cv::calcHist);
  function("calcBackProject", gen_wrap_cv::calcBackProject);
  function("compareHist", gen_wrap_cv::compareHist);
  function("equalizeHist", gen_wrap_cv::equalizeHist);
  function("createCLAHE", gen_wrap_cv::createCLAHE);
  function("EMD", gen_wrap_cv::EMD);
  function("wrapperEMD", gen_wrap_cv::wrapperEMD);
  function("watershed", gen_wrap_cv::watershed);
  function("pyrMeanShiftFiltering", gen_wrap_cv::pyrMeanShiftFiltering);
  function("grabCut", gen_wrap_cv::grabCut);
  function("distanceTransform", gen_wrap_cv::distanceTransform);
  function("floodFill", gen_wrap_cv::floodFill);
  function("blendLinear", gen_wrap_cv::blendLinear);
  function("cvtColor", gen_wrap_cv::cvtColor);
  function("cvtColorTwoPlane", gen_wrap_cv::cvtColorTwoPlane);
  function("demosaicing", gen_wrap_cv::demosaicing);
  function("moments", gen_wrap_cv::moments);
  function("HuMoments", gen_wrap_cv::HuMoments);
  function("matchTemplate", gen_wrap_cv::matchTemplate);
  function("connectedComponents", gen_wrap_cv::connectedComponents);
  function("connectedComponentsWithStats", gen_wrap_cv::connectedComponentsWithStats);
  function("findContours", gen_wrap_cv::findContours);
  function("approxPolyDP", gen_wrap_cv::approxPolyDP);
  function("arcLength", gen_wrap_cv::arcLength);
  function("boundingRect", gen_wrap_cv::boundingRect);
  function("contourArea", gen_wrap_cv::contourArea);
  function("minAreaRect", gen_wrap_cv::minAreaRect);
  function("boxPoints", gen_wrap_cv::boxPoints);
  function("minEnclosingCircle", gen_wrap_cv::minEnclosingCircle);
  function("minEnclosingTriangle", gen_wrap_cv::minEnclosingTriangle);
  function("matchShapes", gen_wrap_cv::matchShapes);
  function("convexHull", gen_wrap_cv::convexHull);
  function("convexityDefects", gen_wrap_cv::convexityDefects);
  function("isContourConvex", gen_wrap_cv::isContourConvex);
  function("intersectConvexConvex", gen_wrap_cv::intersectConvexConvex);
  function("fitEllipse", gen_wrap_cv::fitEllipse);
  function("fitEllipseAMS", gen_wrap_cv::fitEllipseAMS);
  function("fitEllipseDirect", gen_wrap_cv::fitEllipseDirect);
  function("fitLine", gen_wrap_cv::fitLine);
  function("pointPolygonTest", gen_wrap_cv::pointPolygonTest);
  function("rotatedRectangleIntersection", gen_wrap_cv::rotatedRectangleIntersection);
  function("createGeneralizedHoughBallard", gen_wrap_cv::createGeneralizedHoughBallard);
  function("createGeneralizedHoughGuil", gen_wrap_cv::createGeneralizedHoughGuil);
  function("applyColorMap", gen_wrap_cv::applyColorMap);
  function("line", gen_wrap_cv::line);
  function("arrowedLine", gen_wrap_cv::arrowedLine);
  function("rectangle", gen_wrap_cv::rectangle);
  function("circle", gen_wrap_cv::circle);
  function("ellipse", gen_wrap_cv::ellipse);
  function("drawMarker", gen_wrap_cv::drawMarker);
  function("fillConvexPoly", gen_wrap_cv::fillConvexPoly);
  function("fillPoly", gen_wrap_cv::fillPoly);
  function("polylines", gen_wrap_cv::polylines);
  function("drawContours", gen_wrap_cv::drawContours);
  function("clipLine", gen_wrap_cv::clipLine);
  function("ellipse2Poly", gen_wrap_cv::ellipse2Poly);
  function("putText", gen_wrap_cv::putText);
  function("getTextSize", gen_wrap_cv::getTextSize);
  function("getFontScaleFromHeight", gen_wrap_cv::getFontScaleFromHeight);
  function("groupRectangles", gen_wrap_cv::groupRectangles);
  function("groupRectangles_meanshift", gen_wrap_cv::groupRectangles_meanshift);
  function("createFaceDetectionMaskGenerator", gen_wrap_cv::createFaceDetectionMaskGenerator);
  function("inpaint", gen_wrap_cv::inpaint);
  function("fastNlMeansDenoising", gen_wrap_cv::fastNlMeansDenoising);
  function("fastNlMeansDenoisingColored", gen_wrap_cv::fastNlMeansDenoisingColored);
  function("fastNlMeansDenoisingMulti", gen_wrap_cv::fastNlMeansDenoisingMulti);
  function("fastNlMeansDenoisingColoredMulti", gen_wrap_cv::fastNlMeansDenoisingColoredMulti);
  function("denoise_TVL1", gen_wrap_cv::denoise_TVL1);
  function("createTonemap", gen_wrap_cv::createTonemap);
  function("createTonemapDrago", gen_wrap_cv::createTonemapDrago);
  function("createTonemapReinhard", gen_wrap_cv::createTonemapReinhard);
  function("createTonemapMantiuk", gen_wrap_cv::createTonemapMantiuk);
  function("createAlignMTB", gen_wrap_cv::createAlignMTB);
  function("createCalibrateDebevec", gen_wrap_cv::createCalibrateDebevec);
  function("createCalibrateRobertson", gen_wrap_cv::createCalibrateRobertson);
  function("createMergeDebevec", gen_wrap_cv::createMergeDebevec);
  function("createMergeMertens", gen_wrap_cv::createMergeMertens);
  function("createMergeRobertson", gen_wrap_cv::createMergeRobertson);
  function("decolor", gen_wrap_cv::decolor);
  function("seamlessClone", gen_wrap_cv::seamlessClone);
  function("colorChange", gen_wrap_cv::colorChange);
  function("illuminationChange", gen_wrap_cv::illuminationChange);
  function("textureFlattening", gen_wrap_cv::textureFlattening);
  function("edgePreservingFilter", gen_wrap_cv::edgePreservingFilter);
  function("detailEnhance", gen_wrap_cv::detailEnhance);
  function("pencilSketch", gen_wrap_cv::pencilSketch);
  function("stylization", gen_wrap_cv::stylization);
  function("createStitcher", gen_wrap_cv::createStitcher);
  function("createStitcherScans", gen_wrap_cv::createStitcherScans);
  function("CamShift", gen_wrap_cv::CamShift);
  function("meanShift", gen_wrap_cv::meanShift);
  function("buildOpticalFlowPyramid", gen_wrap_cv::buildOpticalFlowPyramid);
  function("calcOpticalFlowPyrLK", gen_wrap_cv::calcOpticalFlowPyrLK);
  function("calcOpticalFlowFarneback", gen_wrap_cv::calcOpticalFlowFarneback);
  function("estimateRigidTransform", gen_wrap_cv::estimateRigidTransform);
  function("computeECC", gen_wrap_cv::computeECC);
  function("findTransformECC", gen_wrap_cv::findTransformECC);
  function("readOpticalFlow", gen_wrap_cv::readOpticalFlow);
  function("writeOpticalFlow", gen_wrap_cv::writeOpticalFlow);
  function("createBackgroundSubtractorMOG2", gen_wrap_cv::createBackgroundSubtractorMOG2);
  function("createBackgroundSubtractorKNN", gen_wrap_cv::createBackgroundSubtractorKNN);
  class_<cv::float16_t>("float16_t")
    .constructors<void (),void (float)>()
    .class_function("fromBits", gen_wrap_cv::gen_wrap_float16_t::fromBits)
    .class_function("zero", gen_wrap_cv::gen_wrap_float16_t::zero)
    .function("bits", gen_wrap_cv::gen_wrap_float16_t::bits)
  ;
  class_<cv::Hamming>("Hamming")
    .constructor<>()
  ;
  class_<cv::Matx_AddOp>("Matx_AddOp")
    .constructors<void (),void (const Matx_AddOp &)>()
  ;
  class_<cv::Matx_SubOp>("Matx_SubOp")
    .constructors<void (),void (const Matx_SubOp &)>()
  ;
  class_<cv::Matx_ScaleOp>("Matx_ScaleOp")
    .constructors<void (),void (const Matx_ScaleOp &)>()
  ;
  class_<cv::Matx_MulOp>("Matx_MulOp")
    .constructors<void (),void (const Matx_MulOp &)>()
  ;
  class_<cv::Matx_DivOp>("Matx_DivOp")
    .constructors<void (),void (const Matx_DivOp &)>()
  ;
  class_<cv::Matx_MatMulOp>("Matx_MatMulOp")
    .constructors<void (),void (const Matx_MatMulOp &)>()
  ;
  class_<cv::Matx_TOp>("Matx_TOp")
    .constructors<void (),void (const Matx_TOp &)>()
  ;
  class_<cv::RotatedRect>("RotatedRect")
    .constructors<void (),void (const Point2f &, const Size2f &, float),void (const Point2f &, const Point2f &, const Point2f &)>()
    .function("points", gen_wrap_cv::gen_wrap_RotatedRect::points)
    .function("boundingRect", gen_wrap_cv::gen_wrap_RotatedRect::boundingRect)
    .function("boundingRect2f", gen_wrap_cv::gen_wrap_RotatedRect::boundingRect2f)
    .property("center", &cv::RotatedRect::center)
    .property("size", &cv::RotatedRect::size)
    .property("angle", &cv::RotatedRect::angle)
  ;
  class_<cv::KeyPoint>("KeyPoint")
    .constructors<void (),void (Point2f, float, float, float, int, int),void (float, float, float, float, float, int, int)>()
    .function("hash", gen_wrap_cv::gen_wrap_KeyPoint::hash)
    .class_function("convert", gen_wrap_cv::gen_wrap_KeyPoint::convert)
    .class_function("overlap", gen_wrap_cv::gen_wrap_KeyPoint::overlap)
    .property("pt", &cv::KeyPoint::pt)
    .property("size", &cv::KeyPoint::size)
    .property("angle", &cv::KeyPoint::angle)
    .property("response", &cv::KeyPoint::response)
    .property("octave", &cv::KeyPoint::octave)
    .property("class_id", &cv::KeyPoint::class_id)
  ;
  class_<cv::DMatch>("DMatch")
    .constructors<void (),void (int, int, float),void (int, int, int, float)>()
    .class_function("__lt", &cv::DMatch::operator<)
    .property("queryIdx", &cv::DMatch::queryIdx)
    .property("trainIdx", &cv::DMatch::trainIdx)
    .property("imgIdx", &cv::DMatch::imgIdx)
    .property("distance", &cv::DMatch::distance)
  ;
  class_<cv::TermCriteria>("TermCriteria")
    .constructors<void (),void (int, int, double)>()
    .function("isValid", gen_wrap_cv::gen_wrap_TermCriteria::isValid)
    .property("type", &cv::TermCriteria::type)
    .property("maxCount", &cv::TermCriteria::maxCount)
    .property("epsilon", &cv::TermCriteria::epsilon)
  ;
  class_<cv::Moments>("Moments")
    .constructors<void (),void (double, double, double, double, double, double, double, double, double, double)>()
    .property("m00", &cv::Moments::m00)
    .property("m10", &cv::Moments::m10)
    .property("m01", &cv::Moments::m01)
    .property("m20", &cv::Moments::m20)
    .property("m11", &cv::Moments::m11)
    .property("m02", &cv::Moments::m02)
    .property("m30", &cv::Moments::m30)
    .property("m21", &cv::Moments::m21)
    .property("m12", &cv::Moments::m12)
    .property("m03", &cv::Moments::m03)
    .property("mu20", &cv::Moments::mu20)
    .property("mu11", &cv::Moments::mu11)
    .property("mu02", &cv::Moments::mu02)
    .property("mu30", &cv::Moments::mu30)
    .property("mu21", &cv::Moments::mu21)
    .property("mu12", &cv::Moments::mu12)
    .property("mu03", &cv::Moments::mu03)
    .property("nu20", &cv::Moments::nu20)
    .property("nu11", &cv::Moments::nu11)
    .property("nu02", &cv::Moments::nu02)
    .property("nu30", &cv::Moments::nu30)
    .property("nu21", &cv::Moments::nu21)
    .property("nu12", &cv::Moments::nu12)
    .property("nu03", &cv::Moments::nu03)
  ;
  class_<cv::BufferPoolController>("BufferPoolController")
    .function("getReservedSize", gen_wrap_cv::gen_wrap_BufferPoolController::getReservedSize)
    .function("getMaxReservedSize", gen_wrap_cv::gen_wrap_BufferPoolController::getMaxReservedSize)
    .function("setMaxReservedSize", gen_wrap_cv::gen_wrap_BufferPoolController::setMaxReservedSize)
    .function("freeAllReservedBuffers", gen_wrap_cv::gen_wrap_BufferPoolController::freeAllReservedBuffers)
  ;
  class_<cv::MatAllocator>("MatAllocator")
    .function("allocate", gen_wrap_cv::gen_wrap_MatAllocator::allocate)
    .function("deallocate", gen_wrap_cv::gen_wrap_MatAllocator::deallocate)
    .function("map", gen_wrap_cv::gen_wrap_MatAllocator::map)
    .function("unmap", gen_wrap_cv::gen_wrap_MatAllocator::unmap)
    .function("download", gen_wrap_cv::gen_wrap_MatAllocator::download)
    .function("upload", gen_wrap_cv::gen_wrap_MatAllocator::upload)
    .function("copy", gen_wrap_cv::gen_wrap_MatAllocator::copy)
    .function("getBufferPoolController", gen_wrap_cv::gen_wrap_MatAllocator::getBufferPoolController)
  ;
  class_<cv::UMatData>("UMatData")
    .constructors<void (const MatAllocator *)>()
    .function("lock", gen_wrap_cv::gen_wrap_UMatData::lock)
    .function("unlock", gen_wrap_cv::gen_wrap_UMatData::unlock)
    .function("hostCopyObsolete", gen_wrap_cv::gen_wrap_UMatData::hostCopyObsolete)
    .function("deviceCopyObsolete", gen_wrap_cv::gen_wrap_UMatData::deviceCopyObsolete)
    .function("deviceMemMapped", gen_wrap_cv::gen_wrap_UMatData::deviceMemMapped)
    .function("copyOnMap", gen_wrap_cv::gen_wrap_UMatData::copyOnMap)
    .function("tempUMat", gen_wrap_cv::gen_wrap_UMatData::tempUMat)
    .function("tempCopiedUMat", gen_wrap_cv::gen_wrap_UMatData::tempCopiedUMat)
    .function("markHostCopyObsolete", gen_wrap_cv::gen_wrap_UMatData::markHostCopyObsolete)
    .function("markDeviceCopyObsolete", gen_wrap_cv::gen_wrap_UMatData::markDeviceCopyObsolete)
    .function("markDeviceMemMapped", gen_wrap_cv::gen_wrap_UMatData::markDeviceMemMapped)
    .property("prevAllocator", &cv::UMatData::prevAllocator)
    .property("currAllocator", &cv::UMatData::currAllocator)
    .property("urefcount", &cv::UMatData::urefcount)
    .property("refcount", &cv::UMatData::refcount)
    .property("data", &cv::UMatData::data)
    .property("origdata", &cv::UMatData::origdata)
    .property("size", &cv::UMatData::size)
    .property("flags", &cv::UMatData::flags)
    .property("handle", &cv::UMatData::handle)
    .property("userdata", &cv::UMatData::userdata)
    .property("allocatorFlags_", &cv::UMatData::allocatorFlags_)
    .property("mapcount", &cv::UMatData::mapcount)
    .property("originalUMatData", &cv::UMatData::originalUMatData)
    .property("allocatorContext", &cv::UMatData::allocatorContext)
  ;
  class_<cv::MatSize>("MatSize")
    .constructors<void (int *) noexcept>()
    .function("dims", gen_wrap_cv::gen_wrap_MatSize::dims)
    .class_function("__eq", &cv::MatSize::operator==)
    .property("p", &cv::MatSize::p)
  ;
  class_<cv::MatStep>("MatStep")
    .constructors<void () noexcept,void (size_t) noexcept>()
    .property("p", &cv::MatStep::p)
  ;
  class_<cv::UMat>("UMat")
    .constructors<void (UMatUsageFlags) noexcept,void (int, int, int, UMatUsageFlags),void (Size, int, UMatUsageFlags),void (int, int, int, const Scalar &, UMatUsageFlags),void (Size, int, const Scalar &, UMatUsageFlags),void (int, const int *, int, UMatUsageFlags),void (int, const int *, int, const Scalar &, UMatUsageFlags),void (const UMat &),void (const UMat &, const Range &, const Range &),void (const UMat &, const Rect &),void (const UMat &, const Range *),void (const UMat &, const std::vector<Range> &),void (UMat &&)>()
    .function("getMat", gen_wrap_cv::gen_wrap_UMat::getMat)
    .function("row", gen_wrap_cv::gen_wrap_UMat::row)
    .function("col", gen_wrap_cv::gen_wrap_UMat::col)
    .function("rowRange", gen_wrap_cv::gen_wrap_UMat::rowRange)
    .function("colRange", gen_wrap_cv::gen_wrap_UMat::colRange)
    .function("diag", gen_wrap_cv::gen_wrap_UMat::diag)
    .function("clone", gen_wrap_cv::gen_wrap_UMat::clone)
    .function("copyTo", gen_wrap_cv::gen_wrap_UMat::copyTo)
    .function("convertTo", gen_wrap_cv::gen_wrap_UMat::convertTo)
    .function("assignTo", gen_wrap_cv::gen_wrap_UMat::assignTo)
    .function("setTo", gen_wrap_cv::gen_wrap_UMat::setTo)
    .function("reshape", gen_wrap_cv::gen_wrap_UMat::reshape)
    .function("t", gen_wrap_cv::gen_wrap_UMat::t)
    .function("inv", gen_wrap_cv::gen_wrap_UMat::inv)
    .function("mul", gen_wrap_cv::gen_wrap_UMat::mul)
    .function("dot", gen_wrap_cv::gen_wrap_UMat::dot)
    .class_function("zeros", gen_wrap_cv::gen_wrap_UMat::zeros)
    .class_function("ones", gen_wrap_cv::gen_wrap_UMat::ones)
    .class_function("eye", gen_wrap_cv::gen_wrap_UMat::eye)
    .function("create", gen_wrap_cv::gen_wrap_UMat::create)
    .function("addref", gen_wrap_cv::gen_wrap_UMat::addref)
    .function("release", gen_wrap_cv::gen_wrap_UMat::release)
    .function("deallocate", gen_wrap_cv::gen_wrap_UMat::deallocate)
    .function("copySize", gen_wrap_cv::gen_wrap_UMat::copySize)
    .function("locateROI", gen_wrap_cv::gen_wrap_UMat::locateROI)
    .function("adjustROI", gen_wrap_cv::gen_wrap_UMat::adjustROI)
    .function("isContinuous", gen_wrap_cv::gen_wrap_UMat::isContinuous)
    .function("isSubmatrix", gen_wrap_cv::gen_wrap_UMat::isSubmatrix)
    .function("elemSize", gen_wrap_cv::gen_wrap_UMat::elemSize)
    .function("elemSize1", gen_wrap_cv::gen_wrap_UMat::elemSize1)
    .function("type", gen_wrap_cv::gen_wrap_UMat::type)
    .function("depth", gen_wrap_cv::gen_wrap_UMat::depth)
    .function("channels", gen_wrap_cv::gen_wrap_UMat::channels)
    .function("empty", gen_wrap_cv::gen_wrap_UMat::empty)
    .function("total", gen_wrap_cv::gen_wrap_UMat::total)
    .function("checkVector", gen_wrap_cv::gen_wrap_UMat::checkVector)
    .function("handle", gen_wrap_cv::gen_wrap_UMat::handle)
    .function("ndoffset", gen_wrap_cv::gen_wrap_UMat::ndoffset)
    .class_function("getStdAllocator", gen_wrap_cv::gen_wrap_UMat::getStdAllocator)
    .function("updateContinuityFlag", gen_wrap_cv::gen_wrap_UMat::updateContinuityFlag)
    .property("flags", &cv::UMat::flags)
    .property("dims", &cv::UMat::dims)
    .property("rows", &cv::UMat::rows)
    .property("cols", &cv::UMat::cols)
    .property("allocator", &cv::UMat::allocator)
    .property("usageFlags", &cv::UMat::usageFlags)
    .property("u", &cv::UMat::u)
    .property("offset", &cv::UMat::offset)
    .property("size", &cv::UMat::size)
  ;
  class_<cv::SparseMat>("SparseMat")
    .constructors<void (),void (int, const int *, int),void (const SparseMat &),void (const Mat &)>()
    .function("clone", gen_wrap_cv::gen_wrap_SparseMat::clone)
    .function("copyTo", gen_wrap_cv::gen_wrap_SparseMat::copyTo)
    .function("convertTo", gen_wrap_cv::gen_wrap_SparseMat::convertTo)
    .function("assignTo", gen_wrap_cv::gen_wrap_SparseMat::assignTo)
    .function("create", gen_wrap_cv::gen_wrap_SparseMat::create)
    .function("clear", gen_wrap_cv::gen_wrap_SparseMat::clear)
    .function("addref", gen_wrap_cv::gen_wrap_SparseMat::addref)
    .function("release", gen_wrap_cv::gen_wrap_SparseMat::release)
    .function("elemSize", gen_wrap_cv::gen_wrap_SparseMat::elemSize)
    .function("elemSize1", gen_wrap_cv::gen_wrap_SparseMat::elemSize1)
    .function("type", gen_wrap_cv::gen_wrap_SparseMat::type)
    .function("depth", gen_wrap_cv::gen_wrap_SparseMat::depth)
    .function("channels", gen_wrap_cv::gen_wrap_SparseMat::channels)
    .function("size", gen_wrap_cv::gen_wrap_SparseMat::size)
    .function("dims", gen_wrap_cv::gen_wrap_SparseMat::dims)
    .function("nzcount", gen_wrap_cv::gen_wrap_SparseMat::nzcount)
    .function("hash", gen_wrap_cv::gen_wrap_SparseMat::hash)
    .function("ptr", gen_wrap_cv::gen_wrap_SparseMat::ptr)
    .function("erase", gen_wrap_cv::gen_wrap_SparseMat::erase)
    .function("begin", gen_wrap_cv::gen_wrap_SparseMat::begin)
    .function("end", gen_wrap_cv::gen_wrap_SparseMat::end)
    .function("node", gen_wrap_cv::gen_wrap_SparseMat::node)
    .function("newNode", gen_wrap_cv::gen_wrap_SparseMat::newNode)
    .function("removeNode", gen_wrap_cv::gen_wrap_SparseMat::removeNode)
    .function("resizeHashTab", gen_wrap_cv::gen_wrap_SparseMat::resizeHashTab)
    .property("flags", &cv::SparseMat::flags)
    .property("hdr", &cv::SparseMat::hdr)
  ;
  class_<cv::MatConstIterator>("MatConstIterator")
    .constructors<void (),void (const Mat *),void (const Mat *, int, int),void (const Mat *, Point),void (const Mat *, const int *),void (const MatConstIterator &)>()
    .function("pos", gen_wrap_cv::gen_wrap_MatConstIterator::pos)
    .function("lpos", gen_wrap_cv::gen_wrap_MatConstIterator::lpos)
    .function("seek", gen_wrap_cv::gen_wrap_MatConstIterator::seek)
    .class_function("__mul", &cv::MatConstIterator::operator*)
    .property("m", &cv::MatConstIterator::m)
    .property("elemSize", &cv::MatConstIterator::elemSize)
    .property("ptr", &cv::MatConstIterator::ptr)
    .property("sliceStart", &cv::MatConstIterator::sliceStart)
    .property("sliceEnd", &cv::MatConstIterator::sliceEnd)
  ;
  class_<cv::SparseMatConstIterator>("SparseMatConstIterator")
    .constructors<void (),void (const SparseMat *),void (const SparseMatConstIterator &)>()
    .function("node", gen_wrap_cv::gen_wrap_SparseMatConstIterator::node)
    .function("seekEnd", gen_wrap_cv::gen_wrap_SparseMatConstIterator::seekEnd)
    .property("m", &cv::SparseMatConstIterator::m)
    .property("hashidx", &cv::SparseMatConstIterator::hashidx)
    .property("ptr", &cv::SparseMatConstIterator::ptr)
  ;
  class_<cv::SparseMatIterator,cv::SparseMatConstIterator>("SparseMatIterator")
    .constructors<void (),void (SparseMat *),void (SparseMat *, const int *),void (const SparseMatIterator &)>()
    .function("node", gen_wrap_cv::gen_wrap_SparseMatIterator::node)
  ;
  class_<cv::NAryMatIterator>("NAryMatIterator")
    .constructors<void (),void (const Mat **, uchar **, int),void (const Mat **, Mat *, int)>()
    .function("init", gen_wrap_cv::gen_wrap_NAryMatIterator::init)
    .property("arrays", &cv::NAryMatIterator::arrays)
    .property("planes", &cv::NAryMatIterator::planes)
    .property("ptrs", &cv::NAryMatIterator::ptrs)
    .property("narrays", &cv::NAryMatIterator::narrays)
    .property("nplanes", &cv::NAryMatIterator::nplanes)
    .property("size", &cv::NAryMatIterator::size)
  ;
  class_<cv::MatOp>("MatOp")
    .function("elementWise", gen_wrap_cv::gen_wrap_MatOp::elementWise)
    .function("assign", gen_wrap_cv::gen_wrap_MatOp::assign)
    .function("roi", gen_wrap_cv::gen_wrap_MatOp::roi)
    .function("diag", gen_wrap_cv::gen_wrap_MatOp::diag)
    .function("augAssignAdd", gen_wrap_cv::gen_wrap_MatOp::augAssignAdd)
    .function("augAssignSubtract", gen_wrap_cv::gen_wrap_MatOp::augAssignSubtract)
    .function("augAssignMultiply", gen_wrap_cv::gen_wrap_MatOp::augAssignMultiply)
    .function("augAssignDivide", gen_wrap_cv::gen_wrap_MatOp::augAssignDivide)
    .function("augAssignAnd", gen_wrap_cv::gen_wrap_MatOp::augAssignAnd)
    .function("augAssignOr", gen_wrap_cv::gen_wrap_MatOp::augAssignOr)
    .function("augAssignXor", gen_wrap_cv::gen_wrap_MatOp::augAssignXor)
    .function("add", gen_wrap_cv::gen_wrap_MatOp::add)
    .function("subtract", gen_wrap_cv::gen_wrap_MatOp::subtract)
    .function("multiply", gen_wrap_cv::gen_wrap_MatOp::multiply)
    .function("divide", gen_wrap_cv::gen_wrap_MatOp::divide)
    .function("abs", gen_wrap_cv::gen_wrap_MatOp::abs)
    .function("transpose", gen_wrap_cv::gen_wrap_MatOp::transpose)
    .function("matmul", gen_wrap_cv::gen_wrap_MatOp::matmul)
    .function("invert", gen_wrap_cv::gen_wrap_MatOp::invert)
    .function("size", gen_wrap_cv::gen_wrap_MatOp::size)
    .function("type", gen_wrap_cv::gen_wrap_MatOp::type)
  ;
  class_<cv::MatExpr>("MatExpr")
    .constructors<void (),void (const Mat &),void (const MatOp *, int, const Mat &, const Mat &, const Mat &, double, double, const Scalar &)>()
    .function("size", gen_wrap_cv::gen_wrap_MatExpr::size)
    .function("type", gen_wrap_cv::gen_wrap_MatExpr::type)
    .function("row", gen_wrap_cv::gen_wrap_MatExpr::row)
    .function("col", gen_wrap_cv::gen_wrap_MatExpr::col)
    .function("diag", gen_wrap_cv::gen_wrap_MatExpr::diag)
    .function("t", gen_wrap_cv::gen_wrap_MatExpr::t)
    .function("inv", gen_wrap_cv::gen_wrap_MatExpr::inv)
    .function("mul", gen_wrap_cv::gen_wrap_MatExpr::mul)
    .function("cross", gen_wrap_cv::gen_wrap_MatExpr::cross)
    .function("dot", gen_wrap_cv::gen_wrap_MatExpr::dot)
    .function("swap", gen_wrap_cv::gen_wrap_MatExpr::swap)
    .property("op", &cv::MatExpr::op)
    .property("flags", &cv::MatExpr::flags)
    .property("a", &cv::MatExpr::a)
    .property("b", &cv::MatExpr::b)
    .property("c", &cv::MatExpr::c)
    .property("alpha", &cv::MatExpr::alpha)
    .property("beta", &cv::MatExpr::beta)
    .property("s", &cv::MatExpr::s)
  ;
  class_<cv::FileStorage>("FileStorage")
    .constructors<void (),void (const String &, int, const String &)>()
    .function("open", gen_wrap_cv::gen_wrap_FileStorage::open)
    .function("isOpened", gen_wrap_cv::gen_wrap_FileStorage::isOpened)
    .function("release", gen_wrap_cv::gen_wrap_FileStorage::release)
    .function("releaseAndGetString", gen_wrap_cv::gen_wrap_FileStorage::releaseAndGetString)
    .function("getFirstTopLevelNode", gen_wrap_cv::gen_wrap_FileStorage::getFirstTopLevelNode)
    .function("root", gen_wrap_cv::gen_wrap_FileStorage::root)
    .function("write", gen_wrap_cv::gen_wrap_FileStorage::write)
    .function("writeRaw", gen_wrap_cv::gen_wrap_FileStorage::writeRaw)
    .function("writeComment", gen_wrap_cv::gen_wrap_FileStorage::writeComment)
    .function("startWriteStruct", gen_wrap_cv::gen_wrap_FileStorage::startWriteStruct)
    .function("endWriteStruct", gen_wrap_cv::gen_wrap_FileStorage::endWriteStruct)
    .class_function("getDefaultObjectName", gen_wrap_cv::gen_wrap_FileStorage::getDefaultObjectName)
    .function("getFormat", gen_wrap_cv::gen_wrap_FileStorage::getFormat)
    .property("state", &cv::FileStorage::state)
    .property("elname", &cv::FileStorage::elname)
    .property("p", &cv::FileStorage::p)
  ;
  class_<cv::FileNode>("FileNode")
    .constructors<void (),void (const FileStorage *, size_t, size_t),void (const FileNode &),void (FileStorage::Impl *, size_t, size_t)>()
    .function("keys", gen_wrap_cv::gen_wrap_FileNode::keys)
    .function("type", gen_wrap_cv::gen_wrap_FileNode::type)
    .function("empty", gen_wrap_cv::gen_wrap_FileNode::empty)
    .function("isNone", gen_wrap_cv::gen_wrap_FileNode::isNone)
    .function("isSeq", gen_wrap_cv::gen_wrap_FileNode::isSeq)
    .function("isMap", gen_wrap_cv::gen_wrap_FileNode::isMap)
    .function("isInt", gen_wrap_cv::gen_wrap_FileNode::isInt)
    .function("isReal", gen_wrap_cv::gen_wrap_FileNode::isReal)
    .function("isString", gen_wrap_cv::gen_wrap_FileNode::isString)
    .function("isNamed", gen_wrap_cv::gen_wrap_FileNode::isNamed)
    .function("name", gen_wrap_cv::gen_wrap_FileNode::name)
    .function("size", gen_wrap_cv::gen_wrap_FileNode::size)
    .function("rawSize", gen_wrap_cv::gen_wrap_FileNode::rawSize)
    .class_function("isCollection", gen_wrap_cv::gen_wrap_FileNode::isCollection)
    .class_function("isEmptyCollection", gen_wrap_cv::gen_wrap_FileNode::isEmptyCollection)
    .class_function("isFlow", gen_wrap_cv::gen_wrap_FileNode::isFlow)
    .function("ptr", gen_wrap_cv::gen_wrap_FileNode::ptr)
    .function("begin", gen_wrap_cv::gen_wrap_FileNode::begin)
    .function("end", gen_wrap_cv::gen_wrap_FileNode::end)
    .function("readRaw", gen_wrap_cv::gen_wrap_FileNode::readRaw)
    .function("setValue", gen_wrap_cv::gen_wrap_FileNode::setValue)
    .function("real", gen_wrap_cv::gen_wrap_FileNode::real)
    .function("string", gen_wrap_cv::gen_wrap_FileNode::string)
    .function("mat", gen_wrap_cv::gen_wrap_FileNode::mat)
    .property("blockIdx", &cv::FileNode::blockIdx)
    .property("ofs", &cv::FileNode::ofs)
  ;
  class_<cv::FileNodeIterator>("FileNodeIterator")
    .constructors<void (),void (const FileNode &, bool),void (const FileNodeIterator &)>()
    .function("readRaw", gen_wrap_cv::gen_wrap_FileNodeIterator::readRaw)
    .function("remaining", gen_wrap_cv::gen_wrap_FileNodeIterator::remaining)
    .function("equalTo", gen_wrap_cv::gen_wrap_FileNodeIterator::equalTo)
    .class_function("__mul", &cv::FileNodeIterator::operator*)
  ;
  class_<cv::Exception,std::exception>("Exception")
    .constructors<void (),void (int, const String &, const String &, const String &, int)>()
    .function("what", gen_wrap_cv::gen_wrap_Exception::what)
    .function("formatMessage", gen_wrap_cv::gen_wrap_Exception::formatMessage)
    .property("msg", &cv::Exception::msg)
    .property("code", &cv::Exception::code)
    .property("err", &cv::Exception::err)
    .property("func", &cv::Exception::func)
    .property("file", &cv::Exception::file)
    .property("line", &cv::Exception::line)
  ;
  class_<cv::PCA>("PCA")
    .constructors<void (),void (InputArray, InputArray, int, int),void (InputArray, InputArray, int, double)>()
    .function("project", gen_wrap_cv::gen_wrap_PCA::project)
    .function("backProject", gen_wrap_cv::gen_wrap_PCA::backProject)
    .function("write", gen_wrap_cv::gen_wrap_PCA::write)
    .function("read", gen_wrap_cv::gen_wrap_PCA::read)
    .property("eigenvectors", &cv::PCA::eigenvectors)
    .property("eigenvalues", &cv::PCA::eigenvalues)
    .property("mean", &cv::PCA::mean)
  ;
  class_<cv::LDA>("LDA")
    .constructors<void (int),void (InputArrayOfArrays, InputArray, int)>()
    .function("save", gen_wrap_cv::gen_wrap_LDA::save)
    .function("load", gen_wrap_cv::gen_wrap_LDA::load)
    .function("compute", gen_wrap_cv::gen_wrap_LDA::compute)
    .function("project", gen_wrap_cv::gen_wrap_LDA::project)
    .function("reconstruct", gen_wrap_cv::gen_wrap_LDA::reconstruct)
    .function("eigenvectors", gen_wrap_cv::gen_wrap_LDA::eigenvectors)
    .function("eigenvalues", gen_wrap_cv::gen_wrap_LDA::eigenvalues)
    .class_function("subspaceProject", gen_wrap_cv::gen_wrap_LDA::subspaceProject)
    .class_function("subspaceReconstruct", gen_wrap_cv::gen_wrap_LDA::subspaceReconstruct)
  ;
  class_<cv::SVD>("SVD")
    .constructors<void (),void (InputArray, int)>()
    .class_function("compute", gen_wrap_cv::gen_wrap_SVD::compute)
    .class_function("backSubst", gen_wrap_cv::gen_wrap_SVD::backSubst)
    .class_function("solveZ", gen_wrap_cv::gen_wrap_SVD::solveZ)
    .property("u", &cv::SVD::u)
    .property("w", &cv::SVD::w)
    .property("vt", &cv::SVD::vt)
  ;
  class_<cv::RNG>("RNG")
    .constructors<void (),void (uint64)>()
    .function("next", gen_wrap_cv::gen_wrap_RNG::next)
    .function("uniform", gen_wrap_cv::gen_wrap_RNG::uniform)
    .function("fill", gen_wrap_cv::gen_wrap_RNG::fill)
    .function("gaussian", gen_wrap_cv::gen_wrap_RNG::gaussian)
    .class_function("__eq", &cv::RNG::operator==)
    .property("state", &cv::RNG::state)
  ;
  class_<cv::RNG_MT19937>("RNG_MT19937")
    .constructors<void (),void (unsigned int)>()
    .function("seed", gen_wrap_cv::gen_wrap_RNG_MT19937::seed)
    .function("next", gen_wrap_cv::gen_wrap_RNG_MT19937::next)
    .function("uniform", gen_wrap_cv::gen_wrap_RNG_MT19937::uniform)
  ;
  class_<cv::Formatted>("Formatted")
    .function("next", gen_wrap_cv::gen_wrap_Formatted::next)
    .function("reset", gen_wrap_cv::gen_wrap_Formatted::reset)
  ;
  class_<cv::Formatter>("Formatter")
    .function("format", gen_wrap_cv::gen_wrap_Formatter::format)
    .function("set16fPrecision", gen_wrap_cv::gen_wrap_Formatter::set16fPrecision)
    .function("set32fPrecision", gen_wrap_cv::gen_wrap_Formatter::set32fPrecision)
    .function("set64fPrecision", gen_wrap_cv::gen_wrap_Formatter::set64fPrecision)
    .function("setMultiline", gen_wrap_cv::gen_wrap_Formatter::setMultiline)
    .class_function("get", gen_wrap_cv::gen_wrap_Formatter::get)
  ;
  class_<cv::Algorithm>("Algorithm")
    .constructors<void ()>()
    .function("clear", gen_wrap_cv::gen_wrap_Algorithm::clear)
    .function("write", gen_wrap_cv::gen_wrap_Algorithm::write)
    .function("read", gen_wrap_cv::gen_wrap_Algorithm::read)
    .function("empty", gen_wrap_cv::gen_wrap_Algorithm::empty)
    .function("save", gen_wrap_cv::gen_wrap_Algorithm::save)
    .function("getDefaultName", gen_wrap_cv::gen_wrap_Algorithm::getDefaultName)
  ;
  class_<cv::TickMeter>("TickMeter")
    .constructors<void ()>()
    .function("start", gen_wrap_cv::gen_wrap_TickMeter::start)
    .function("stop", gen_wrap_cv::gen_wrap_TickMeter::stop)
    .function("getTimeTicks", gen_wrap_cv::gen_wrap_TickMeter::getTimeTicks)
    .function("getTimeMicro", gen_wrap_cv::gen_wrap_TickMeter::getTimeMicro)
    .function("getTimeMilli", gen_wrap_cv::gen_wrap_TickMeter::getTimeMilli)
    .function("getTimeSec", gen_wrap_cv::gen_wrap_TickMeter::getTimeSec)
    .function("getCounter", gen_wrap_cv::gen_wrap_TickMeter::getCounter)
    .function("getFPS", gen_wrap_cv::gen_wrap_TickMeter::getFPS)
    .function("getAvgTimeSec", gen_wrap_cv::gen_wrap_TickMeter::getAvgTimeSec)
    .function("getAvgTimeMilli", gen_wrap_cv::gen_wrap_TickMeter::getAvgTimeMilli)
    .function("reset", gen_wrap_cv::gen_wrap_TickMeter::reset)
  ;
  class_<cv::ParallelLoopBody>("ParallelLoopBody")
  ;
  class_<cv::ParallelLoopBodyLambdaWrapper,cv::ParallelLoopBody>("ParallelLoopBodyLambdaWrapper")
  ;
  class_<cv::CommandLineParser>("CommandLineParser")
    .constructors<void (int, const char *const *, const String &),void (const CommandLineParser &)>()
    .function("getPathToApplication", gen_wrap_cv::gen_wrap_CommandLineParser::getPathToApplication)
    .function("has", gen_wrap_cv::gen_wrap_CommandLineParser::has)
    .function("check", gen_wrap_cv::gen_wrap_CommandLineParser::check)
    .function("about", gen_wrap_cv::gen_wrap_CommandLineParser::about)
    .function("printMessage", gen_wrap_cv::gen_wrap_CommandLineParser::printMessage)
    .function("printErrors", gen_wrap_cv::gen_wrap_CommandLineParser::printErrors)
  ;
  class_<cv::MinProblemSolver,cv::Algorithm>("MinProblemSolver")
    .function("getFunction", gen_wrap_cv::gen_wrap_MinProblemSolver::getFunction)
    .function("setFunction", gen_wrap_cv::gen_wrap_MinProblemSolver::setFunction)
    .function("getTermCriteria", gen_wrap_cv::gen_wrap_MinProblemSolver::getTermCriteria)
    .function("setTermCriteria", gen_wrap_cv::gen_wrap_MinProblemSolver::setTermCriteria)
    .function("minimize", gen_wrap_cv::gen_wrap_MinProblemSolver::minimize)
  ;
  class_<cv::DownhillSolver,cv::MinProblemSolver>("DownhillSolver")
    .function("getInitStep", gen_wrap_cv::gen_wrap_DownhillSolver::getInitStep)
    .function("setInitStep", gen_wrap_cv::gen_wrap_DownhillSolver::setInitStep)
    .class_function("create", gen_wrap_cv::gen_wrap_DownhillSolver::create)
  ;
  class_<cv::ConjGradSolver,cv::MinProblemSolver>("ConjGradSolver")
    .class_function("create", gen_wrap_cv::gen_wrap_ConjGradSolver::create)
  ;
  class_<cv::KeyPointsFilter>("KeyPointsFilter")
    .constructors<void ()>()
    .class_function("runByImageBorder", gen_wrap_cv::gen_wrap_KeyPointsFilter::runByImageBorder)
    .class_function("runByKeypointSize", gen_wrap_cv::gen_wrap_KeyPointsFilter::runByKeypointSize)
    .class_function("runByPixelsMask", gen_wrap_cv::gen_wrap_KeyPointsFilter::runByPixelsMask)
    .class_function("removeDuplicated", gen_wrap_cv::gen_wrap_KeyPointsFilter::removeDuplicated)
    .class_function("removeDuplicatedSorted", gen_wrap_cv::gen_wrap_KeyPointsFilter::removeDuplicatedSorted)
    .class_function("retainBest", gen_wrap_cv::gen_wrap_KeyPointsFilter::retainBest)
  ;
  class_<cv::Feature2D,cv::Algorithm>("Feature2D")
    .constructor<>()
    .function("detect", gen_wrap_cv::gen_wrap_Feature2D::detect)
    .function("compute", gen_wrap_cv::gen_wrap_Feature2D::compute)
    .function("detectAndCompute", gen_wrap_cv::gen_wrap_Feature2D::detectAndCompute)
    .function("descriptorSize", gen_wrap_cv::gen_wrap_Feature2D::descriptorSize)
    .function("descriptorType", gen_wrap_cv::gen_wrap_Feature2D::descriptorType)
    .function("defaultNorm", gen_wrap_cv::gen_wrap_Feature2D::defaultNorm)
    .function("write", gen_wrap_cv::gen_wrap_Feature2D::write)
    .function("read", gen_wrap_cv::gen_wrap_Feature2D::read)
    .function("empty", gen_wrap_cv::gen_wrap_Feature2D::empty)
    .function("getDefaultName", gen_wrap_cv::gen_wrap_Feature2D::getDefaultName)
  ;
  class_<cv::AffineFeature,cv::Feature2D>("AffineFeature")
    .class_function("create", gen_wrap_cv::gen_wrap_AffineFeature::create)
    .function("setViewParams", gen_wrap_cv::gen_wrap_AffineFeature::setViewParams)
    .function("getViewParams", gen_wrap_cv::gen_wrap_AffineFeature::getViewParams)
    .function("getDefaultName", gen_wrap_cv::gen_wrap_AffineFeature::getDefaultName)
  ;
  class_<cv::SIFT,cv::Feature2D>("SIFT")
    .constructor<>()
    .class_function("create", gen_wrap_cv::gen_wrap_SIFT::create)
    .function("getDefaultName", gen_wrap_cv::gen_wrap_SIFT::getDefaultName)
  ;
  class_<cv::BRISK,cv::Feature2D>("BRISK")
    .constructor<>()
    .class_function("create", gen_wrap_cv::gen_wrap_BRISK::create)
    .function("getDefaultName", gen_wrap_cv::gen_wrap_BRISK::getDefaultName)
    .function("setThreshold", gen_wrap_cv::gen_wrap_BRISK::setThreshold)
    .function("getThreshold", gen_wrap_cv::gen_wrap_BRISK::getThreshold)
    .function("setOctaves", gen_wrap_cv::gen_wrap_BRISK::setOctaves)
    .function("getOctaves", gen_wrap_cv::gen_wrap_BRISK::getOctaves)
  ;
  class_<cv::ORB,cv::Feature2D>("ORB")
    .class_function("create", gen_wrap_cv::gen_wrap_ORB::create)
    .function("setMaxFeatures", gen_wrap_cv::gen_wrap_ORB::setMaxFeatures)
    .function("getMaxFeatures", gen_wrap_cv::gen_wrap_ORB::getMaxFeatures)
    .function("setScaleFactor", gen_wrap_cv::gen_wrap_ORB::setScaleFactor)
    .function("getScaleFactor", gen_wrap_cv::gen_wrap_ORB::getScaleFactor)
    .function("setNLevels", gen_wrap_cv::gen_wrap_ORB::setNLevels)
    .function("getNLevels", gen_wrap_cv::gen_wrap_ORB::getNLevels)
    .function("setEdgeThreshold", gen_wrap_cv::gen_wrap_ORB::setEdgeThreshold)
    .function("getEdgeThreshold", gen_wrap_cv::gen_wrap_ORB::getEdgeThreshold)
    .function("setFirstLevel", gen_wrap_cv::gen_wrap_ORB::setFirstLevel)
    .function("getFirstLevel", gen_wrap_cv::gen_wrap_ORB::getFirstLevel)
    .function("setWTA_K", gen_wrap_cv::gen_wrap_ORB::setWTA_K)
    .function("getWTA_K", gen_wrap_cv::gen_wrap_ORB::getWTA_K)
    .function("setScoreType", gen_wrap_cv::gen_wrap_ORB::setScoreType)
    .function("getScoreType", gen_wrap_cv::gen_wrap_ORB::getScoreType)
    .function("setPatchSize", gen_wrap_cv::gen_wrap_ORB::setPatchSize)
    .function("getPatchSize", gen_wrap_cv::gen_wrap_ORB::getPatchSize)
    .function("setFastThreshold", gen_wrap_cv::gen_wrap_ORB::setFastThreshold)
    .function("getFastThreshold", gen_wrap_cv::gen_wrap_ORB::getFastThreshold)
    .function("getDefaultName", gen_wrap_cv::gen_wrap_ORB::getDefaultName)
  ;
  class_<cv::MSER,cv::Feature2D>("MSER")
    .class_function("create", gen_wrap_cv::gen_wrap_MSER::create)
    .function("detectRegions", gen_wrap_cv::gen_wrap_MSER::detectRegions)
    .function("setDelta", gen_wrap_cv::gen_wrap_MSER::setDelta)
    .function("getDelta", gen_wrap_cv::gen_wrap_MSER::getDelta)
    .function("setMinArea", gen_wrap_cv::gen_wrap_MSER::setMinArea)
    .function("getMinArea", gen_wrap_cv::gen_wrap_MSER::getMinArea)
    .function("setMaxArea", gen_wrap_cv::gen_wrap_MSER::setMaxArea)
    .function("getMaxArea", gen_wrap_cv::gen_wrap_MSER::getMaxArea)
    .function("setPass2Only", gen_wrap_cv::gen_wrap_MSER::setPass2Only)
    .function("getPass2Only", gen_wrap_cv::gen_wrap_MSER::getPass2Only)
    .function("getDefaultName", gen_wrap_cv::gen_wrap_MSER::getDefaultName)
  ;
  class_<cv::FastFeatureDetector,cv::Feature2D>("FastFeatureDetector")
    .class_function("create", gen_wrap_cv::gen_wrap_FastFeatureDetector::create)
    .function("setThreshold", gen_wrap_cv::gen_wrap_FastFeatureDetector::setThreshold)
    .function("getThreshold", gen_wrap_cv::gen_wrap_FastFeatureDetector::getThreshold)
    .function("setNonmaxSuppression", gen_wrap_cv::gen_wrap_FastFeatureDetector::setNonmaxSuppression)
    .function("getNonmaxSuppression", gen_wrap_cv::gen_wrap_FastFeatureDetector::getNonmaxSuppression)
    .function("setType", gen_wrap_cv::gen_wrap_FastFeatureDetector::setType)
    .function("getType", gen_wrap_cv::gen_wrap_FastFeatureDetector::getType)
    .function("getDefaultName", gen_wrap_cv::gen_wrap_FastFeatureDetector::getDefaultName)
  ;
  class_<cv::AgastFeatureDetector,cv::Feature2D>("AgastFeatureDetector")
    .class_function("create", gen_wrap_cv::gen_wrap_AgastFeatureDetector::create)
    .function("setThreshold", gen_wrap_cv::gen_wrap_AgastFeatureDetector::setThreshold)
    .function("getThreshold", gen_wrap_cv::gen_wrap_AgastFeatureDetector::getThreshold)
    .function("setNonmaxSuppression", gen_wrap_cv::gen_wrap_AgastFeatureDetector::setNonmaxSuppression)
    .function("getNonmaxSuppression", gen_wrap_cv::gen_wrap_AgastFeatureDetector::getNonmaxSuppression)
    .function("setType", gen_wrap_cv::gen_wrap_AgastFeatureDetector::setType)
    .function("getType", gen_wrap_cv::gen_wrap_AgastFeatureDetector::getType)
    .function("getDefaultName", gen_wrap_cv::gen_wrap_AgastFeatureDetector::getDefaultName)
  ;
  class_<cv::GFTTDetector,cv::Feature2D>("GFTTDetector")
    .class_function("create", gen_wrap_cv::gen_wrap_GFTTDetector::create)
    .function("setMaxFeatures", gen_wrap_cv::gen_wrap_GFTTDetector::setMaxFeatures)
    .function("getMaxFeatures", gen_wrap_cv::gen_wrap_GFTTDetector::getMaxFeatures)
    .function("setQualityLevel", gen_wrap_cv::gen_wrap_GFTTDetector::setQualityLevel)
    .function("getQualityLevel", gen_wrap_cv::gen_wrap_GFTTDetector::getQualityLevel)
    .function("setMinDistance", gen_wrap_cv::gen_wrap_GFTTDetector::setMinDistance)
    .function("getMinDistance", gen_wrap_cv::gen_wrap_GFTTDetector::getMinDistance)
    .function("setBlockSize", gen_wrap_cv::gen_wrap_GFTTDetector::setBlockSize)
    .function("getBlockSize", gen_wrap_cv::gen_wrap_GFTTDetector::getBlockSize)
    .function("setHarrisDetector", gen_wrap_cv::gen_wrap_GFTTDetector::setHarrisDetector)
    .function("getHarrisDetector", gen_wrap_cv::gen_wrap_GFTTDetector::getHarrisDetector)
    .function("setK", gen_wrap_cv::gen_wrap_GFTTDetector::setK)
    .function("getK", gen_wrap_cv::gen_wrap_GFTTDetector::getK)
    .function("getDefaultName", gen_wrap_cv::gen_wrap_GFTTDetector::getDefaultName)
  ;
  class_<cv::SimpleBlobDetector,cv::Feature2D>("SimpleBlobDetector")
    .constructor<>()
    .class_function("create", gen_wrap_cv::gen_wrap_SimpleBlobDetector::create)
    .function("getDefaultName", gen_wrap_cv::gen_wrap_SimpleBlobDetector::getDefaultName)
  ;
  class_<cv::KAZE,cv::Feature2D>("KAZE")
    .class_function("create", gen_wrap_cv::gen_wrap_KAZE::create)
    .function("setExtended", gen_wrap_cv::gen_wrap_KAZE::setExtended)
    .function("getExtended", gen_wrap_cv::gen_wrap_KAZE::getExtended)
    .function("setUpright", gen_wrap_cv::gen_wrap_KAZE::setUpright)
    .function("getUpright", gen_wrap_cv::gen_wrap_KAZE::getUpright)
    .function("setThreshold", gen_wrap_cv::gen_wrap_KAZE::setThreshold)
    .function("getThreshold", gen_wrap_cv::gen_wrap_KAZE::getThreshold)
    .function("setNOctaves", gen_wrap_cv::gen_wrap_KAZE::setNOctaves)
    .function("getNOctaves", gen_wrap_cv::gen_wrap_KAZE::getNOctaves)
    .function("setNOctaveLayers", gen_wrap_cv::gen_wrap_KAZE::setNOctaveLayers)
    .function("getNOctaveLayers", gen_wrap_cv::gen_wrap_KAZE::getNOctaveLayers)
    .function("setDiffusivity", gen_wrap_cv::gen_wrap_KAZE::setDiffusivity)
    .function("getDiffusivity", gen_wrap_cv::gen_wrap_KAZE::getDiffusivity)
    .function("getDefaultName", gen_wrap_cv::gen_wrap_KAZE::getDefaultName)
  ;
  class_<cv::AKAZE,cv::Feature2D>("AKAZE")
    .class_function("create", gen_wrap_cv::gen_wrap_AKAZE::create)
    .function("setDescriptorType", gen_wrap_cv::gen_wrap_AKAZE::setDescriptorType)
    .function("getDescriptorType", gen_wrap_cv::gen_wrap_AKAZE::getDescriptorType)
    .function("setDescriptorSize", gen_wrap_cv::gen_wrap_AKAZE::setDescriptorSize)
    .function("getDescriptorSize", gen_wrap_cv::gen_wrap_AKAZE::getDescriptorSize)
    .function("setDescriptorChannels", gen_wrap_cv::gen_wrap_AKAZE::setDescriptorChannels)
    .function("getDescriptorChannels", gen_wrap_cv::gen_wrap_AKAZE::getDescriptorChannels)
    .function("setThreshold", gen_wrap_cv::gen_wrap_AKAZE::setThreshold)
    .function("getThreshold", gen_wrap_cv::gen_wrap_AKAZE::getThreshold)
    .function("setNOctaves", gen_wrap_cv::gen_wrap_AKAZE::setNOctaves)
    .function("getNOctaves", gen_wrap_cv::gen_wrap_AKAZE::getNOctaves)
    .function("setNOctaveLayers", gen_wrap_cv::gen_wrap_AKAZE::setNOctaveLayers)
    .function("getNOctaveLayers", gen_wrap_cv::gen_wrap_AKAZE::getNOctaveLayers)
    .function("setDiffusivity", gen_wrap_cv::gen_wrap_AKAZE::setDiffusivity)
    .function("getDiffusivity", gen_wrap_cv::gen_wrap_AKAZE::getDiffusivity)
    .function("getDefaultName", gen_wrap_cv::gen_wrap_AKAZE::getDefaultName)
  ;
  class_<cv::DescriptorMatcher,cv::Algorithm>("DescriptorMatcher")
    .function("add", gen_wrap_cv::gen_wrap_DescriptorMatcher::add)
    .function("getTrainDescriptors", gen_wrap_cv::gen_wrap_DescriptorMatcher::getTrainDescriptors)
    .function("clear", gen_wrap_cv::gen_wrap_DescriptorMatcher::clear)
    .function("empty", gen_wrap_cv::gen_wrap_DescriptorMatcher::empty)
    .function("isMaskSupported", gen_wrap_cv::gen_wrap_DescriptorMatcher::isMaskSupported)
    .function("train", gen_wrap_cv::gen_wrap_DescriptorMatcher::train)
    .function("match", gen_wrap_cv::gen_wrap_DescriptorMatcher::match)
    .function("knnMatch", gen_wrap_cv::gen_wrap_DescriptorMatcher::knnMatch)
    .function("radiusMatch", gen_wrap_cv::gen_wrap_DescriptorMatcher::radiusMatch)
    .function("write", gen_wrap_cv::gen_wrap_DescriptorMatcher::write)
    .function("read", gen_wrap_cv::gen_wrap_DescriptorMatcher::read)
    .function("clone", gen_wrap_cv::gen_wrap_DescriptorMatcher::clone)
    .class_function("create", gen_wrap_cv::gen_wrap_DescriptorMatcher::create)
  ;
  class_<cv::BFMatcher,cv::DescriptorMatcher>("BFMatcher")
    .constructors<void (int, bool)>()
    .function("isMaskSupported", gen_wrap_cv::gen_wrap_BFMatcher::isMaskSupported)
    .class_function("create", gen_wrap_cv::gen_wrap_BFMatcher::create)
    .function("clone", gen_wrap_cv::gen_wrap_BFMatcher::clone)
  ;
  class_<cv::FlannBasedMatcher,cv::DescriptorMatcher>("FlannBasedMatcher")
    .constructors<void (const Ptr<flann::IndexParams> &, const Ptr<flann::SearchParams> &)>()
    .function("add", gen_wrap_cv::gen_wrap_FlannBasedMatcher::add)
    .function("clear", gen_wrap_cv::gen_wrap_FlannBasedMatcher::clear)
    .function("read", gen_wrap_cv::gen_wrap_FlannBasedMatcher::read)
    .function("write", gen_wrap_cv::gen_wrap_FlannBasedMatcher::write)
    .function("train", gen_wrap_cv::gen_wrap_FlannBasedMatcher::train)
    .function("isMaskSupported", gen_wrap_cv::gen_wrap_FlannBasedMatcher::isMaskSupported)
    .class_function("create", gen_wrap_cv::gen_wrap_FlannBasedMatcher::create)
    .function("clone", gen_wrap_cv::gen_wrap_FlannBasedMatcher::clone)
  ;
  class_<cv::BOWTrainer>("BOWTrainer")
    .function("add", gen_wrap_cv::gen_wrap_BOWTrainer::add)
    .function("getDescriptors", gen_wrap_cv::gen_wrap_BOWTrainer::getDescriptors)
    .function("descriptorsCount", gen_wrap_cv::gen_wrap_BOWTrainer::descriptorsCount)
    .function("clear", gen_wrap_cv::gen_wrap_BOWTrainer::clear)
    .function("cluster", gen_wrap_cv::gen_wrap_BOWTrainer::cluster)
  ;
  class_<cv::BOWKMeansTrainer,cv::BOWTrainer>("BOWKMeansTrainer")
    .constructors<void (int, const TermCriteria &, int, int)>()
    .function("cluster", gen_wrap_cv::gen_wrap_BOWKMeansTrainer::cluster)
  ;
  class_<cv::BOWImgDescriptorExtractor>("BOWImgDescriptorExtractor")
    .constructors<void (const Ptr<DescriptorExtractor> &, const Ptr<DescriptorMatcher> &),void (const Ptr<DescriptorMatcher> &)>()
    .function("setVocabulary", gen_wrap_cv::gen_wrap_BOWImgDescriptorExtractor::setVocabulary)
    .function("getVocabulary", gen_wrap_cv::gen_wrap_BOWImgDescriptorExtractor::getVocabulary)
    .function("compute", gen_wrap_cv::gen_wrap_BOWImgDescriptorExtractor::compute)
    .function("compute2", gen_wrap_cv::gen_wrap_BOWImgDescriptorExtractor::compute2)
    .function("descriptorSize", gen_wrap_cv::gen_wrap_BOWImgDescriptorExtractor::descriptorSize)
    .function("descriptorType", gen_wrap_cv::gen_wrap_BOWImgDescriptorExtractor::descriptorType)
  ;
  class_<cv::UsacParams>("UsacParams")
    .constructors<void ()>()
    .property("confidence", &cv::UsacParams::confidence)
    .property("isParallel", &cv::UsacParams::isParallel)
    .property("loIterations", &cv::UsacParams::loIterations)
    .property("loMethod", &cv::UsacParams::loMethod)
    .property("loSampleSize", &cv::UsacParams::loSampleSize)
    .property("maxIterations", &cv::UsacParams::maxIterations)
    .property("neighborsSearch", &cv::UsacParams::neighborsSearch)
    .property("randomGeneratorState", &cv::UsacParams::randomGeneratorState)
    .property("sampler", &cv::UsacParams::sampler)
    .property("score", &cv::UsacParams::score)
    .property("threshold", &cv::UsacParams::threshold)
  ;
  class_<cv::LMSolver,cv::Algorithm>("LMSolver")
    .function("run", gen_wrap_cv::gen_wrap_LMSolver::run)
    .function("setMaxIters", gen_wrap_cv::gen_wrap_LMSolver::setMaxIters)
    .function("getMaxIters", gen_wrap_cv::gen_wrap_LMSolver::getMaxIters)
    .class_function("create", gen_wrap_cv::gen_wrap_LMSolver::create)
  ;
  class_<cv::CirclesGridFinderParameters>("CirclesGridFinderParameters")
    .constructors<void ()>()
    .property("densityNeighborhoodSize", &cv::CirclesGridFinderParameters::densityNeighborhoodSize)
    .property("minDensity", &cv::CirclesGridFinderParameters::minDensity)
    .property("kmeansAttempts", &cv::CirclesGridFinderParameters::kmeansAttempts)
    .property("minDistanceToAddKeypoint", &cv::CirclesGridFinderParameters::minDistanceToAddKeypoint)
    .property("keypointScale", &cv::CirclesGridFinderParameters::keypointScale)
    .property("minGraphConfidence", &cv::CirclesGridFinderParameters::minGraphConfidence)
    .property("vertexGain", &cv::CirclesGridFinderParameters::vertexGain)
    .property("vertexPenalty", &cv::CirclesGridFinderParameters::vertexPenalty)
    .property("existingVertexGain", &cv::CirclesGridFinderParameters::existingVertexGain)
    .property("edgeGain", &cv::CirclesGridFinderParameters::edgeGain)
    .property("edgePenalty", &cv::CirclesGridFinderParameters::edgePenalty)
    .property("convexHullFactor", &cv::CirclesGridFinderParameters::convexHullFactor)
    .property("minRNGEdgeSwitchDist", &cv::CirclesGridFinderParameters::minRNGEdgeSwitchDist)
    .property("gridType", &cv::CirclesGridFinderParameters::gridType)
    .property("squareSize", &cv::CirclesGridFinderParameters::squareSize)
    .property("maxRectifiedDistance", &cv::CirclesGridFinderParameters::maxRectifiedDistance)
  ;
  class_<cv::StereoMatcher,cv::Algorithm>("StereoMatcher")
    .function("compute", gen_wrap_cv::gen_wrap_StereoMatcher::compute)
    .function("getMinDisparity", gen_wrap_cv::gen_wrap_StereoMatcher::getMinDisparity)
    .function("setMinDisparity", gen_wrap_cv::gen_wrap_StereoMatcher::setMinDisparity)
    .function("getNumDisparities", gen_wrap_cv::gen_wrap_StereoMatcher::getNumDisparities)
    .function("setNumDisparities", gen_wrap_cv::gen_wrap_StereoMatcher::setNumDisparities)
    .function("getBlockSize", gen_wrap_cv::gen_wrap_StereoMatcher::getBlockSize)
    .function("setBlockSize", gen_wrap_cv::gen_wrap_StereoMatcher::setBlockSize)
    .function("getSpeckleWindowSize", gen_wrap_cv::gen_wrap_StereoMatcher::getSpeckleWindowSize)
    .function("setSpeckleWindowSize", gen_wrap_cv::gen_wrap_StereoMatcher::setSpeckleWindowSize)
    .function("getSpeckleRange", gen_wrap_cv::gen_wrap_StereoMatcher::getSpeckleRange)
    .function("setSpeckleRange", gen_wrap_cv::gen_wrap_StereoMatcher::setSpeckleRange)
    .function("getDisp12MaxDiff", gen_wrap_cv::gen_wrap_StereoMatcher::getDisp12MaxDiff)
    .function("setDisp12MaxDiff", gen_wrap_cv::gen_wrap_StereoMatcher::setDisp12MaxDiff)
  ;
  class_<cv::StereoBM,cv::StereoMatcher>("StereoBM")
    .function("getPreFilterType", gen_wrap_cv::gen_wrap_StereoBM::getPreFilterType)
    .function("setPreFilterType", gen_wrap_cv::gen_wrap_StereoBM::setPreFilterType)
    .function("getPreFilterSize", gen_wrap_cv::gen_wrap_StereoBM::getPreFilterSize)
    .function("setPreFilterSize", gen_wrap_cv::gen_wrap_StereoBM::setPreFilterSize)
    .function("getPreFilterCap", gen_wrap_cv::gen_wrap_StereoBM::getPreFilterCap)
    .function("setPreFilterCap", gen_wrap_cv::gen_wrap_StereoBM::setPreFilterCap)
    .function("getTextureThreshold", gen_wrap_cv::gen_wrap_StereoBM::getTextureThreshold)
    .function("setTextureThreshold", gen_wrap_cv::gen_wrap_StereoBM::setTextureThreshold)
    .function("getUniquenessRatio", gen_wrap_cv::gen_wrap_StereoBM::getUniquenessRatio)
    .function("setUniquenessRatio", gen_wrap_cv::gen_wrap_StereoBM::setUniquenessRatio)
    .function("getSmallerBlockSize", gen_wrap_cv::gen_wrap_StereoBM::getSmallerBlockSize)
    .function("setSmallerBlockSize", gen_wrap_cv::gen_wrap_StereoBM::setSmallerBlockSize)
    .function("getROI1", gen_wrap_cv::gen_wrap_StereoBM::getROI1)
    .function("setROI1", gen_wrap_cv::gen_wrap_StereoBM::setROI1)
    .function("getROI2", gen_wrap_cv::gen_wrap_StereoBM::getROI2)
    .function("setROI2", gen_wrap_cv::gen_wrap_StereoBM::setROI2)
    .class_function("create", gen_wrap_cv::gen_wrap_StereoBM::create)
  ;
  class_<cv::StereoSGBM,cv::StereoMatcher>("StereoSGBM")
    .function("getPreFilterCap", gen_wrap_cv::gen_wrap_StereoSGBM::getPreFilterCap)
    .function("setPreFilterCap", gen_wrap_cv::gen_wrap_StereoSGBM::setPreFilterCap)
    .function("getUniquenessRatio", gen_wrap_cv::gen_wrap_StereoSGBM::getUniquenessRatio)
    .function("setUniquenessRatio", gen_wrap_cv::gen_wrap_StereoSGBM::setUniquenessRatio)
    .function("getP1", gen_wrap_cv::gen_wrap_StereoSGBM::getP1)
    .function("setP1", gen_wrap_cv::gen_wrap_StereoSGBM::setP1)
    .function("getP2", gen_wrap_cv::gen_wrap_StereoSGBM::getP2)
    .function("setP2", gen_wrap_cv::gen_wrap_StereoSGBM::setP2)
    .function("getMode", gen_wrap_cv::gen_wrap_StereoSGBM::getMode)
    .function("setMode", gen_wrap_cv::gen_wrap_StereoSGBM::setMode)
    .class_function("create", gen_wrap_cv::gen_wrap_StereoSGBM::create)
  ;
  class_<cv::AsyncArray>("AsyncArray")
    .constructors<void () noexcept,void (const AsyncArray &) noexcept,void (AsyncArray &&)>()
    .function("release", gen_wrap_cv::gen_wrap_AsyncArray::release)
    .function("get", gen_wrap_cv::gen_wrap_AsyncArray::get)
    .function("wait_for", gen_wrap_cv::gen_wrap_AsyncArray::wait_for)
    .function("valid", gen_wrap_cv::gen_wrap_AsyncArray::valid)
    .function("_getImpl", gen_wrap_cv::gen_wrap_AsyncArray::_getImpl)
  ;
  class_<cv::VideoCapture>("VideoCapture")
    .constructors<void (),void (const String &, int),void (const String &, int, const std::vector<int> &),void (int, int),void (int, int, const std::vector<int> &)>()
    .function("open", gen_wrap_cv::gen_wrap_VideoCapture::open)
    .function("isOpened", gen_wrap_cv::gen_wrap_VideoCapture::isOpened)
    .function("release", gen_wrap_cv::gen_wrap_VideoCapture::release)
    .function("grab", gen_wrap_cv::gen_wrap_VideoCapture::grab)
    .function("retrieve", gen_wrap_cv::gen_wrap_VideoCapture::retrieve)
    .function("read", gen_wrap_cv::gen_wrap_VideoCapture::read)
    .function("set", gen_wrap_cv::gen_wrap_VideoCapture::set)
    .function("get", gen_wrap_cv::gen_wrap_VideoCapture::get)
    .function("getBackendName", gen_wrap_cv::gen_wrap_VideoCapture::getBackendName)
    .function("setExceptionMode", gen_wrap_cv::gen_wrap_VideoCapture::setExceptionMode)
    .function("getExceptionMode", gen_wrap_cv::gen_wrap_VideoCapture::getExceptionMode)
    .class_function("waitAny", gen_wrap_cv::gen_wrap_VideoCapture::waitAny)
  ;
  class_<cv::VideoWriter>("VideoWriter")
    .constructors<void (),void (const String &, int, double, Size, bool),void (const String &, int, int, double, Size, bool),void (const String &, int, double, const Size &, const std::vector<int> &),void (const String &, int, int, double, const Size &, const std::vector<int> &)>()
    .function("open", gen_wrap_cv::gen_wrap_VideoWriter::open)
    .function("isOpened", gen_wrap_cv::gen_wrap_VideoWriter::isOpened)
    .function("release", gen_wrap_cv::gen_wrap_VideoWriter::release)
    .function("write", gen_wrap_cv::gen_wrap_VideoWriter::write)
    .function("set", gen_wrap_cv::gen_wrap_VideoWriter::set)
    .function("get", gen_wrap_cv::gen_wrap_VideoWriter::get)
    .class_function("fourcc", gen_wrap_cv::gen_wrap_VideoWriter::fourcc)
    .function("getBackendName", gen_wrap_cv::gen_wrap_VideoWriter::getBackendName)
  ;
  class_<cv::QtFont>("QtFont")
    .constructor<>()
    .property("nameFont", &cv::QtFont::nameFont)
    .property("color", &cv::QtFont::color)
    .property("font_face", &cv::QtFont::font_face)
    .property("ascii", &cv::QtFont::ascii)
    .property("greek", &cv::QtFont::greek)
    .property("cyrillic", &cv::QtFont::cyrillic)
    .property("hscale", &cv::QtFont::hscale)
    .property("vscale", &cv::QtFont::vscale)
    .property("shear", &cv::QtFont::shear)
    .property("thickness", &cv::QtFont::thickness)
    .property("dx", &cv::QtFont::dx)
    .property("line_type", &cv::QtFont::line_type)
  ;
  class_<cv::GeneralizedHough,cv::Algorithm>("GeneralizedHough")
    .function("setTemplate", gen_wrap_cv::gen_wrap_GeneralizedHough::setTemplate)
    .function("detect", gen_wrap_cv::gen_wrap_GeneralizedHough::detect)
    .function("setCannyLowThresh", gen_wrap_cv::gen_wrap_GeneralizedHough::setCannyLowThresh)
    .function("getCannyLowThresh", gen_wrap_cv::gen_wrap_GeneralizedHough::getCannyLowThresh)
    .function("setCannyHighThresh", gen_wrap_cv::gen_wrap_GeneralizedHough::setCannyHighThresh)
    .function("getCannyHighThresh", gen_wrap_cv::gen_wrap_GeneralizedHough::getCannyHighThresh)
    .function("setMinDist", gen_wrap_cv::gen_wrap_GeneralizedHough::setMinDist)
    .function("getMinDist", gen_wrap_cv::gen_wrap_GeneralizedHough::getMinDist)
    .function("setDp", gen_wrap_cv::gen_wrap_GeneralizedHough::setDp)
    .function("getDp", gen_wrap_cv::gen_wrap_GeneralizedHough::getDp)
    .function("setMaxBufferSize", gen_wrap_cv::gen_wrap_GeneralizedHough::setMaxBufferSize)
    .function("getMaxBufferSize", gen_wrap_cv::gen_wrap_GeneralizedHough::getMaxBufferSize)
  ;
  class_<cv::GeneralizedHoughBallard,cv::GeneralizedHough>("GeneralizedHoughBallard")
    .function("setLevels", gen_wrap_cv::gen_wrap_GeneralizedHoughBallard::setLevels)
    .function("getLevels", gen_wrap_cv::gen_wrap_GeneralizedHoughBallard::getLevels)
    .function("setVotesThreshold", gen_wrap_cv::gen_wrap_GeneralizedHoughBallard::setVotesThreshold)
    .function("getVotesThreshold", gen_wrap_cv::gen_wrap_GeneralizedHoughBallard::getVotesThreshold)
  ;
  class_<cv::GeneralizedHoughGuil,cv::GeneralizedHough>("GeneralizedHoughGuil")
    .function("setXi", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setXi)
    .function("getXi", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getXi)
    .function("setLevels", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setLevels)
    .function("getLevels", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getLevels)
    .function("setAngleEpsilon", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setAngleEpsilon)
    .function("getAngleEpsilon", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getAngleEpsilon)
    .function("setMinAngle", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setMinAngle)
    .function("getMinAngle", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getMinAngle)
    .function("setMaxAngle", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setMaxAngle)
    .function("getMaxAngle", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getMaxAngle)
    .function("setAngleStep", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setAngleStep)
    .function("getAngleStep", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getAngleStep)
    .function("setAngleThresh", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setAngleThresh)
    .function("getAngleThresh", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getAngleThresh)
    .function("setMinScale", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setMinScale)
    .function("getMinScale", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getMinScale)
    .function("setMaxScale", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setMaxScale)
    .function("getMaxScale", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getMaxScale)
    .function("setScaleStep", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setScaleStep)
    .function("getScaleStep", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getScaleStep)
    .function("setScaleThresh", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setScaleThresh)
    .function("getScaleThresh", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getScaleThresh)
    .function("setPosThresh", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setPosThresh)
    .function("getPosThresh", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getPosThresh)
  ;
  class_<cv::CLAHE,cv::Algorithm>("CLAHE")
    .function("apply", gen_wrap_cv::gen_wrap_CLAHE::apply)
    .function("setClipLimit", gen_wrap_cv::gen_wrap_CLAHE::setClipLimit)
    .function("getClipLimit", gen_wrap_cv::gen_wrap_CLAHE::getClipLimit)
    .function("setTilesGridSize", gen_wrap_cv::gen_wrap_CLAHE::setTilesGridSize)
    .function("getTilesGridSize", gen_wrap_cv::gen_wrap_CLAHE::getTilesGridSize)
    .function("collectGarbage", gen_wrap_cv::gen_wrap_CLAHE::collectGarbage)
  ;
  class_<cv::Subdiv2D>("Subdiv2D")
    .constructors<void (),void (Rect)>()
    .function("initDelaunay", gen_wrap_cv::gen_wrap_Subdiv2D::initDelaunay)
    .function("insert", gen_wrap_cv::gen_wrap_Subdiv2D::insert)
    .function("locate", gen_wrap_cv::gen_wrap_Subdiv2D::locate)
    .function("findNearest", gen_wrap_cv::gen_wrap_Subdiv2D::findNearest)
    .function("getEdgeList", gen_wrap_cv::gen_wrap_Subdiv2D::getEdgeList)
    .function("getLeadingEdgeList", gen_wrap_cv::gen_wrap_Subdiv2D::getLeadingEdgeList)
    .function("getTriangleList", gen_wrap_cv::gen_wrap_Subdiv2D::getTriangleList)
    .function("getVoronoiFacetList", gen_wrap_cv::gen_wrap_Subdiv2D::getVoronoiFacetList)
    .function("getVertex", gen_wrap_cv::gen_wrap_Subdiv2D::getVertex)
    .function("getEdge", gen_wrap_cv::gen_wrap_Subdiv2D::getEdge)
    .function("nextEdge", gen_wrap_cv::gen_wrap_Subdiv2D::nextEdge)
    .function("rotateEdge", gen_wrap_cv::gen_wrap_Subdiv2D::rotateEdge)
    .function("symEdge", gen_wrap_cv::gen_wrap_Subdiv2D::symEdge)
    .function("edgeOrg", gen_wrap_cv::gen_wrap_Subdiv2D::edgeOrg)
    .function("edgeDst", gen_wrap_cv::gen_wrap_Subdiv2D::edgeDst)
  ;
  class_<cv::LineSegmentDetector,cv::Algorithm>("LineSegmentDetector")
    .function("detect", gen_wrap_cv::gen_wrap_LineSegmentDetector::detect)
    .function("drawSegments", gen_wrap_cv::gen_wrap_LineSegmentDetector::drawSegments)
    .function("compareSegments", gen_wrap_cv::gen_wrap_LineSegmentDetector::compareSegments)
  ;
  class_<cv::LineIterator>("LineIterator")
    .constructors<void (const Mat &, Point, Point, int, bool),void (Point, Point, int, bool),void (Size, Point, Point, int, bool),void (Rect, Point, Point, int, bool)>()
    .function("init", gen_wrap_cv::gen_wrap_LineIterator::init)
    .function("pos", gen_wrap_cv::gen_wrap_LineIterator::pos)
    .class_function("__mul", &cv::LineIterator::operator*)
    .property("ptr", &cv::LineIterator::ptr)
    .property("ptr0", &cv::LineIterator::ptr0)
    .property("step", &cv::LineIterator::step)
    .property("elemSize", &cv::LineIterator::elemSize)
    .property("err", &cv::LineIterator::err)
    .property("count", &cv::LineIterator::count)
    .property("minusDelta", &cv::LineIterator::minusDelta)
    .property("plusDelta", &cv::LineIterator::plusDelta)
    .property("minusStep", &cv::LineIterator::minusStep)
    .property("plusStep", &cv::LineIterator::plusStep)
    .property("minusShift", &cv::LineIterator::minusShift)
    .property("plusShift", &cv::LineIterator::plusShift)
    .property("p", &cv::LineIterator::p)
    .property("ptmode", &cv::LineIterator::ptmode)
  ;
  class_<cv::SimilarRects>("SimilarRects")
    .constructors<void (double)>()
    .property("eps", &cv::SimilarRects::eps)
  ;
  class_<cv::BaseCascadeClassifier,cv::Algorithm>("BaseCascadeClassifier")
    .function("empty", gen_wrap_cv::gen_wrap_BaseCascadeClassifier::empty)
    .function("load", gen_wrap_cv::gen_wrap_BaseCascadeClassifier::load)
    .function("detectMultiScale", gen_wrap_cv::gen_wrap_BaseCascadeClassifier::detectMultiScale)
    .function("isOldFormatCascade", gen_wrap_cv::gen_wrap_BaseCascadeClassifier::isOldFormatCascade)
    .function("getOriginalWindowSize", gen_wrap_cv::gen_wrap_BaseCascadeClassifier::getOriginalWindowSize)
    .function("getFeatureType", gen_wrap_cv::gen_wrap_BaseCascadeClassifier::getFeatureType)
    .function("getOldCascade", gen_wrap_cv::gen_wrap_BaseCascadeClassifier::getOldCascade)
    .function("setMaskGenerator", gen_wrap_cv::gen_wrap_BaseCascadeClassifier::setMaskGenerator)
    .function("getMaskGenerator", gen_wrap_cv::gen_wrap_BaseCascadeClassifier::getMaskGenerator)
  ;
  class_<cv::CascadeClassifier>("CascadeClassifier")
    .constructors<void (),void (const String &)>()
    .function("empty", gen_wrap_cv::gen_wrap_CascadeClassifier::empty)
    .function("load", gen_wrap_cv::gen_wrap_CascadeClassifier::load)
    .function("read", gen_wrap_cv::gen_wrap_CascadeClassifier::read)
    .function("detectMultiScale", gen_wrap_cv::gen_wrap_CascadeClassifier::detectMultiScale)
    .function("isOldFormatCascade", gen_wrap_cv::gen_wrap_CascadeClassifier::isOldFormatCascade)
    .function("getOriginalWindowSize", gen_wrap_cv::gen_wrap_CascadeClassifier::getOriginalWindowSize)
    .function("getFeatureType", gen_wrap_cv::gen_wrap_CascadeClassifier::getFeatureType)
    .function("getOldCascade", gen_wrap_cv::gen_wrap_CascadeClassifier::getOldCascade)
    .class_function("convert", gen_wrap_cv::gen_wrap_CascadeClassifier::convert)
    .function("setMaskGenerator", gen_wrap_cv::gen_wrap_CascadeClassifier::setMaskGenerator)
    .function("getMaskGenerator", gen_wrap_cv::gen_wrap_CascadeClassifier::getMaskGenerator)
    .property("cc", &cv::CascadeClassifier::cc)
  ;
  class_<cv::DetectionROI>("DetectionROI")
    .constructor<>()
    .property("scale", &cv::DetectionROI::scale)
    .property("locations", &cv::DetectionROI::locations)
    .property("confidences", &cv::DetectionROI::confidences)
  ;
  class_<cv::HOGDescriptor>("HOGDescriptor")
    .constructors<void (),void (Size, Size, Size, Size, int, int, double, HOGDescriptor::HistogramNormType, double, bool, int, bool),void (const String &),void (const HOGDescriptor &)>()
    .function("getDescriptorSize", gen_wrap_cv::gen_wrap_HOGDescriptor::getDescriptorSize)
    .function("checkDetectorSize", gen_wrap_cv::gen_wrap_HOGDescriptor::checkDetectorSize)
    .function("getWinSigma", gen_wrap_cv::gen_wrap_HOGDescriptor::getWinSigma)
    .function("setSVMDetector", gen_wrap_cv::gen_wrap_HOGDescriptor::setSVMDetector)
    .function("read", gen_wrap_cv::gen_wrap_HOGDescriptor::read)
    .function("write", gen_wrap_cv::gen_wrap_HOGDescriptor::write)
    .function("load", gen_wrap_cv::gen_wrap_HOGDescriptor::load)
    .function("save", gen_wrap_cv::gen_wrap_HOGDescriptor::save)
    .function("copyTo", gen_wrap_cv::gen_wrap_HOGDescriptor::copyTo)
    .function("compute", gen_wrap_cv::gen_wrap_HOGDescriptor::compute)
    .function("detect", gen_wrap_cv::gen_wrap_HOGDescriptor::detect)
    .function("detectMultiScale", gen_wrap_cv::gen_wrap_HOGDescriptor::detectMultiScale)
    .function("computeGradient", gen_wrap_cv::gen_wrap_HOGDescriptor::computeGradient)
    .class_function("getDefaultPeopleDetector", gen_wrap_cv::gen_wrap_HOGDescriptor::getDefaultPeopleDetector)
    .class_function("getDaimlerPeopleDetector", gen_wrap_cv::gen_wrap_HOGDescriptor::getDaimlerPeopleDetector)
    .function("detectROI", gen_wrap_cv::gen_wrap_HOGDescriptor::detectROI)
    .function("detectMultiScaleROI", gen_wrap_cv::gen_wrap_HOGDescriptor::detectMultiScaleROI)
    .function("groupRectangles", gen_wrap_cv::gen_wrap_HOGDescriptor::groupRectangles)
    .property("winSize", &cv::HOGDescriptor::winSize)
    .property("blockSize", &cv::HOGDescriptor::blockSize)
    .property("blockStride", &cv::HOGDescriptor::blockStride)
    .property("cellSize", &cv::HOGDescriptor::cellSize)
    .property("nbins", &cv::HOGDescriptor::nbins)
    .property("derivAperture", &cv::HOGDescriptor::derivAperture)
    .property("winSigma", &cv::HOGDescriptor::winSigma)
    .property("histogramNormType", &cv::HOGDescriptor::histogramNormType)
    .property("L2HysThreshold", &cv::HOGDescriptor::L2HysThreshold)
    .property("gammaCorrection", &cv::HOGDescriptor::gammaCorrection)
    .property("svmDetector", &cv::HOGDescriptor::svmDetector)
    .property("oclSvmDetector", &cv::HOGDescriptor::oclSvmDetector)
    .property("free_coef", &cv::HOGDescriptor::free_coef)
    .property("nlevels", &cv::HOGDescriptor::nlevels)
    .property("signedGradient", &cv::HOGDescriptor::signedGradient)
  ;
  class_<cv::QRCodeDetector>("QRCodeDetector")
    .constructors<void ()>()
    .function("setEpsX", gen_wrap_cv::gen_wrap_QRCodeDetector::setEpsX)
    .function("setEpsY", gen_wrap_cv::gen_wrap_QRCodeDetector::setEpsY)
    .function("detect", gen_wrap_cv::gen_wrap_QRCodeDetector::detect)
    .function("decode", gen_wrap_cv::gen_wrap_QRCodeDetector::decode)
    .function("decodeCurved", gen_wrap_cv::gen_wrap_QRCodeDetector::decodeCurved)
    .function("detectAndDecode", gen_wrap_cv::gen_wrap_QRCodeDetector::detectAndDecode)
    .function("detectAndDecodeCurved", gen_wrap_cv::gen_wrap_QRCodeDetector::detectAndDecodeCurved)
    .function("detectMulti", gen_wrap_cv::gen_wrap_QRCodeDetector::detectMulti)
    .function("decodeMulti", gen_wrap_cv::gen_wrap_QRCodeDetector::decodeMulti)
    .function("detectAndDecodeMulti", gen_wrap_cv::gen_wrap_QRCodeDetector::detectAndDecodeMulti)
  ;
  class_<cv::FaceDetectorYN>("FaceDetectorYN")
    .function("setInputSize", gen_wrap_cv::gen_wrap_FaceDetectorYN::setInputSize)
    .function("getInputSize", gen_wrap_cv::gen_wrap_FaceDetectorYN::getInputSize)
    .function("setScoreThreshold", gen_wrap_cv::gen_wrap_FaceDetectorYN::setScoreThreshold)
    .function("getScoreThreshold", gen_wrap_cv::gen_wrap_FaceDetectorYN::getScoreThreshold)
    .function("setNMSThreshold", gen_wrap_cv::gen_wrap_FaceDetectorYN::setNMSThreshold)
    .function("getNMSThreshold", gen_wrap_cv::gen_wrap_FaceDetectorYN::getNMSThreshold)
    .function("setTopK", gen_wrap_cv::gen_wrap_FaceDetectorYN::setTopK)
    .function("getTopK", gen_wrap_cv::gen_wrap_FaceDetectorYN::getTopK)
    .function("detect", gen_wrap_cv::gen_wrap_FaceDetectorYN::detect)
    .class_function("create", gen_wrap_cv::gen_wrap_FaceDetectorYN::create)
  ;
  class_<cv::FaceRecognizerSF>("FaceRecognizerSF")
    .function("alignCrop", gen_wrap_cv::gen_wrap_FaceRecognizerSF::alignCrop)
    .function("feature", gen_wrap_cv::gen_wrap_FaceRecognizerSF::feature)
    .function("match", gen_wrap_cv::gen_wrap_FaceRecognizerSF::match)
    .class_function("create", gen_wrap_cv::gen_wrap_FaceRecognizerSF::create)
  ;
  class_<cv::Tonemap,cv::Algorithm>("Tonemap")
    .function("process", gen_wrap_cv::gen_wrap_Tonemap::process)
    .function("getGamma", gen_wrap_cv::gen_wrap_Tonemap::getGamma)
    .function("setGamma", gen_wrap_cv::gen_wrap_Tonemap::setGamma)
  ;
  class_<cv::TonemapDrago,cv::Tonemap>("TonemapDrago")
    .function("getSaturation", gen_wrap_cv::gen_wrap_TonemapDrago::getSaturation)
    .function("setSaturation", gen_wrap_cv::gen_wrap_TonemapDrago::setSaturation)
    .function("getBias", gen_wrap_cv::gen_wrap_TonemapDrago::getBias)
    .function("setBias", gen_wrap_cv::gen_wrap_TonemapDrago::setBias)
  ;
  class_<cv::TonemapReinhard,cv::Tonemap>("TonemapReinhard")
    .function("getIntensity", gen_wrap_cv::gen_wrap_TonemapReinhard::getIntensity)
    .function("setIntensity", gen_wrap_cv::gen_wrap_TonemapReinhard::setIntensity)
    .function("getLightAdaptation", gen_wrap_cv::gen_wrap_TonemapReinhard::getLightAdaptation)
    .function("setLightAdaptation", gen_wrap_cv::gen_wrap_TonemapReinhard::setLightAdaptation)
    .function("getColorAdaptation", gen_wrap_cv::gen_wrap_TonemapReinhard::getColorAdaptation)
    .function("setColorAdaptation", gen_wrap_cv::gen_wrap_TonemapReinhard::setColorAdaptation)
  ;
  class_<cv::TonemapMantiuk,cv::Tonemap>("TonemapMantiuk")
    .function("getScale", gen_wrap_cv::gen_wrap_TonemapMantiuk::getScale)
    .function("setScale", gen_wrap_cv::gen_wrap_TonemapMantiuk::setScale)
    .function("getSaturation", gen_wrap_cv::gen_wrap_TonemapMantiuk::getSaturation)
    .function("setSaturation", gen_wrap_cv::gen_wrap_TonemapMantiuk::setSaturation)
  ;
  class_<cv::AlignExposures,cv::Algorithm>("AlignExposures")
    .function("process", gen_wrap_cv::gen_wrap_AlignExposures::process)
  ;
  class_<cv::AlignMTB,cv::AlignExposures>("AlignMTB")
    .function("process", gen_wrap_cv::gen_wrap_AlignMTB::process)
    .function("calculateShift", gen_wrap_cv::gen_wrap_AlignMTB::calculateShift)
    .function("shiftMat", gen_wrap_cv::gen_wrap_AlignMTB::shiftMat)
    .function("computeBitmaps", gen_wrap_cv::gen_wrap_AlignMTB::computeBitmaps)
    .function("getMaxBits", gen_wrap_cv::gen_wrap_AlignMTB::getMaxBits)
    .function("setMaxBits", gen_wrap_cv::gen_wrap_AlignMTB::setMaxBits)
    .function("getExcludeRange", gen_wrap_cv::gen_wrap_AlignMTB::getExcludeRange)
    .function("setExcludeRange", gen_wrap_cv::gen_wrap_AlignMTB::setExcludeRange)
    .function("getCut", gen_wrap_cv::gen_wrap_AlignMTB::getCut)
    .function("setCut", gen_wrap_cv::gen_wrap_AlignMTB::setCut)
  ;
  class_<cv::CalibrateCRF,cv::Algorithm>("CalibrateCRF")
    .function("process", gen_wrap_cv::gen_wrap_CalibrateCRF::process)
  ;
  class_<cv::CalibrateDebevec,cv::CalibrateCRF>("CalibrateDebevec")
    .function("getLambda", gen_wrap_cv::gen_wrap_CalibrateDebevec::getLambda)
    .function("setLambda", gen_wrap_cv::gen_wrap_CalibrateDebevec::setLambda)
    .function("getSamples", gen_wrap_cv::gen_wrap_CalibrateDebevec::getSamples)
    .function("setSamples", gen_wrap_cv::gen_wrap_CalibrateDebevec::setSamples)
    .function("getRandom", gen_wrap_cv::gen_wrap_CalibrateDebevec::getRandom)
    .function("setRandom", gen_wrap_cv::gen_wrap_CalibrateDebevec::setRandom)
  ;
  class_<cv::CalibrateRobertson,cv::CalibrateCRF>("CalibrateRobertson")
    .function("getMaxIter", gen_wrap_cv::gen_wrap_CalibrateRobertson::getMaxIter)
    .function("setMaxIter", gen_wrap_cv::gen_wrap_CalibrateRobertson::setMaxIter)
    .function("getThreshold", gen_wrap_cv::gen_wrap_CalibrateRobertson::getThreshold)
    .function("setThreshold", gen_wrap_cv::gen_wrap_CalibrateRobertson::setThreshold)
    .function("getRadiance", gen_wrap_cv::gen_wrap_CalibrateRobertson::getRadiance)
  ;
  class_<cv::MergeExposures,cv::Algorithm>("MergeExposures")
    .function("process", gen_wrap_cv::gen_wrap_MergeExposures::process)
  ;
  class_<cv::MergeDebevec,cv::MergeExposures>("MergeDebevec")
    .function("process", gen_wrap_cv::gen_wrap_MergeDebevec::process)
  ;
  class_<cv::MergeMertens,cv::MergeExposures>("MergeMertens")
    .function("process", gen_wrap_cv::gen_wrap_MergeMertens::process)
    .function("getContrastWeight", gen_wrap_cv::gen_wrap_MergeMertens::getContrastWeight)
    .function("setContrastWeight", gen_wrap_cv::gen_wrap_MergeMertens::setContrastWeight)
    .function("getSaturationWeight", gen_wrap_cv::gen_wrap_MergeMertens::getSaturationWeight)
    .function("setSaturationWeight", gen_wrap_cv::gen_wrap_MergeMertens::setSaturationWeight)
    .function("getExposureWeight", gen_wrap_cv::gen_wrap_MergeMertens::getExposureWeight)
    .function("setExposureWeight", gen_wrap_cv::gen_wrap_MergeMertens::setExposureWeight)
  ;
  class_<cv::MergeRobertson,cv::MergeExposures>("MergeRobertson")
    .function("process", gen_wrap_cv::gen_wrap_MergeRobertson::process)
  ;
  class_<cv::PyRotationWarper>("PyRotationWarper")
    .constructors<void (String, float),void ()>()
    .function("warpPoint", gen_wrap_cv::gen_wrap_PyRotationWarper::warpPoint)
    .function("warpPointBackward", gen_wrap_cv::gen_wrap_PyRotationWarper::warpPointBackward)
    .function("buildMaps", gen_wrap_cv::gen_wrap_PyRotationWarper::buildMaps)
    .function("warp", gen_wrap_cv::gen_wrap_PyRotationWarper::warp)
    .function("warpBackward", gen_wrap_cv::gen_wrap_PyRotationWarper::warpBackward)
    .function("warpRoi", gen_wrap_cv::gen_wrap_PyRotationWarper::warpRoi)
    .function("getScale", gen_wrap_cv::gen_wrap_PyRotationWarper::getScale)
    .function("setScale", gen_wrap_cv::gen_wrap_PyRotationWarper::setScale)
  ;
  class_<cv::WarperCreator>("WarperCreator")
    .function("create", gen_wrap_cv::gen_wrap_WarperCreator::create)
  ;
  class_<cv::PlaneWarper,cv::WarperCreator>("PlaneWarper")
    .constructor<>()
    .function("create", gen_wrap_cv::gen_wrap_PlaneWarper::create)
  ;
  class_<cv::AffineWarper,cv::WarperCreator>("AffineWarper")
    .constructor<>()
    .function("create", gen_wrap_cv::gen_wrap_AffineWarper::create)
  ;
  class_<cv::CylindricalWarper,cv::WarperCreator>("CylindricalWarper")
    .constructor<>()
    .function("create", gen_wrap_cv::gen_wrap_CylindricalWarper::create)
  ;
  class_<cv::SphericalWarper,cv::WarperCreator>("SphericalWarper")
    .constructor<>()
    .function("create", gen_wrap_cv::gen_wrap_SphericalWarper::create)
  ;
  class_<cv::FisheyeWarper,cv::WarperCreator>("FisheyeWarper")
    .constructor<>()
    .function("create", gen_wrap_cv::gen_wrap_FisheyeWarper::create)
  ;
  class_<cv::StereographicWarper,cv::WarperCreator>("StereographicWarper")
    .constructor<>()
    .function("create", gen_wrap_cv::gen_wrap_StereographicWarper::create)
  ;
  class_<cv::CompressedRectilinearWarper,cv::WarperCreator>("CompressedRectilinearWarper")
    .constructors<void (float, float)>()
    .function("create", gen_wrap_cv::gen_wrap_CompressedRectilinearWarper::create)
  ;
  class_<cv::CompressedRectilinearPortraitWarper,cv::WarperCreator>("CompressedRectilinearPortraitWarper")
    .constructors<void (float, float)>()
    .function("create", gen_wrap_cv::gen_wrap_CompressedRectilinearPortraitWarper::create)
  ;
  class_<cv::PaniniWarper,cv::WarperCreator>("PaniniWarper")
    .constructors<void (float, float)>()
    .function("create", gen_wrap_cv::gen_wrap_PaniniWarper::create)
  ;
  class_<cv::PaniniPortraitWarper,cv::WarperCreator>("PaniniPortraitWarper")
    .constructors<void (float, float)>()
    .function("create", gen_wrap_cv::gen_wrap_PaniniPortraitWarper::create)
  ;
  class_<cv::MercatorWarper,cv::WarperCreator>("MercatorWarper")
    .constructor<>()
    .function("create", gen_wrap_cv::gen_wrap_MercatorWarper::create)
  ;
  class_<cv::TransverseMercatorWarper,cv::WarperCreator>("TransverseMercatorWarper")
    .constructor<>()
    .function("create", gen_wrap_cv::gen_wrap_TransverseMercatorWarper::create)
  ;
  class_<cv::Stitcher>("Stitcher")
    .constructor<>()
    .class_function("create", gen_wrap_cv::gen_wrap_Stitcher::create)
    .function("registrationResol", gen_wrap_cv::gen_wrap_Stitcher::registrationResol)
    .function("setRegistrationResol", gen_wrap_cv::gen_wrap_Stitcher::setRegistrationResol)
    .function("seamEstimationResol", gen_wrap_cv::gen_wrap_Stitcher::seamEstimationResol)
    .function("setSeamEstimationResol", gen_wrap_cv::gen_wrap_Stitcher::setSeamEstimationResol)
    .function("compositingResol", gen_wrap_cv::gen_wrap_Stitcher::compositingResol)
    .function("setCompositingResol", gen_wrap_cv::gen_wrap_Stitcher::setCompositingResol)
    .function("panoConfidenceThresh", gen_wrap_cv::gen_wrap_Stitcher::panoConfidenceThresh)
    .function("setPanoConfidenceThresh", gen_wrap_cv::gen_wrap_Stitcher::setPanoConfidenceThresh)
    .function("waveCorrection", gen_wrap_cv::gen_wrap_Stitcher::waveCorrection)
    .function("setWaveCorrection", gen_wrap_cv::gen_wrap_Stitcher::setWaveCorrection)
    .function("interpolationFlags", gen_wrap_cv::gen_wrap_Stitcher::interpolationFlags)
    .function("setInterpolationFlags", gen_wrap_cv::gen_wrap_Stitcher::setInterpolationFlags)
    .function("waveCorrectKind", gen_wrap_cv::gen_wrap_Stitcher::waveCorrectKind)
    .function("setWaveCorrectKind", gen_wrap_cv::gen_wrap_Stitcher::setWaveCorrectKind)
    .function("featuresFinder", gen_wrap_cv::gen_wrap_Stitcher::featuresFinder)
    .function("setFeaturesFinder", gen_wrap_cv::gen_wrap_Stitcher::setFeaturesFinder)
    .function("featuresMatcher", gen_wrap_cv::gen_wrap_Stitcher::featuresMatcher)
    .function("setFeaturesMatcher", gen_wrap_cv::gen_wrap_Stitcher::setFeaturesMatcher)
    .function("matchingMask", gen_wrap_cv::gen_wrap_Stitcher::matchingMask)
    .function("setMatchingMask", gen_wrap_cv::gen_wrap_Stitcher::setMatchingMask)
    .function("bundleAdjuster", gen_wrap_cv::gen_wrap_Stitcher::bundleAdjuster)
    .function("setBundleAdjuster", gen_wrap_cv::gen_wrap_Stitcher::setBundleAdjuster)
    .function("estimator", gen_wrap_cv::gen_wrap_Stitcher::estimator)
    .function("setEstimator", gen_wrap_cv::gen_wrap_Stitcher::setEstimator)
    .function("warper", gen_wrap_cv::gen_wrap_Stitcher::warper)
    .function("setWarper", gen_wrap_cv::gen_wrap_Stitcher::setWarper)
    .function("exposureCompensator", gen_wrap_cv::gen_wrap_Stitcher::exposureCompensator)
    .function("setExposureCompensator", gen_wrap_cv::gen_wrap_Stitcher::setExposureCompensator)
    .function("seamFinder", gen_wrap_cv::gen_wrap_Stitcher::seamFinder)
    .function("setSeamFinder", gen_wrap_cv::gen_wrap_Stitcher::setSeamFinder)
    .function("blender", gen_wrap_cv::gen_wrap_Stitcher::blender)
    .function("setBlender", gen_wrap_cv::gen_wrap_Stitcher::setBlender)
    .function("estimateTransform", gen_wrap_cv::gen_wrap_Stitcher::estimateTransform)
    .function("setTransform", gen_wrap_cv::gen_wrap_Stitcher::setTransform)
    .function("composePanorama", gen_wrap_cv::gen_wrap_Stitcher::composePanorama)
    .function("stitch", gen_wrap_cv::gen_wrap_Stitcher::stitch)
    .function("component", gen_wrap_cv::gen_wrap_Stitcher::component)
    .function("cameras", gen_wrap_cv::gen_wrap_Stitcher::cameras)
    .function("workScale", gen_wrap_cv::gen_wrap_Stitcher::workScale)
    .function("resultMask", gen_wrap_cv::gen_wrap_Stitcher::resultMask)
  ;
  class_<cv::KalmanFilter>("KalmanFilter")
    .constructors<void (),void (int, int, int, int)>()
    .function("init", gen_wrap_cv::gen_wrap_KalmanFilter::init)
    .function("predict", gen_wrap_cv::gen_wrap_KalmanFilter::predict)
    .function("correct", gen_wrap_cv::gen_wrap_KalmanFilter::correct)
    .property("statePre", &cv::KalmanFilter::statePre)
    .property("statePost", &cv::KalmanFilter::statePost)
    .property("transitionMatrix", &cv::KalmanFilter::transitionMatrix)
    .property("controlMatrix", &cv::KalmanFilter::controlMatrix)
    .property("measurementMatrix", &cv::KalmanFilter::measurementMatrix)
    .property("processNoiseCov", &cv::KalmanFilter::processNoiseCov)
    .property("measurementNoiseCov", &cv::KalmanFilter::measurementNoiseCov)
    .property("errorCovPre", &cv::KalmanFilter::errorCovPre)
    .property("gain", &cv::KalmanFilter::gain)
    .property("errorCovPost", &cv::KalmanFilter::errorCovPost)
    .property("temp1", &cv::KalmanFilter::temp1)
    .property("temp2", &cv::KalmanFilter::temp2)
    .property("temp3", &cv::KalmanFilter::temp3)
    .property("temp4", &cv::KalmanFilter::temp4)
    .property("temp5", &cv::KalmanFilter::temp5)
  ;
  class_<cv::DenseOpticalFlow,cv::Algorithm>("DenseOpticalFlow")
    .function("calc", gen_wrap_cv::gen_wrap_DenseOpticalFlow::calc)
    .function("collectGarbage", gen_wrap_cv::gen_wrap_DenseOpticalFlow::collectGarbage)
  ;
  class_<cv::SparseOpticalFlow,cv::Algorithm>("SparseOpticalFlow")
    .function("calc", gen_wrap_cv::gen_wrap_SparseOpticalFlow::calc)
  ;
  class_<cv::FarnebackOpticalFlow,cv::DenseOpticalFlow>("FarnebackOpticalFlow")
    .function("getNumLevels", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::getNumLevels)
    .function("setNumLevels", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::setNumLevels)
    .function("getPyrScale", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::getPyrScale)
    .function("setPyrScale", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::setPyrScale)
    .function("getFastPyramids", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::getFastPyramids)
    .function("setFastPyramids", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::setFastPyramids)
    .function("getWinSize", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::getWinSize)
    .function("setWinSize", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::setWinSize)
    .function("getNumIters", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::getNumIters)
    .function("setNumIters", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::setNumIters)
    .function("getPolyN", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::getPolyN)
    .function("setPolyN", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::setPolyN)
    .function("getPolySigma", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::getPolySigma)
    .function("setPolySigma", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::setPolySigma)
    .function("getFlags", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::getFlags)
    .function("setFlags", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::setFlags)
    .class_function("create", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::create)
  ;
  class_<cv::VariationalRefinement,cv::DenseOpticalFlow>("VariationalRefinement")
    .function("calcUV", gen_wrap_cv::gen_wrap_VariationalRefinement::calcUV)
    .function("getFixedPointIterations", gen_wrap_cv::gen_wrap_VariationalRefinement::getFixedPointIterations)
    .function("setFixedPointIterations", gen_wrap_cv::gen_wrap_VariationalRefinement::setFixedPointIterations)
    .function("getSorIterations", gen_wrap_cv::gen_wrap_VariationalRefinement::getSorIterations)
    .function("setSorIterations", gen_wrap_cv::gen_wrap_VariationalRefinement::setSorIterations)
    .function("getOmega", gen_wrap_cv::gen_wrap_VariationalRefinement::getOmega)
    .function("setOmega", gen_wrap_cv::gen_wrap_VariationalRefinement::setOmega)
    .function("getAlpha", gen_wrap_cv::gen_wrap_VariationalRefinement::getAlpha)
    .function("setAlpha", gen_wrap_cv::gen_wrap_VariationalRefinement::setAlpha)
    .function("getDelta", gen_wrap_cv::gen_wrap_VariationalRefinement::getDelta)
    .function("setDelta", gen_wrap_cv::gen_wrap_VariationalRefinement::setDelta)
    .function("getGamma", gen_wrap_cv::gen_wrap_VariationalRefinement::getGamma)
    .function("setGamma", gen_wrap_cv::gen_wrap_VariationalRefinement::setGamma)
    .class_function("create", gen_wrap_cv::gen_wrap_VariationalRefinement::create)
  ;
  class_<cv::DISOpticalFlow,cv::DenseOpticalFlow>("DISOpticalFlow")
    .function("getFinestScale", gen_wrap_cv::gen_wrap_DISOpticalFlow::getFinestScale)
    .function("setFinestScale", gen_wrap_cv::gen_wrap_DISOpticalFlow::setFinestScale)
    .function("getPatchSize", gen_wrap_cv::gen_wrap_DISOpticalFlow::getPatchSize)
    .function("setPatchSize", gen_wrap_cv::gen_wrap_DISOpticalFlow::setPatchSize)
    .function("getPatchStride", gen_wrap_cv::gen_wrap_DISOpticalFlow::getPatchStride)
    .function("setPatchStride", gen_wrap_cv::gen_wrap_DISOpticalFlow::setPatchStride)
    .function("getGradientDescentIterations", gen_wrap_cv::gen_wrap_DISOpticalFlow::getGradientDescentIterations)
    .function("setGradientDescentIterations", gen_wrap_cv::gen_wrap_DISOpticalFlow::setGradientDescentIterations)
    .function("getVariationalRefinementIterations", gen_wrap_cv::gen_wrap_DISOpticalFlow::getVariationalRefinementIterations)
    .function("setVariationalRefinementIterations", gen_wrap_cv::gen_wrap_DISOpticalFlow::setVariationalRefinementIterations)
    .function("getVariationalRefinementAlpha", gen_wrap_cv::gen_wrap_DISOpticalFlow::getVariationalRefinementAlpha)
    .function("setVariationalRefinementAlpha", gen_wrap_cv::gen_wrap_DISOpticalFlow::setVariationalRefinementAlpha)
    .function("getVariationalRefinementDelta", gen_wrap_cv::gen_wrap_DISOpticalFlow::getVariationalRefinementDelta)
    .function("setVariationalRefinementDelta", gen_wrap_cv::gen_wrap_DISOpticalFlow::setVariationalRefinementDelta)
    .function("getVariationalRefinementGamma", gen_wrap_cv::gen_wrap_DISOpticalFlow::getVariationalRefinementGamma)
    .function("setVariationalRefinementGamma", gen_wrap_cv::gen_wrap_DISOpticalFlow::setVariationalRefinementGamma)
    .function("getUseMeanNormalization", gen_wrap_cv::gen_wrap_DISOpticalFlow::getUseMeanNormalization)
    .function("setUseMeanNormalization", gen_wrap_cv::gen_wrap_DISOpticalFlow::setUseMeanNormalization)
    .function("getUseSpatialPropagation", gen_wrap_cv::gen_wrap_DISOpticalFlow::getUseSpatialPropagation)
    .function("setUseSpatialPropagation", gen_wrap_cv::gen_wrap_DISOpticalFlow::setUseSpatialPropagation)
    .class_function("create", gen_wrap_cv::gen_wrap_DISOpticalFlow::create)
  ;
  class_<cv::SparsePyrLKOpticalFlow,cv::SparseOpticalFlow>("SparsePyrLKOpticalFlow")
    .function("getWinSize", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::getWinSize)
    .function("setWinSize", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::setWinSize)
    .function("getMaxLevel", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::getMaxLevel)
    .function("setMaxLevel", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::setMaxLevel)
    .function("getTermCriteria", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::getTermCriteria)
    .function("setTermCriteria", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::setTermCriteria)
    .function("getFlags", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::getFlags)
    .function("setFlags", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::setFlags)
    .function("getMinEigThreshold", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::getMinEigThreshold)
    .function("setMinEigThreshold", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::setMinEigThreshold)
    .class_function("create", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::create)
  ;
  class_<cv::Tracker>("Tracker")
    .function("init", gen_wrap_cv::gen_wrap_Tracker::init)
    .function("update", gen_wrap_cv::gen_wrap_Tracker::update)
  ;
  class_<cv::TrackerMIL,cv::Tracker>("TrackerMIL")
    .class_function("create", gen_wrap_cv::gen_wrap_TrackerMIL::create)
  ;
  class_<cv::TrackerGOTURN,cv::Tracker>("TrackerGOTURN")
    .class_function("create", gen_wrap_cv::gen_wrap_TrackerGOTURN::create)
  ;
  class_<cv::TrackerDaSiamRPN,cv::Tracker>("TrackerDaSiamRPN")
    .class_function("create", gen_wrap_cv::gen_wrap_TrackerDaSiamRPN::create)
    .function("getTrackingScore", gen_wrap_cv::gen_wrap_TrackerDaSiamRPN::getTrackingScore)
  ;
  class_<cv::BackgroundSubtractor,cv::Algorithm>("BackgroundSubtractor")
    .function("apply", gen_wrap_cv::gen_wrap_BackgroundSubtractor::apply)
    .function("getBackgroundImage", gen_wrap_cv::gen_wrap_BackgroundSubtractor::getBackgroundImage)
  ;
  class_<cv::BackgroundSubtractorMOG2,cv::BackgroundSubtractor>("BackgroundSubtractorMOG2")
    .function("getHistory", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getHistory)
    .function("setHistory", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setHistory)
    .function("getNMixtures", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getNMixtures)
    .function("setNMixtures", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setNMixtures)
    .function("getBackgroundRatio", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getBackgroundRatio)
    .function("setBackgroundRatio", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setBackgroundRatio)
    .function("getVarThreshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getVarThreshold)
    .function("setVarThreshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setVarThreshold)
    .function("getVarThresholdGen", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getVarThresholdGen)
    .function("setVarThresholdGen", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setVarThresholdGen)
    .function("getVarInit", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getVarInit)
    .function("setVarInit", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setVarInit)
    .function("getVarMin", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getVarMin)
    .function("setVarMin", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setVarMin)
    .function("getVarMax", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getVarMax)
    .function("setVarMax", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setVarMax)
    .function("getComplexityReductionThreshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getComplexityReductionThreshold)
    .function("setComplexityReductionThreshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setComplexityReductionThreshold)
    .function("getDetectShadows", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getDetectShadows)
    .function("setDetectShadows", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setDetectShadows)
    .function("getShadowValue", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getShadowValue)
    .function("setShadowValue", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setShadowValue)
    .function("getShadowThreshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getShadowThreshold)
    .function("setShadowThreshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setShadowThreshold)
    .function("apply", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::apply)
  ;
  class_<cv::BackgroundSubtractorKNN,cv::BackgroundSubtractor>("BackgroundSubtractorKNN")
    .function("getHistory", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::getHistory)
    .function("setHistory", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::setHistory)
    .function("getNSamples", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::getNSamples)
    .function("setNSamples", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::setNSamples)
    .function("getDist2Threshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::getDist2Threshold)
    .function("setDist2Threshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::setDist2Threshold)
    .function("getkNNSamples", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::getkNNSamples)
    .function("setkNNSamples", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::setkNNSamples)
    .function("getDetectShadows", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::getDetectShadows)
    .function("setDetectShadows", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::setDetectShadows)
    .function("getShadowValue", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::getShadowValue)
    .function("setShadowValue", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::setShadowValue)
    .function("getShadowThreshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::getShadowThreshold)
    .function("setShadowThreshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::setShadowThreshold)
  ;
  constant("DECOMP_LU", cv::DECOMP_LU);
  constant("DECOMP_SVD", cv::DECOMP_SVD);
  constant("DECOMP_EIG", cv::DECOMP_EIG);
  constant("DECOMP_CHOLESKY", cv::DECOMP_CHOLESKY);
  constant("DECOMP_QR", cv::DECOMP_QR);
  constant("DECOMP_NORMAL", cv::DECOMP_NORMAL);
  constant("NORM_INF", cv::NORM_INF);
  constant("NORM_L1", cv::NORM_L1);
  constant("NORM_L2", cv::NORM_L2);
  constant("NORM_L2SQR", cv::NORM_L2SQR);
  constant("NORM_HAMMING", cv::NORM_HAMMING);
  constant("NORM_HAMMING2", cv::NORM_HAMMING2);
  constant("NORM_TYPE_MASK", cv::NORM_TYPE_MASK);
  constant("NORM_RELATIVE", cv::NORM_RELATIVE);
  constant("NORM_MINMAX", cv::NORM_MINMAX);
  constant("CMP_EQ", cv::CMP_EQ);
  constant("CMP_GT", cv::CMP_GT);
  constant("CMP_GE", cv::CMP_GE);
  constant("CMP_LT", cv::CMP_LT);
  constant("CMP_LE", cv::CMP_LE);
  constant("CMP_NE", cv::CMP_NE);
  constant("GEMM_1_T", cv::GEMM_1_T);
  constant("GEMM_2_T", cv::GEMM_2_T);
  constant("GEMM_3_T", cv::GEMM_3_T);
  constant("DFT_INVERSE", cv::DFT_INVERSE);
  constant("DFT_SCALE", cv::DFT_SCALE);
  constant("DFT_ROWS", cv::DFT_ROWS);
  constant("DFT_COMPLEX_OUTPUT", cv::DFT_COMPLEX_OUTPUT);
  constant("DFT_REAL_OUTPUT", cv::DFT_REAL_OUTPUT);
  constant("DFT_COMPLEX_INPUT", cv::DFT_COMPLEX_INPUT);
  constant("DCT_INVERSE", cv::DCT_INVERSE);
  constant("DCT_ROWS", cv::DCT_ROWS);
  constant("BORDER_CONSTANT", cv::BORDER_CONSTANT);
  constant("BORDER_REPLICATE", cv::BORDER_REPLICATE);
  constant("BORDER_REFLECT", cv::BORDER_REFLECT);
  constant("BORDER_WRAP", cv::BORDER_WRAP);
  constant("BORDER_REFLECT_101", cv::BORDER_REFLECT_101);
  constant("BORDER_TRANSPARENT", cv::BORDER_TRANSPARENT);
  constant("BORDER_REFLECT101", cv::BORDER_REFLECT101);
  constant("BORDER_DEFAULT", cv::BORDER_DEFAULT);
  constant("BORDER_ISOLATED", cv::BORDER_ISOLATED);
  constant("ACCESS_READ", cv::ACCESS_READ);
  constant("ACCESS_WRITE", cv::ACCESS_WRITE);
  constant("ACCESS_RW", cv::ACCESS_RW);
  constant("ACCESS_MASK", cv::ACCESS_MASK);
  constant("ACCESS_FAST", cv::ACCESS_FAST);
  constant("USAGE_DEFAULT", cv::USAGE_DEFAULT);
  constant("USAGE_ALLOCATE_HOST_MEMORY", cv::USAGE_ALLOCATE_HOST_MEMORY);
  constant("USAGE_ALLOCATE_DEVICE_MEMORY", cv::USAGE_ALLOCATE_DEVICE_MEMORY);
  constant("USAGE_ALLOCATE_SHARED_MEMORY", cv::USAGE_ALLOCATE_SHARED_MEMORY);
  constant("__UMAT_USAGE_FLAGS_32BIT", cv::__UMAT_USAGE_FLAGS_32BIT);
  constant("SORT_EVERY_ROW", cv::SORT_EVERY_ROW);
  constant("SORT_EVERY_COLUMN", cv::SORT_EVERY_COLUMN);
  constant("SORT_ASCENDING", cv::SORT_ASCENDING);
  constant("SORT_DESCENDING", cv::SORT_DESCENDING);
  constant("COVAR_SCRAMBLED", cv::COVAR_SCRAMBLED);
  constant("COVAR_NORMAL", cv::COVAR_NORMAL);
  constant("COVAR_USE_AVG", cv::COVAR_USE_AVG);
  constant("COVAR_SCALE", cv::COVAR_SCALE);
  constant("COVAR_ROWS", cv::COVAR_ROWS);
  constant("COVAR_COLS", cv::COVAR_COLS);
  constant("KMEANS_RANDOM_CENTERS", cv::KMEANS_RANDOM_CENTERS);
  constant("KMEANS_PP_CENTERS", cv::KMEANS_PP_CENTERS);
  constant("KMEANS_USE_INITIAL_LABELS", cv::KMEANS_USE_INITIAL_LABELS);
  constant("REDUCE_SUM", cv::REDUCE_SUM);
  constant("REDUCE_AVG", cv::REDUCE_AVG);
  constant("REDUCE_MAX", cv::REDUCE_MAX);
  constant("REDUCE_MIN", cv::REDUCE_MIN);
  constant("ROTATE_90_CLOCKWISE", cv::ROTATE_90_CLOCKWISE);
  constant("ROTATE_180", cv::ROTATE_180);
  constant("ROTATE_90_COUNTERCLOCKWISE", cv::ROTATE_90_COUNTERCLOCKWISE);
  constant("INT", cv::INT);
  constant("BOOLEAN", cv::BOOLEAN);
  constant("REAL", cv::REAL);
  constant("STRING", cv::STRING);
  constant("MAT", cv::MAT);
  constant("MAT_VECTOR", cv::MAT_VECTOR);
  constant("ALGORITHM", cv::ALGORITHM);
  constant("FLOAT", cv::FLOAT);
  constant("UNSIGNED_INT", cv::UNSIGNED_INT);
  constant("UINT64", cv::UINT64);
  constant("UCHAR", cv::UCHAR);
  constant("SCALAR", cv::SCALAR);
  constant("SOLVELP_UNBOUNDED", cv::SOLVELP_UNBOUNDED);
  constant("SOLVELP_UNFEASIBLE", cv::SOLVELP_UNFEASIBLE);
  constant("SOLVELP_SINGLE", cv::SOLVELP_SINGLE);
  constant("SOLVELP_MULTI", cv::SOLVELP_MULTI);
  constant("DEFAULT", cv::DEFAULT);
  constant("DRAW_OVER_OUTIMG", cv::DRAW_OVER_OUTIMG);
  constant("NOT_DRAW_SINGLE_POINTS", cv::NOT_DRAW_SINGLE_POINTS);
  constant("DRAW_RICH_KEYPOINTS", cv::DRAW_RICH_KEYPOINTS);
  constant("LMEDS", cv::LMEDS);
  constant("RANSAC", cv::RANSAC);
  constant("RHO", cv::RHO);
  constant("USAC_DEFAULT", cv::USAC_DEFAULT);
  constant("USAC_PARALLEL", cv::USAC_PARALLEL);
  constant("USAC_FM_8PTS", cv::USAC_FM_8PTS);
  constant("USAC_FAST", cv::USAC_FAST);
  constant("USAC_ACCURATE", cv::USAC_ACCURATE);
  constant("USAC_PROSAC", cv::USAC_PROSAC);
  constant("USAC_MAGSAC", cv::USAC_MAGSAC);
  constant("SOLVEPNP_ITERATIVE", cv::SOLVEPNP_ITERATIVE);
  constant("SOLVEPNP_EPNP", cv::SOLVEPNP_EPNP);
  constant("SOLVEPNP_P3P", cv::SOLVEPNP_P3P);
  constant("SOLVEPNP_DLS", cv::SOLVEPNP_DLS);
  constant("SOLVEPNP_UPNP", cv::SOLVEPNP_UPNP);
  constant("SOLVEPNP_AP3P", cv::SOLVEPNP_AP3P);
  constant("SOLVEPNP_IPPE", cv::SOLVEPNP_IPPE);
  constant("SOLVEPNP_IPPE_SQUARE", cv::SOLVEPNP_IPPE_SQUARE);
  constant("SOLVEPNP_SQPNP", cv::SOLVEPNP_SQPNP);
  constant("SOLVEPNP_MAX_COUNT", cv::SOLVEPNP_MAX_COUNT);
  constant("CALIB_CB_ADAPTIVE_THRESH", cv::CALIB_CB_ADAPTIVE_THRESH);
  constant("CALIB_CB_NORMALIZE_IMAGE", cv::CALIB_CB_NORMALIZE_IMAGE);
  constant("CALIB_CB_FILTER_QUADS", cv::CALIB_CB_FILTER_QUADS);
  constant("CALIB_CB_FAST_CHECK", cv::CALIB_CB_FAST_CHECK);
  constant("CALIB_CB_EXHAUSTIVE", cv::CALIB_CB_EXHAUSTIVE);
  constant("CALIB_CB_ACCURACY", cv::CALIB_CB_ACCURACY);
  constant("CALIB_CB_LARGER", cv::CALIB_CB_LARGER);
  constant("CALIB_CB_MARKER", cv::CALIB_CB_MARKER);
  constant("CALIB_CB_SYMMETRIC_GRID", cv::CALIB_CB_SYMMETRIC_GRID);
  constant("CALIB_CB_ASYMMETRIC_GRID", cv::CALIB_CB_ASYMMETRIC_GRID);
  constant("CALIB_CB_CLUSTERING", cv::CALIB_CB_CLUSTERING);
  constant("CALIB_NINTRINSIC", cv::CALIB_NINTRINSIC);
  constant("CALIB_USE_INTRINSIC_GUESS", cv::CALIB_USE_INTRINSIC_GUESS);
  constant("CALIB_FIX_ASPECT_RATIO", cv::CALIB_FIX_ASPECT_RATIO);
  constant("CALIB_FIX_PRINCIPAL_POINT", cv::CALIB_FIX_PRINCIPAL_POINT);
  constant("CALIB_ZERO_TANGENT_DIST", cv::CALIB_ZERO_TANGENT_DIST);
  constant("CALIB_FIX_FOCAL_LENGTH", cv::CALIB_FIX_FOCAL_LENGTH);
  constant("CALIB_FIX_K1", cv::CALIB_FIX_K1);
  constant("CALIB_FIX_K2", cv::CALIB_FIX_K2);
  constant("CALIB_FIX_K3", cv::CALIB_FIX_K3);
  constant("CALIB_FIX_K4", cv::CALIB_FIX_K4);
  constant("CALIB_FIX_K5", cv::CALIB_FIX_K5);
  constant("CALIB_FIX_K6", cv::CALIB_FIX_K6);
  constant("CALIB_RATIONAL_MODEL", cv::CALIB_RATIONAL_MODEL);
  constant("CALIB_THIN_PRISM_MODEL", cv::CALIB_THIN_PRISM_MODEL);
  constant("CALIB_FIX_S1_S2_S3_S4", cv::CALIB_FIX_S1_S2_S3_S4);
  constant("CALIB_TILTED_MODEL", cv::CALIB_TILTED_MODEL);
  constant("CALIB_FIX_TAUX_TAUY", cv::CALIB_FIX_TAUX_TAUY);
  constant("CALIB_USE_QR", cv::CALIB_USE_QR);
  constant("CALIB_FIX_TANGENT_DIST", cv::CALIB_FIX_TANGENT_DIST);
  constant("CALIB_FIX_INTRINSIC", cv::CALIB_FIX_INTRINSIC);
  constant("CALIB_SAME_FOCAL_LENGTH", cv::CALIB_SAME_FOCAL_LENGTH);
  constant("CALIB_ZERO_DISPARITY", cv::CALIB_ZERO_DISPARITY);
  constant("CALIB_USE_LU", cv::CALIB_USE_LU);
  constant("CALIB_USE_EXTRINSIC_GUESS", cv::CALIB_USE_EXTRINSIC_GUESS);
  constant("FM_7POINT", cv::FM_7POINT);
  constant("FM_8POINT", cv::FM_8POINT);
  constant("FM_LMEDS", cv::FM_LMEDS);
  constant("FM_RANSAC", cv::FM_RANSAC);
  constant("CALIB_HAND_EYE_TSAI", cv::CALIB_HAND_EYE_TSAI);
  constant("CALIB_HAND_EYE_PARK", cv::CALIB_HAND_EYE_PARK);
  constant("CALIB_HAND_EYE_HORAUD", cv::CALIB_HAND_EYE_HORAUD);
  constant("CALIB_HAND_EYE_ANDREFF", cv::CALIB_HAND_EYE_ANDREFF);
  constant("CALIB_HAND_EYE_DANIILIDIS", cv::CALIB_HAND_EYE_DANIILIDIS);
  constant("CALIB_ROBOT_WORLD_HAND_EYE_SHAH", cv::CALIB_ROBOT_WORLD_HAND_EYE_SHAH);
  constant("CALIB_ROBOT_WORLD_HAND_EYE_LI", cv::CALIB_ROBOT_WORLD_HAND_EYE_LI);
  constant("SAMPLING_UNIFORM", cv::SAMPLING_UNIFORM);
  constant("SAMPLING_PROGRESSIVE_NAPSAC", cv::SAMPLING_PROGRESSIVE_NAPSAC);
  constant("SAMPLING_NAPSAC", cv::SAMPLING_NAPSAC);
  constant("SAMPLING_PROSAC", cv::SAMPLING_PROSAC);
  constant("LOCAL_OPTIM_NULL", cv::LOCAL_OPTIM_NULL);
  constant("LOCAL_OPTIM_INNER_LO", cv::LOCAL_OPTIM_INNER_LO);
  constant("LOCAL_OPTIM_INNER_AND_ITER_LO", cv::LOCAL_OPTIM_INNER_AND_ITER_LO);
  constant("LOCAL_OPTIM_GC", cv::LOCAL_OPTIM_GC);
  constant("LOCAL_OPTIM_SIGMA", cv::LOCAL_OPTIM_SIGMA);
  constant("SCORE_METHOD_RANSAC", cv::SCORE_METHOD_RANSAC);
  constant("SCORE_METHOD_MSAC", cv::SCORE_METHOD_MSAC);
  constant("SCORE_METHOD_MAGSAC", cv::SCORE_METHOD_MAGSAC);
  constant("SCORE_METHOD_LMEDS", cv::SCORE_METHOD_LMEDS);
  constant("NEIGH_FLANN_KNN", cv::NEIGH_FLANN_KNN);
  constant("NEIGH_GRID", cv::NEIGH_GRID);
  constant("NEIGH_FLANN_RADIUS", cv::NEIGH_FLANN_RADIUS);
  constant("PROJ_SPHERICAL_ORTHO", cv::PROJ_SPHERICAL_ORTHO);
  constant("PROJ_SPHERICAL_EQRECT", cv::PROJ_SPHERICAL_EQRECT);
  constant("IMREAD_UNCHANGED", cv::IMREAD_UNCHANGED);
  constant("IMREAD_GRAYSCALE", cv::IMREAD_GRAYSCALE);
  constant("IMREAD_COLOR", cv::IMREAD_COLOR);
  constant("IMREAD_ANYDEPTH", cv::IMREAD_ANYDEPTH);
  constant("IMREAD_ANYCOLOR", cv::IMREAD_ANYCOLOR);
  constant("IMREAD_LOAD_GDAL", cv::IMREAD_LOAD_GDAL);
  constant("IMREAD_REDUCED_GRAYSCALE_2", cv::IMREAD_REDUCED_GRAYSCALE_2);
  constant("IMREAD_REDUCED_COLOR_2", cv::IMREAD_REDUCED_COLOR_2);
  constant("IMREAD_REDUCED_GRAYSCALE_4", cv::IMREAD_REDUCED_GRAYSCALE_4);
  constant("IMREAD_REDUCED_COLOR_4", cv::IMREAD_REDUCED_COLOR_4);
  constant("IMREAD_REDUCED_GRAYSCALE_8", cv::IMREAD_REDUCED_GRAYSCALE_8);
  constant("IMREAD_REDUCED_COLOR_8", cv::IMREAD_REDUCED_COLOR_8);
  constant("IMREAD_IGNORE_ORIENTATION", cv::IMREAD_IGNORE_ORIENTATION);
  constant("IMWRITE_JPEG_QUALITY", cv::IMWRITE_JPEG_QUALITY);
  constant("IMWRITE_JPEG_PROGRESSIVE", cv::IMWRITE_JPEG_PROGRESSIVE);
  constant("IMWRITE_JPEG_OPTIMIZE", cv::IMWRITE_JPEG_OPTIMIZE);
  constant("IMWRITE_JPEG_RST_INTERVAL", cv::IMWRITE_JPEG_RST_INTERVAL);
  constant("IMWRITE_JPEG_LUMA_QUALITY", cv::IMWRITE_JPEG_LUMA_QUALITY);
  constant("IMWRITE_JPEG_CHROMA_QUALITY", cv::IMWRITE_JPEG_CHROMA_QUALITY);
  constant("IMWRITE_PNG_COMPRESSION", cv::IMWRITE_PNG_COMPRESSION);
  constant("IMWRITE_PNG_STRATEGY", cv::IMWRITE_PNG_STRATEGY);
  constant("IMWRITE_PNG_BILEVEL", cv::IMWRITE_PNG_BILEVEL);
  constant("IMWRITE_PXM_BINARY", cv::IMWRITE_PXM_BINARY);
  constant("IMWRITE_EXR_TYPE", cv::IMWRITE_EXR_TYPE);
  constant("IMWRITE_EXR_COMPRESSION", cv::IMWRITE_EXR_COMPRESSION);
  constant("IMWRITE_WEBP_QUALITY", cv::IMWRITE_WEBP_QUALITY);
  constant("IMWRITE_PAM_TUPLETYPE", cv::IMWRITE_PAM_TUPLETYPE);
  constant("IMWRITE_TIFF_RESUNIT", cv::IMWRITE_TIFF_RESUNIT);
  constant("IMWRITE_TIFF_XDPI", cv::IMWRITE_TIFF_XDPI);
  constant("IMWRITE_TIFF_YDPI", cv::IMWRITE_TIFF_YDPI);
  constant("IMWRITE_TIFF_COMPRESSION", cv::IMWRITE_TIFF_COMPRESSION);
  constant("IMWRITE_JPEG2000_COMPRESSION_X1000", cv::IMWRITE_JPEG2000_COMPRESSION_X1000);
  constant("IMWRITE_EXR_TYPE_HALF", cv::IMWRITE_EXR_TYPE_HALF);
  constant("IMWRITE_EXR_TYPE_FLOAT", cv::IMWRITE_EXR_TYPE_FLOAT);
  constant("IMWRITE_EXR_COMPRESSION_NO", cv::IMWRITE_EXR_COMPRESSION_NO);
  constant("IMWRITE_EXR_COMPRESSION_RLE", cv::IMWRITE_EXR_COMPRESSION_RLE);
  constant("IMWRITE_EXR_COMPRESSION_ZIPS", cv::IMWRITE_EXR_COMPRESSION_ZIPS);
  constant("IMWRITE_EXR_COMPRESSION_ZIP", cv::IMWRITE_EXR_COMPRESSION_ZIP);
  constant("IMWRITE_EXR_COMPRESSION_PIZ", cv::IMWRITE_EXR_COMPRESSION_PIZ);
  constant("IMWRITE_EXR_COMPRESSION_PXR24", cv::IMWRITE_EXR_COMPRESSION_PXR24);
  constant("IMWRITE_EXR_COMPRESSION_B44", cv::IMWRITE_EXR_COMPRESSION_B44);
  constant("IMWRITE_EXR_COMPRESSION_B44A", cv::IMWRITE_EXR_COMPRESSION_B44A);
  constant("IMWRITE_EXR_COMPRESSION_DWAA", cv::IMWRITE_EXR_COMPRESSION_DWAA);
  constant("IMWRITE_EXR_COMPRESSION_DWAB", cv::IMWRITE_EXR_COMPRESSION_DWAB);
  constant("IMWRITE_PNG_STRATEGY_DEFAULT", cv::IMWRITE_PNG_STRATEGY_DEFAULT);
  constant("IMWRITE_PNG_STRATEGY_FILTERED", cv::IMWRITE_PNG_STRATEGY_FILTERED);
  constant("IMWRITE_PNG_STRATEGY_HUFFMAN_ONLY", cv::IMWRITE_PNG_STRATEGY_HUFFMAN_ONLY);
  constant("IMWRITE_PNG_STRATEGY_RLE", cv::IMWRITE_PNG_STRATEGY_RLE);
  constant("IMWRITE_PNG_STRATEGY_FIXED", cv::IMWRITE_PNG_STRATEGY_FIXED);
  constant("IMWRITE_PAM_FORMAT_NULL", cv::IMWRITE_PAM_FORMAT_NULL);
  constant("IMWRITE_PAM_FORMAT_BLACKANDWHITE", cv::IMWRITE_PAM_FORMAT_BLACKANDWHITE);
  constant("IMWRITE_PAM_FORMAT_GRAYSCALE", cv::IMWRITE_PAM_FORMAT_GRAYSCALE);
  constant("IMWRITE_PAM_FORMAT_GRAYSCALE_ALPHA", cv::IMWRITE_PAM_FORMAT_GRAYSCALE_ALPHA);
  constant("IMWRITE_PAM_FORMAT_RGB", cv::IMWRITE_PAM_FORMAT_RGB);
  constant("IMWRITE_PAM_FORMAT_RGB_ALPHA", cv::IMWRITE_PAM_FORMAT_RGB_ALPHA);
  constant("CAP_ANY", cv::CAP_ANY);
  constant("CAP_VFW", cv::CAP_VFW);
  constant("CAP_V4L", cv::CAP_V4L);
  constant("CAP_V4L2", cv::CAP_V4L2);
  constant("CAP_FIREWIRE", cv::CAP_FIREWIRE);
  constant("CAP_FIREWARE", cv::CAP_FIREWARE);
  constant("CAP_IEEE1394", cv::CAP_IEEE1394);
  constant("CAP_DC1394", cv::CAP_DC1394);
  constant("CAP_CMU1394", cv::CAP_CMU1394);
  constant("CAP_QT", cv::CAP_QT);
  constant("CAP_UNICAP", cv::CAP_UNICAP);
  constant("CAP_DSHOW", cv::CAP_DSHOW);
  constant("CAP_PVAPI", cv::CAP_PVAPI);
  constant("CAP_OPENNI", cv::CAP_OPENNI);
  constant("CAP_OPENNI_ASUS", cv::CAP_OPENNI_ASUS);
  constant("CAP_ANDROID", cv::CAP_ANDROID);
  constant("CAP_XIAPI", cv::CAP_XIAPI);
  constant("CAP_AVFOUNDATION", cv::CAP_AVFOUNDATION);
  constant("CAP_GIGANETIX", cv::CAP_GIGANETIX);
  constant("CAP_MSMF", cv::CAP_MSMF);
  constant("CAP_WINRT", cv::CAP_WINRT);
  constant("CAP_INTELPERC", cv::CAP_INTELPERC);
  constant("CAP_REALSENSE", cv::CAP_REALSENSE);
  constant("CAP_OPENNI2", cv::CAP_OPENNI2);
  constant("CAP_OPENNI2_ASUS", cv::CAP_OPENNI2_ASUS);
  constant("CAP_OPENNI2_ASTRA", cv::CAP_OPENNI2_ASTRA);
  constant("CAP_GPHOTO2", cv::CAP_GPHOTO2);
  constant("CAP_GSTREAMER", cv::CAP_GSTREAMER);
  constant("CAP_FFMPEG", cv::CAP_FFMPEG);
  constant("CAP_IMAGES", cv::CAP_IMAGES);
  constant("CAP_ARAVIS", cv::CAP_ARAVIS);
  constant("CAP_OPENCV_MJPEG", cv::CAP_OPENCV_MJPEG);
  constant("CAP_INTEL_MFX", cv::CAP_INTEL_MFX);
  constant("CAP_XINE", cv::CAP_XINE);
  constant("CAP_UEYE", cv::CAP_UEYE);
  constant("CAP_PROP_POS_MSEC", cv::CAP_PROP_POS_MSEC);
  constant("CAP_PROP_POS_FRAMES", cv::CAP_PROP_POS_FRAMES);
  constant("CAP_PROP_POS_AVI_RATIO", cv::CAP_PROP_POS_AVI_RATIO);
  constant("CAP_PROP_FRAME_WIDTH", cv::CAP_PROP_FRAME_WIDTH);
  constant("CAP_PROP_FRAME_HEIGHT", cv::CAP_PROP_FRAME_HEIGHT);
  constant("CAP_PROP_FPS", cv::CAP_PROP_FPS);
  constant("CAP_PROP_FOURCC", cv::CAP_PROP_FOURCC);
  constant("CAP_PROP_FRAME_COUNT", cv::CAP_PROP_FRAME_COUNT);
  constant("CAP_PROP_FORMAT", cv::CAP_PROP_FORMAT);
  constant("CAP_PROP_MODE", cv::CAP_PROP_MODE);
  constant("CAP_PROP_BRIGHTNESS", cv::CAP_PROP_BRIGHTNESS);
  constant("CAP_PROP_CONTRAST", cv::CAP_PROP_CONTRAST);
  constant("CAP_PROP_SATURATION", cv::CAP_PROP_SATURATION);
  constant("CAP_PROP_HUE", cv::CAP_PROP_HUE);
  constant("CAP_PROP_GAIN", cv::CAP_PROP_GAIN);
  constant("CAP_PROP_EXPOSURE", cv::CAP_PROP_EXPOSURE);
  constant("CAP_PROP_CONVERT_RGB", cv::CAP_PROP_CONVERT_RGB);
  constant("CAP_PROP_WHITE_BALANCE_BLUE_U", cv::CAP_PROP_WHITE_BALANCE_BLUE_U);
  constant("CAP_PROP_RECTIFICATION", cv::CAP_PROP_RECTIFICATION);
  constant("CAP_PROP_MONOCHROME", cv::CAP_PROP_MONOCHROME);
  constant("CAP_PROP_SHARPNESS", cv::CAP_PROP_SHARPNESS);
  constant("CAP_PROP_AUTO_EXPOSURE", cv::CAP_PROP_AUTO_EXPOSURE);
  constant("CAP_PROP_GAMMA", cv::CAP_PROP_GAMMA);
  constant("CAP_PROP_TEMPERATURE", cv::CAP_PROP_TEMPERATURE);
  constant("CAP_PROP_TRIGGER", cv::CAP_PROP_TRIGGER);
  constant("CAP_PROP_TRIGGER_DELAY", cv::CAP_PROP_TRIGGER_DELAY);
  constant("CAP_PROP_WHITE_BALANCE_RED_V", cv::CAP_PROP_WHITE_BALANCE_RED_V);
  constant("CAP_PROP_ZOOM", cv::CAP_PROP_ZOOM);
  constant("CAP_PROP_FOCUS", cv::CAP_PROP_FOCUS);
  constant("CAP_PROP_GUID", cv::CAP_PROP_GUID);
  constant("CAP_PROP_ISO_SPEED", cv::CAP_PROP_ISO_SPEED);
  constant("CAP_PROP_BACKLIGHT", cv::CAP_PROP_BACKLIGHT);
  constant("CAP_PROP_PAN", cv::CAP_PROP_PAN);
  constant("CAP_PROP_TILT", cv::CAP_PROP_TILT);
  constant("CAP_PROP_ROLL", cv::CAP_PROP_ROLL);
  constant("CAP_PROP_IRIS", cv::CAP_PROP_IRIS);
  constant("CAP_PROP_SETTINGS", cv::CAP_PROP_SETTINGS);
  constant("CAP_PROP_BUFFERSIZE", cv::CAP_PROP_BUFFERSIZE);
  constant("CAP_PROP_AUTOFOCUS", cv::CAP_PROP_AUTOFOCUS);
  constant("CAP_PROP_SAR_NUM", cv::CAP_PROP_SAR_NUM);
  constant("CAP_PROP_SAR_DEN", cv::CAP_PROP_SAR_DEN);
  constant("CAP_PROP_BACKEND", cv::CAP_PROP_BACKEND);
  constant("CAP_PROP_CHANNEL", cv::CAP_PROP_CHANNEL);
  constant("CAP_PROP_AUTO_WB", cv::CAP_PROP_AUTO_WB);
  constant("CAP_PROP_WB_TEMPERATURE", cv::CAP_PROP_WB_TEMPERATURE);
  constant("CAP_PROP_CODEC_PIXEL_FORMAT", cv::CAP_PROP_CODEC_PIXEL_FORMAT);
  constant("CAP_PROP_BITRATE", cv::CAP_PROP_BITRATE);
  constant("CAP_PROP_ORIENTATION_META", cv::CAP_PROP_ORIENTATION_META);
  constant("CAP_PROP_ORIENTATION_AUTO", cv::CAP_PROP_ORIENTATION_AUTO);
  constant("CAP_PROP_HW_ACCELERATION", cv::CAP_PROP_HW_ACCELERATION);
  constant("CAP_PROP_HW_DEVICE", cv::CAP_PROP_HW_DEVICE);
  constant("CAP_PROP_HW_ACCELERATION_USE_OPENCL", cv::CAP_PROP_HW_ACCELERATION_USE_OPENCL);
  constant("CAP_PROP_OPEN_TIMEOUT_MSEC", cv::CAP_PROP_OPEN_TIMEOUT_MSEC);
  constant("CAP_PROP_READ_TIMEOUT_MSEC", cv::CAP_PROP_READ_TIMEOUT_MSEC);
  constant("CAP_PROP_STREAM_OPEN_TIME_USEC", cv::CAP_PROP_STREAM_OPEN_TIME_USEC);
  constant("CV__CAP_PROP_LATEST", cv::CV__CAP_PROP_LATEST);
  constant("VIDEOWRITER_PROP_QUALITY", cv::VIDEOWRITER_PROP_QUALITY);
  constant("VIDEOWRITER_PROP_FRAMEBYTES", cv::VIDEOWRITER_PROP_FRAMEBYTES);
  constant("VIDEOWRITER_PROP_NSTRIPES", cv::VIDEOWRITER_PROP_NSTRIPES);
  constant("VIDEOWRITER_PROP_IS_COLOR", cv::VIDEOWRITER_PROP_IS_COLOR);
  constant("VIDEOWRITER_PROP_DEPTH", cv::VIDEOWRITER_PROP_DEPTH);
  constant("VIDEOWRITER_PROP_HW_ACCELERATION", cv::VIDEOWRITER_PROP_HW_ACCELERATION);
  constant("VIDEOWRITER_PROP_HW_DEVICE", cv::VIDEOWRITER_PROP_HW_DEVICE);
  constant("VIDEOWRITER_PROP_HW_ACCELERATION_USE_OPENCL", cv::VIDEOWRITER_PROP_HW_ACCELERATION_USE_OPENCL);
  constant("CV__VIDEOWRITER_PROP_LATEST", cv::CV__VIDEOWRITER_PROP_LATEST);
  constant("VIDEO_ACCELERATION_NONE", cv::VIDEO_ACCELERATION_NONE);
  constant("VIDEO_ACCELERATION_ANY", cv::VIDEO_ACCELERATION_ANY);
  constant("VIDEO_ACCELERATION_D3D11", cv::VIDEO_ACCELERATION_D3D11);
  constant("VIDEO_ACCELERATION_VAAPI", cv::VIDEO_ACCELERATION_VAAPI);
  constant("VIDEO_ACCELERATION_MFX", cv::VIDEO_ACCELERATION_MFX);
  constant("CAP_PROP_DC1394_OFF", cv::CAP_PROP_DC1394_OFF);
  constant("CAP_PROP_DC1394_MODE_MANUAL", cv::CAP_PROP_DC1394_MODE_MANUAL);
  constant("CAP_PROP_DC1394_MODE_AUTO", cv::CAP_PROP_DC1394_MODE_AUTO);
  constant("CAP_PROP_DC1394_MODE_ONE_PUSH_AUTO", cv::CAP_PROP_DC1394_MODE_ONE_PUSH_AUTO);
  constant("CAP_PROP_DC1394_MAX", cv::CAP_PROP_DC1394_MAX);
  constant("CAP_OPENNI_DEPTH_GENERATOR", cv::CAP_OPENNI_DEPTH_GENERATOR);
  constant("CAP_OPENNI_IMAGE_GENERATOR", cv::CAP_OPENNI_IMAGE_GENERATOR);
  constant("CAP_OPENNI_IR_GENERATOR", cv::CAP_OPENNI_IR_GENERATOR);
  constant("CAP_OPENNI_GENERATORS_MASK", cv::CAP_OPENNI_GENERATORS_MASK);
  constant("CAP_PROP_OPENNI_OUTPUT_MODE", cv::CAP_PROP_OPENNI_OUTPUT_MODE);
  constant("CAP_PROP_OPENNI_FRAME_MAX_DEPTH", cv::CAP_PROP_OPENNI_FRAME_MAX_DEPTH);
  constant("CAP_PROP_OPENNI_BASELINE", cv::CAP_PROP_OPENNI_BASELINE);
  constant("CAP_PROP_OPENNI_FOCAL_LENGTH", cv::CAP_PROP_OPENNI_FOCAL_LENGTH);
  constant("CAP_PROP_OPENNI_REGISTRATION", cv::CAP_PROP_OPENNI_REGISTRATION);
  constant("CAP_PROP_OPENNI_REGISTRATION_ON", cv::CAP_PROP_OPENNI_REGISTRATION_ON);
  constant("CAP_PROP_OPENNI_APPROX_FRAME_SYNC", cv::CAP_PROP_OPENNI_APPROX_FRAME_SYNC);
  constant("CAP_PROP_OPENNI_MAX_BUFFER_SIZE", cv::CAP_PROP_OPENNI_MAX_BUFFER_SIZE);
  constant("CAP_PROP_OPENNI_CIRCLE_BUFFER", cv::CAP_PROP_OPENNI_CIRCLE_BUFFER);
  constant("CAP_PROP_OPENNI_MAX_TIME_DURATION", cv::CAP_PROP_OPENNI_MAX_TIME_DURATION);
  constant("CAP_PROP_OPENNI_GENERATOR_PRESENT", cv::CAP_PROP_OPENNI_GENERATOR_PRESENT);
  constant("CAP_PROP_OPENNI2_SYNC", cv::CAP_PROP_OPENNI2_SYNC);
  constant("CAP_PROP_OPENNI2_MIRROR", cv::CAP_PROP_OPENNI2_MIRROR);
  constant("CAP_OPENNI_IMAGE_GENERATOR_PRESENT", cv::CAP_OPENNI_IMAGE_GENERATOR_PRESENT);
  constant("CAP_OPENNI_IMAGE_GENERATOR_OUTPUT_MODE", cv::CAP_OPENNI_IMAGE_GENERATOR_OUTPUT_MODE);
  constant("CAP_OPENNI_DEPTH_GENERATOR_PRESENT", cv::CAP_OPENNI_DEPTH_GENERATOR_PRESENT);
  constant("CAP_OPENNI_DEPTH_GENERATOR_BASELINE", cv::CAP_OPENNI_DEPTH_GENERATOR_BASELINE);
  constant("CAP_OPENNI_DEPTH_GENERATOR_FOCAL_LENGTH", cv::CAP_OPENNI_DEPTH_GENERATOR_FOCAL_LENGTH);
  constant("CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION", cv::CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION);
  constant("CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION_ON", cv::CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION_ON);
  constant("CAP_OPENNI_IR_GENERATOR_PRESENT", cv::CAP_OPENNI_IR_GENERATOR_PRESENT);
  constant("CAP_OPENNI_DEPTH_MAP", cv::CAP_OPENNI_DEPTH_MAP);
  constant("CAP_OPENNI_POINT_CLOUD_MAP", cv::CAP_OPENNI_POINT_CLOUD_MAP);
  constant("CAP_OPENNI_DISPARITY_MAP", cv::CAP_OPENNI_DISPARITY_MAP);
  constant("CAP_OPENNI_DISPARITY_MAP_32F", cv::CAP_OPENNI_DISPARITY_MAP_32F);
  constant("CAP_OPENNI_VALID_DEPTH_MASK", cv::CAP_OPENNI_VALID_DEPTH_MASK);
  constant("CAP_OPENNI_BGR_IMAGE", cv::CAP_OPENNI_BGR_IMAGE);
  constant("CAP_OPENNI_GRAY_IMAGE", cv::CAP_OPENNI_GRAY_IMAGE);
  constant("CAP_OPENNI_IR_IMAGE", cv::CAP_OPENNI_IR_IMAGE);
  constant("CAP_OPENNI_VGA_30HZ", cv::CAP_OPENNI_VGA_30HZ);
  constant("CAP_OPENNI_SXGA_15HZ", cv::CAP_OPENNI_SXGA_15HZ);
  constant("CAP_OPENNI_SXGA_30HZ", cv::CAP_OPENNI_SXGA_30HZ);
  constant("CAP_OPENNI_QVGA_30HZ", cv::CAP_OPENNI_QVGA_30HZ);
  constant("CAP_OPENNI_QVGA_60HZ", cv::CAP_OPENNI_QVGA_60HZ);
  constant("CAP_PROP_GSTREAMER_QUEUE_LENGTH", cv::CAP_PROP_GSTREAMER_QUEUE_LENGTH);
  constant("CAP_PROP_PVAPI_MULTICASTIP", cv::CAP_PROP_PVAPI_MULTICASTIP);
  constant("CAP_PROP_PVAPI_FRAMESTARTTRIGGERMODE", cv::CAP_PROP_PVAPI_FRAMESTARTTRIGGERMODE);
  constant("CAP_PROP_PVAPI_DECIMATIONHORIZONTAL", cv::CAP_PROP_PVAPI_DECIMATIONHORIZONTAL);
  constant("CAP_PROP_PVAPI_DECIMATIONVERTICAL", cv::CAP_PROP_PVAPI_DECIMATIONVERTICAL);
  constant("CAP_PROP_PVAPI_BINNINGX", cv::CAP_PROP_PVAPI_BINNINGX);
  constant("CAP_PROP_PVAPI_BINNINGY", cv::CAP_PROP_PVAPI_BINNINGY);
  constant("CAP_PROP_PVAPI_PIXELFORMAT", cv::CAP_PROP_PVAPI_PIXELFORMAT);
  constant("CAP_PVAPI_FSTRIGMODE_FREERUN", cv::CAP_PVAPI_FSTRIGMODE_FREERUN);
  constant("CAP_PVAPI_FSTRIGMODE_SYNCIN1", cv::CAP_PVAPI_FSTRIGMODE_SYNCIN1);
  constant("CAP_PVAPI_FSTRIGMODE_SYNCIN2", cv::CAP_PVAPI_FSTRIGMODE_SYNCIN2);
  constant("CAP_PVAPI_FSTRIGMODE_FIXEDRATE", cv::CAP_PVAPI_FSTRIGMODE_FIXEDRATE);
  constant("CAP_PVAPI_FSTRIGMODE_SOFTWARE", cv::CAP_PVAPI_FSTRIGMODE_SOFTWARE);
  constant("CAP_PVAPI_DECIMATION_OFF", cv::CAP_PVAPI_DECIMATION_OFF);
  constant("CAP_PVAPI_DECIMATION_2OUTOF4", cv::CAP_PVAPI_DECIMATION_2OUTOF4);
  constant("CAP_PVAPI_DECIMATION_2OUTOF8", cv::CAP_PVAPI_DECIMATION_2OUTOF8);
  constant("CAP_PVAPI_DECIMATION_2OUTOF16", cv::CAP_PVAPI_DECIMATION_2OUTOF16);
  constant("CAP_PVAPI_PIXELFORMAT_MONO8", cv::CAP_PVAPI_PIXELFORMAT_MONO8);
  constant("CAP_PVAPI_PIXELFORMAT_MONO16", cv::CAP_PVAPI_PIXELFORMAT_MONO16);
  constant("CAP_PVAPI_PIXELFORMAT_BAYER8", cv::CAP_PVAPI_PIXELFORMAT_BAYER8);
  constant("CAP_PVAPI_PIXELFORMAT_BAYER16", cv::CAP_PVAPI_PIXELFORMAT_BAYER16);
  constant("CAP_PVAPI_PIXELFORMAT_RGB24", cv::CAP_PVAPI_PIXELFORMAT_RGB24);
  constant("CAP_PVAPI_PIXELFORMAT_BGR24", cv::CAP_PVAPI_PIXELFORMAT_BGR24);
  constant("CAP_PVAPI_PIXELFORMAT_RGBA32", cv::CAP_PVAPI_PIXELFORMAT_RGBA32);
  constant("CAP_PVAPI_PIXELFORMAT_BGRA32", cv::CAP_PVAPI_PIXELFORMAT_BGRA32);
  constant("CAP_PROP_XI_DOWNSAMPLING", cv::CAP_PROP_XI_DOWNSAMPLING);
  constant("CAP_PROP_XI_DATA_FORMAT", cv::CAP_PROP_XI_DATA_FORMAT);
  constant("CAP_PROP_XI_OFFSET_X", cv::CAP_PROP_XI_OFFSET_X);
  constant("CAP_PROP_XI_OFFSET_Y", cv::CAP_PROP_XI_OFFSET_Y);
  constant("CAP_PROP_XI_TRG_SOURCE", cv::CAP_PROP_XI_TRG_SOURCE);
  constant("CAP_PROP_XI_TRG_SOFTWARE", cv::CAP_PROP_XI_TRG_SOFTWARE);
  constant("CAP_PROP_XI_GPI_SELECTOR", cv::CAP_PROP_XI_GPI_SELECTOR);
  constant("CAP_PROP_XI_GPI_MODE", cv::CAP_PROP_XI_GPI_MODE);
  constant("CAP_PROP_XI_GPI_LEVEL", cv::CAP_PROP_XI_GPI_LEVEL);
  constant("CAP_PROP_XI_GPO_SELECTOR", cv::CAP_PROP_XI_GPO_SELECTOR);
  constant("CAP_PROP_XI_GPO_MODE", cv::CAP_PROP_XI_GPO_MODE);
  constant("CAP_PROP_XI_LED_SELECTOR", cv::CAP_PROP_XI_LED_SELECTOR);
  constant("CAP_PROP_XI_LED_MODE", cv::CAP_PROP_XI_LED_MODE);
  constant("CAP_PROP_XI_MANUAL_WB", cv::CAP_PROP_XI_MANUAL_WB);
  constant("CAP_PROP_XI_AUTO_WB", cv::CAP_PROP_XI_AUTO_WB);
  constant("CAP_PROP_XI_AEAG", cv::CAP_PROP_XI_AEAG);
  constant("CAP_PROP_XI_EXP_PRIORITY", cv::CAP_PROP_XI_EXP_PRIORITY);
  constant("CAP_PROP_XI_AE_MAX_LIMIT", cv::CAP_PROP_XI_AE_MAX_LIMIT);
  constant("CAP_PROP_XI_AG_MAX_LIMIT", cv::CAP_PROP_XI_AG_MAX_LIMIT);
  constant("CAP_PROP_XI_AEAG_LEVEL", cv::CAP_PROP_XI_AEAG_LEVEL);
  constant("CAP_PROP_XI_TIMEOUT", cv::CAP_PROP_XI_TIMEOUT);
  constant("CAP_PROP_XI_EXPOSURE", cv::CAP_PROP_XI_EXPOSURE);
  constant("CAP_PROP_XI_EXPOSURE_BURST_COUNT", cv::CAP_PROP_XI_EXPOSURE_BURST_COUNT);
  constant("CAP_PROP_XI_GAIN_SELECTOR", cv::CAP_PROP_XI_GAIN_SELECTOR);
  constant("CAP_PROP_XI_GAIN", cv::CAP_PROP_XI_GAIN);
  constant("CAP_PROP_XI_DOWNSAMPLING_TYPE", cv::CAP_PROP_XI_DOWNSAMPLING_TYPE);
  constant("CAP_PROP_XI_BINNING_SELECTOR", cv::CAP_PROP_XI_BINNING_SELECTOR);
  constant("CAP_PROP_XI_BINNING_VERTICAL", cv::CAP_PROP_XI_BINNING_VERTICAL);
  constant("CAP_PROP_XI_BINNING_HORIZONTAL", cv::CAP_PROP_XI_BINNING_HORIZONTAL);
  constant("CAP_PROP_XI_BINNING_PATTERN", cv::CAP_PROP_XI_BINNING_PATTERN);
  constant("CAP_PROP_XI_DECIMATION_SELECTOR", cv::CAP_PROP_XI_DECIMATION_SELECTOR);
  constant("CAP_PROP_XI_DECIMATION_VERTICAL", cv::CAP_PROP_XI_DECIMATION_VERTICAL);
  constant("CAP_PROP_XI_DECIMATION_HORIZONTAL", cv::CAP_PROP_XI_DECIMATION_HORIZONTAL);
  constant("CAP_PROP_XI_DECIMATION_PATTERN", cv::CAP_PROP_XI_DECIMATION_PATTERN);
  constant("CAP_PROP_XI_TEST_PATTERN_GENERATOR_SELECTOR", cv::CAP_PROP_XI_TEST_PATTERN_GENERATOR_SELECTOR);
  constant("CAP_PROP_XI_TEST_PATTERN", cv::CAP_PROP_XI_TEST_PATTERN);
  constant("CAP_PROP_XI_IMAGE_DATA_FORMAT", cv::CAP_PROP_XI_IMAGE_DATA_FORMAT);
  constant("CAP_PROP_XI_SHUTTER_TYPE", cv::CAP_PROP_XI_SHUTTER_TYPE);
  constant("CAP_PROP_XI_SENSOR_TAPS", cv::CAP_PROP_XI_SENSOR_TAPS);
  constant("CAP_PROP_XI_AEAG_ROI_OFFSET_X", cv::CAP_PROP_XI_AEAG_ROI_OFFSET_X);
  constant("CAP_PROP_XI_AEAG_ROI_OFFSET_Y", cv::CAP_PROP_XI_AEAG_ROI_OFFSET_Y);
  constant("CAP_PROP_XI_AEAG_ROI_WIDTH", cv::CAP_PROP_XI_AEAG_ROI_WIDTH);
  constant("CAP_PROP_XI_AEAG_ROI_HEIGHT", cv::CAP_PROP_XI_AEAG_ROI_HEIGHT);
  constant("CAP_PROP_XI_BPC", cv::CAP_PROP_XI_BPC);
  constant("CAP_PROP_XI_WB_KR", cv::CAP_PROP_XI_WB_KR);
  constant("CAP_PROP_XI_WB_KG", cv::CAP_PROP_XI_WB_KG);
  constant("CAP_PROP_XI_WB_KB", cv::CAP_PROP_XI_WB_KB);
  constant("CAP_PROP_XI_WIDTH", cv::CAP_PROP_XI_WIDTH);
  constant("CAP_PROP_XI_HEIGHT", cv::CAP_PROP_XI_HEIGHT);
  constant("CAP_PROP_XI_REGION_SELECTOR", cv::CAP_PROP_XI_REGION_SELECTOR);
  constant("CAP_PROP_XI_REGION_MODE", cv::CAP_PROP_XI_REGION_MODE);
  constant("CAP_PROP_XI_LIMIT_BANDWIDTH", cv::CAP_PROP_XI_LIMIT_BANDWIDTH);
  constant("CAP_PROP_XI_SENSOR_DATA_BIT_DEPTH", cv::CAP_PROP_XI_SENSOR_DATA_BIT_DEPTH);
  constant("CAP_PROP_XI_OUTPUT_DATA_BIT_DEPTH", cv::CAP_PROP_XI_OUTPUT_DATA_BIT_DEPTH);
  constant("CAP_PROP_XI_IMAGE_DATA_BIT_DEPTH", cv::CAP_PROP_XI_IMAGE_DATA_BIT_DEPTH);
  constant("CAP_PROP_XI_OUTPUT_DATA_PACKING", cv::CAP_PROP_XI_OUTPUT_DATA_PACKING);
  constant("CAP_PROP_XI_OUTPUT_DATA_PACKING_TYPE", cv::CAP_PROP_XI_OUTPUT_DATA_PACKING_TYPE);
  constant("CAP_PROP_XI_IS_COOLED", cv::CAP_PROP_XI_IS_COOLED);
  constant("CAP_PROP_XI_COOLING", cv::CAP_PROP_XI_COOLING);
  constant("CAP_PROP_XI_TARGET_TEMP", cv::CAP_PROP_XI_TARGET_TEMP);
  constant("CAP_PROP_XI_CHIP_TEMP", cv::CAP_PROP_XI_CHIP_TEMP);
  constant("CAP_PROP_XI_HOUS_TEMP", cv::CAP_PROP_XI_HOUS_TEMP);
  constant("CAP_PROP_XI_HOUS_BACK_SIDE_TEMP", cv::CAP_PROP_XI_HOUS_BACK_SIDE_TEMP);
  constant("CAP_PROP_XI_SENSOR_BOARD_TEMP", cv::CAP_PROP_XI_SENSOR_BOARD_TEMP);
  constant("CAP_PROP_XI_CMS", cv::CAP_PROP_XI_CMS);
  constant("CAP_PROP_XI_APPLY_CMS", cv::CAP_PROP_XI_APPLY_CMS);
  constant("CAP_PROP_XI_IMAGE_IS_COLOR", cv::CAP_PROP_XI_IMAGE_IS_COLOR);
  constant("CAP_PROP_XI_COLOR_FILTER_ARRAY", cv::CAP_PROP_XI_COLOR_FILTER_ARRAY);
  constant("CAP_PROP_XI_GAMMAY", cv::CAP_PROP_XI_GAMMAY);
  constant("CAP_PROP_XI_GAMMAC", cv::CAP_PROP_XI_GAMMAC);
  constant("CAP_PROP_XI_SHARPNESS", cv::CAP_PROP_XI_SHARPNESS);
  constant("CAP_PROP_XI_CC_MATRIX_00", cv::CAP_PROP_XI_CC_MATRIX_00);
  constant("CAP_PROP_XI_CC_MATRIX_01", cv::CAP_PROP_XI_CC_MATRIX_01);
  constant("CAP_PROP_XI_CC_MATRIX_02", cv::CAP_PROP_XI_CC_MATRIX_02);
  constant("CAP_PROP_XI_CC_MATRIX_03", cv::CAP_PROP_XI_CC_MATRIX_03);
  constant("CAP_PROP_XI_CC_MATRIX_10", cv::CAP_PROP_XI_CC_MATRIX_10);
  constant("CAP_PROP_XI_CC_MATRIX_11", cv::CAP_PROP_XI_CC_MATRIX_11);
  constant("CAP_PROP_XI_CC_MATRIX_12", cv::CAP_PROP_XI_CC_MATRIX_12);
  constant("CAP_PROP_XI_CC_MATRIX_13", cv::CAP_PROP_XI_CC_MATRIX_13);
  constant("CAP_PROP_XI_CC_MATRIX_20", cv::CAP_PROP_XI_CC_MATRIX_20);
  constant("CAP_PROP_XI_CC_MATRIX_21", cv::CAP_PROP_XI_CC_MATRIX_21);
  constant("CAP_PROP_XI_CC_MATRIX_22", cv::CAP_PROP_XI_CC_MATRIX_22);
  constant("CAP_PROP_XI_CC_MATRIX_23", cv::CAP_PROP_XI_CC_MATRIX_23);
  constant("CAP_PROP_XI_CC_MATRIX_30", cv::CAP_PROP_XI_CC_MATRIX_30);
  constant("CAP_PROP_XI_CC_MATRIX_31", cv::CAP_PROP_XI_CC_MATRIX_31);
  constant("CAP_PROP_XI_CC_MATRIX_32", cv::CAP_PROP_XI_CC_MATRIX_32);
  constant("CAP_PROP_XI_CC_MATRIX_33", cv::CAP_PROP_XI_CC_MATRIX_33);
  constant("CAP_PROP_XI_DEFAULT_CC_MATRIX", cv::CAP_PROP_XI_DEFAULT_CC_MATRIX);
  constant("CAP_PROP_XI_TRG_SELECTOR", cv::CAP_PROP_XI_TRG_SELECTOR);
  constant("CAP_PROP_XI_ACQ_FRAME_BURST_COUNT", cv::CAP_PROP_XI_ACQ_FRAME_BURST_COUNT);
  constant("CAP_PROP_XI_DEBOUNCE_EN", cv::CAP_PROP_XI_DEBOUNCE_EN);
  constant("CAP_PROP_XI_DEBOUNCE_T0", cv::CAP_PROP_XI_DEBOUNCE_T0);
  constant("CAP_PROP_XI_DEBOUNCE_T1", cv::CAP_PROP_XI_DEBOUNCE_T1);
  constant("CAP_PROP_XI_DEBOUNCE_POL", cv::CAP_PROP_XI_DEBOUNCE_POL);
  constant("CAP_PROP_XI_LENS_MODE", cv::CAP_PROP_XI_LENS_MODE);
  constant("CAP_PROP_XI_LENS_APERTURE_VALUE", cv::CAP_PROP_XI_LENS_APERTURE_VALUE);
  constant("CAP_PROP_XI_LENS_FOCUS_MOVEMENT_VALUE", cv::CAP_PROP_XI_LENS_FOCUS_MOVEMENT_VALUE);
  constant("CAP_PROP_XI_LENS_FOCUS_MOVE", cv::CAP_PROP_XI_LENS_FOCUS_MOVE);
  constant("CAP_PROP_XI_LENS_FOCUS_DISTANCE", cv::CAP_PROP_XI_LENS_FOCUS_DISTANCE);
  constant("CAP_PROP_XI_LENS_FOCAL_LENGTH", cv::CAP_PROP_XI_LENS_FOCAL_LENGTH);
  constant("CAP_PROP_XI_LENS_FEATURE_SELECTOR", cv::CAP_PROP_XI_LENS_FEATURE_SELECTOR);
  constant("CAP_PROP_XI_LENS_FEATURE", cv::CAP_PROP_XI_LENS_FEATURE);
  constant("CAP_PROP_XI_DEVICE_MODEL_ID", cv::CAP_PROP_XI_DEVICE_MODEL_ID);
  constant("CAP_PROP_XI_DEVICE_SN", cv::CAP_PROP_XI_DEVICE_SN);
  constant("CAP_PROP_XI_IMAGE_DATA_FORMAT_RGB32_ALPHA", cv::CAP_PROP_XI_IMAGE_DATA_FORMAT_RGB32_ALPHA);
  constant("CAP_PROP_XI_IMAGE_PAYLOAD_SIZE", cv::CAP_PROP_XI_IMAGE_PAYLOAD_SIZE);
  constant("CAP_PROP_XI_TRANSPORT_PIXEL_FORMAT", cv::CAP_PROP_XI_TRANSPORT_PIXEL_FORMAT);
  constant("CAP_PROP_XI_SENSOR_CLOCK_FREQ_HZ", cv::CAP_PROP_XI_SENSOR_CLOCK_FREQ_HZ);
  constant("CAP_PROP_XI_SENSOR_CLOCK_FREQ_INDEX", cv::CAP_PROP_XI_SENSOR_CLOCK_FREQ_INDEX);
  constant("CAP_PROP_XI_SENSOR_OUTPUT_CHANNEL_COUNT", cv::CAP_PROP_XI_SENSOR_OUTPUT_CHANNEL_COUNT);
  constant("CAP_PROP_XI_FRAMERATE", cv::CAP_PROP_XI_FRAMERATE);
  constant("CAP_PROP_XI_COUNTER_SELECTOR", cv::CAP_PROP_XI_COUNTER_SELECTOR);
  constant("CAP_PROP_XI_COUNTER_VALUE", cv::CAP_PROP_XI_COUNTER_VALUE);
  constant("CAP_PROP_XI_ACQ_TIMING_MODE", cv::CAP_PROP_XI_ACQ_TIMING_MODE);
  constant("CAP_PROP_XI_AVAILABLE_BANDWIDTH", cv::CAP_PROP_XI_AVAILABLE_BANDWIDTH);
  constant("CAP_PROP_XI_BUFFER_POLICY", cv::CAP_PROP_XI_BUFFER_POLICY);
  constant("CAP_PROP_XI_LUT_EN", cv::CAP_PROP_XI_LUT_EN);
  constant("CAP_PROP_XI_LUT_INDEX", cv::CAP_PROP_XI_LUT_INDEX);
  constant("CAP_PROP_XI_LUT_VALUE", cv::CAP_PROP_XI_LUT_VALUE);
  constant("CAP_PROP_XI_TRG_DELAY", cv::CAP_PROP_XI_TRG_DELAY);
  constant("CAP_PROP_XI_TS_RST_MODE", cv::CAP_PROP_XI_TS_RST_MODE);
  constant("CAP_PROP_XI_TS_RST_SOURCE", cv::CAP_PROP_XI_TS_RST_SOURCE);
  constant("CAP_PROP_XI_IS_DEVICE_EXIST", cv::CAP_PROP_XI_IS_DEVICE_EXIST);
  constant("CAP_PROP_XI_ACQ_BUFFER_SIZE", cv::CAP_PROP_XI_ACQ_BUFFER_SIZE);
  constant("CAP_PROP_XI_ACQ_BUFFER_SIZE_UNIT", cv::CAP_PROP_XI_ACQ_BUFFER_SIZE_UNIT);
  constant("CAP_PROP_XI_ACQ_TRANSPORT_BUFFER_SIZE", cv::CAP_PROP_XI_ACQ_TRANSPORT_BUFFER_SIZE);
  constant("CAP_PROP_XI_BUFFERS_QUEUE_SIZE", cv::CAP_PROP_XI_BUFFERS_QUEUE_SIZE);
  constant("CAP_PROP_XI_ACQ_TRANSPORT_BUFFER_COMMIT", cv::CAP_PROP_XI_ACQ_TRANSPORT_BUFFER_COMMIT);
  constant("CAP_PROP_XI_RECENT_FRAME", cv::CAP_PROP_XI_RECENT_FRAME);
  constant("CAP_PROP_XI_DEVICE_RESET", cv::CAP_PROP_XI_DEVICE_RESET);
  constant("CAP_PROP_XI_COLUMN_FPN_CORRECTION", cv::CAP_PROP_XI_COLUMN_FPN_CORRECTION);
  constant("CAP_PROP_XI_ROW_FPN_CORRECTION", cv::CAP_PROP_XI_ROW_FPN_CORRECTION);
  constant("CAP_PROP_XI_SENSOR_MODE", cv::CAP_PROP_XI_SENSOR_MODE);
  constant("CAP_PROP_XI_HDR", cv::CAP_PROP_XI_HDR);
  constant("CAP_PROP_XI_HDR_KNEEPOINT_COUNT", cv::CAP_PROP_XI_HDR_KNEEPOINT_COUNT);
  constant("CAP_PROP_XI_HDR_T1", cv::CAP_PROP_XI_HDR_T1);
  constant("CAP_PROP_XI_HDR_T2", cv::CAP_PROP_XI_HDR_T2);
  constant("CAP_PROP_XI_KNEEPOINT1", cv::CAP_PROP_XI_KNEEPOINT1);
  constant("CAP_PROP_XI_KNEEPOINT2", cv::CAP_PROP_XI_KNEEPOINT2);
  constant("CAP_PROP_XI_IMAGE_BLACK_LEVEL", cv::CAP_PROP_XI_IMAGE_BLACK_LEVEL);
  constant("CAP_PROP_XI_HW_REVISION", cv::CAP_PROP_XI_HW_REVISION);
  constant("CAP_PROP_XI_DEBUG_LEVEL", cv::CAP_PROP_XI_DEBUG_LEVEL);
  constant("CAP_PROP_XI_AUTO_BANDWIDTH_CALCULATION", cv::CAP_PROP_XI_AUTO_BANDWIDTH_CALCULATION);
  constant("CAP_PROP_XI_FFS_FILE_ID", cv::CAP_PROP_XI_FFS_FILE_ID);
  constant("CAP_PROP_XI_FFS_FILE_SIZE", cv::CAP_PROP_XI_FFS_FILE_SIZE);
  constant("CAP_PROP_XI_FREE_FFS_SIZE", cv::CAP_PROP_XI_FREE_FFS_SIZE);
  constant("CAP_PROP_XI_USED_FFS_SIZE", cv::CAP_PROP_XI_USED_FFS_SIZE);
  constant("CAP_PROP_XI_FFS_ACCESS_KEY", cv::CAP_PROP_XI_FFS_ACCESS_KEY);
  constant("CAP_PROP_XI_SENSOR_FEATURE_SELECTOR", cv::CAP_PROP_XI_SENSOR_FEATURE_SELECTOR);
  constant("CAP_PROP_XI_SENSOR_FEATURE_VALUE", cv::CAP_PROP_XI_SENSOR_FEATURE_VALUE);
  constant("CAP_PROP_ARAVIS_AUTOTRIGGER", cv::CAP_PROP_ARAVIS_AUTOTRIGGER);
  constant("CAP_PROP_IOS_DEVICE_FOCUS", cv::CAP_PROP_IOS_DEVICE_FOCUS);
  constant("CAP_PROP_IOS_DEVICE_EXPOSURE", cv::CAP_PROP_IOS_DEVICE_EXPOSURE);
  constant("CAP_PROP_IOS_DEVICE_FLASH", cv::CAP_PROP_IOS_DEVICE_FLASH);
  constant("CAP_PROP_IOS_DEVICE_WHITEBALANCE", cv::CAP_PROP_IOS_DEVICE_WHITEBALANCE);
  constant("CAP_PROP_IOS_DEVICE_TORCH", cv::CAP_PROP_IOS_DEVICE_TORCH);
  constant("CAP_PROP_GIGA_FRAME_OFFSET_X", cv::CAP_PROP_GIGA_FRAME_OFFSET_X);
  constant("CAP_PROP_GIGA_FRAME_OFFSET_Y", cv::CAP_PROP_GIGA_FRAME_OFFSET_Y);
  constant("CAP_PROP_GIGA_FRAME_WIDTH_MAX", cv::CAP_PROP_GIGA_FRAME_WIDTH_MAX);
  constant("CAP_PROP_GIGA_FRAME_HEIGH_MAX", cv::CAP_PROP_GIGA_FRAME_HEIGH_MAX);
  constant("CAP_PROP_GIGA_FRAME_SENS_WIDTH", cv::CAP_PROP_GIGA_FRAME_SENS_WIDTH);
  constant("CAP_PROP_GIGA_FRAME_SENS_HEIGH", cv::CAP_PROP_GIGA_FRAME_SENS_HEIGH);
  constant("CAP_PROP_INTELPERC_PROFILE_COUNT", cv::CAP_PROP_INTELPERC_PROFILE_COUNT);
  constant("CAP_PROP_INTELPERC_PROFILE_IDX", cv::CAP_PROP_INTELPERC_PROFILE_IDX);
  constant("CAP_PROP_INTELPERC_DEPTH_LOW_CONFIDENCE_VALUE", cv::CAP_PROP_INTELPERC_DEPTH_LOW_CONFIDENCE_VALUE);
  constant("CAP_PROP_INTELPERC_DEPTH_SATURATION_VALUE", cv::CAP_PROP_INTELPERC_DEPTH_SATURATION_VALUE);
  constant("CAP_PROP_INTELPERC_DEPTH_CONFIDENCE_THRESHOLD", cv::CAP_PROP_INTELPERC_DEPTH_CONFIDENCE_THRESHOLD);
  constant("CAP_PROP_INTELPERC_DEPTH_FOCAL_LENGTH_HORZ", cv::CAP_PROP_INTELPERC_DEPTH_FOCAL_LENGTH_HORZ);
  constant("CAP_PROP_INTELPERC_DEPTH_FOCAL_LENGTH_VERT", cv::CAP_PROP_INTELPERC_DEPTH_FOCAL_LENGTH_VERT);
  constant("CAP_INTELPERC_DEPTH_GENERATOR", cv::CAP_INTELPERC_DEPTH_GENERATOR);
  constant("CAP_INTELPERC_IMAGE_GENERATOR", cv::CAP_INTELPERC_IMAGE_GENERATOR);
  constant("CAP_INTELPERC_IR_GENERATOR", cv::CAP_INTELPERC_IR_GENERATOR);
  constant("CAP_INTELPERC_GENERATORS_MASK", cv::CAP_INTELPERC_GENERATORS_MASK);
  constant("CAP_INTELPERC_DEPTH_MAP", cv::CAP_INTELPERC_DEPTH_MAP);
  constant("CAP_INTELPERC_UVDEPTH_MAP", cv::CAP_INTELPERC_UVDEPTH_MAP);
  constant("CAP_INTELPERC_IR_MAP", cv::CAP_INTELPERC_IR_MAP);
  constant("CAP_INTELPERC_IMAGE", cv::CAP_INTELPERC_IMAGE);
  constant("CAP_PROP_GPHOTO2_PREVIEW", cv::CAP_PROP_GPHOTO2_PREVIEW);
  constant("CAP_PROP_GPHOTO2_WIDGET_ENUMERATE", cv::CAP_PROP_GPHOTO2_WIDGET_ENUMERATE);
  constant("CAP_PROP_GPHOTO2_RELOAD_CONFIG", cv::CAP_PROP_GPHOTO2_RELOAD_CONFIG);
  constant("CAP_PROP_GPHOTO2_RELOAD_ON_CHANGE", cv::CAP_PROP_GPHOTO2_RELOAD_ON_CHANGE);
  constant("CAP_PROP_GPHOTO2_COLLECT_MSGS", cv::CAP_PROP_GPHOTO2_COLLECT_MSGS);
  constant("CAP_PROP_GPHOTO2_FLUSH_MSGS", cv::CAP_PROP_GPHOTO2_FLUSH_MSGS);
  constant("CAP_PROP_SPEED", cv::CAP_PROP_SPEED);
  constant("CAP_PROP_APERTURE", cv::CAP_PROP_APERTURE);
  constant("CAP_PROP_EXPOSUREPROGRAM", cv::CAP_PROP_EXPOSUREPROGRAM);
  constant("CAP_PROP_VIEWFINDER", cv::CAP_PROP_VIEWFINDER);
  constant("CAP_PROP_IMAGES_BASE", cv::CAP_PROP_IMAGES_BASE);
  constant("CAP_PROP_IMAGES_LAST", cv::CAP_PROP_IMAGES_LAST);
  constant("WINDOW_NORMAL", cv::WINDOW_NORMAL);
  constant("WINDOW_AUTOSIZE", cv::WINDOW_AUTOSIZE);
  constant("WINDOW_OPENGL", cv::WINDOW_OPENGL);
  constant("WINDOW_FULLSCREEN", cv::WINDOW_FULLSCREEN);
  constant("WINDOW_FREERATIO", cv::WINDOW_FREERATIO);
  constant("WINDOW_KEEPRATIO", cv::WINDOW_KEEPRATIO);
  constant("WINDOW_GUI_EXPANDED", cv::WINDOW_GUI_EXPANDED);
  constant("WINDOW_GUI_NORMAL", cv::WINDOW_GUI_NORMAL);
  constant("WND_PROP_FULLSCREEN", cv::WND_PROP_FULLSCREEN);
  constant("WND_PROP_AUTOSIZE", cv::WND_PROP_AUTOSIZE);
  constant("WND_PROP_ASPECT_RATIO", cv::WND_PROP_ASPECT_RATIO);
  constant("WND_PROP_OPENGL", cv::WND_PROP_OPENGL);
  constant("WND_PROP_VISIBLE", cv::WND_PROP_VISIBLE);
  constant("WND_PROP_TOPMOST", cv::WND_PROP_TOPMOST);
  constant("WND_PROP_VSYNC", cv::WND_PROP_VSYNC);
  constant("EVENT_MOUSEMOVE", cv::EVENT_MOUSEMOVE);
  constant("EVENT_LBUTTONDOWN", cv::EVENT_LBUTTONDOWN);
  constant("EVENT_RBUTTONDOWN", cv::EVENT_RBUTTONDOWN);
  constant("EVENT_MBUTTONDOWN", cv::EVENT_MBUTTONDOWN);
  constant("EVENT_LBUTTONUP", cv::EVENT_LBUTTONUP);
  constant("EVENT_RBUTTONUP", cv::EVENT_RBUTTONUP);
  constant("EVENT_MBUTTONUP", cv::EVENT_MBUTTONUP);
  constant("EVENT_LBUTTONDBLCLK", cv::EVENT_LBUTTONDBLCLK);
  constant("EVENT_RBUTTONDBLCLK", cv::EVENT_RBUTTONDBLCLK);
  constant("EVENT_MBUTTONDBLCLK", cv::EVENT_MBUTTONDBLCLK);
  constant("EVENT_MOUSEWHEEL", cv::EVENT_MOUSEWHEEL);
  constant("EVENT_MOUSEHWHEEL", cv::EVENT_MOUSEHWHEEL);
  constant("EVENT_FLAG_LBUTTON", cv::EVENT_FLAG_LBUTTON);
  constant("EVENT_FLAG_RBUTTON", cv::EVENT_FLAG_RBUTTON);
  constant("EVENT_FLAG_MBUTTON", cv::EVENT_FLAG_MBUTTON);
  constant("EVENT_FLAG_CTRLKEY", cv::EVENT_FLAG_CTRLKEY);
  constant("EVENT_FLAG_SHIFTKEY", cv::EVENT_FLAG_SHIFTKEY);
  constant("EVENT_FLAG_ALTKEY", cv::EVENT_FLAG_ALTKEY);
  constant("QT_FONT_LIGHT", cv::QT_FONT_LIGHT);
  constant("QT_FONT_NORMAL", cv::QT_FONT_NORMAL);
  constant("QT_FONT_DEMIBOLD", cv::QT_FONT_DEMIBOLD);
  constant("QT_FONT_BOLD", cv::QT_FONT_BOLD);
  constant("QT_FONT_BLACK", cv::QT_FONT_BLACK);
  constant("QT_STYLE_NORMAL", cv::QT_STYLE_NORMAL);
  constant("QT_STYLE_ITALIC", cv::QT_STYLE_ITALIC);
  constant("QT_STYLE_OBLIQUE", cv::QT_STYLE_OBLIQUE);
  constant("QT_PUSH_BUTTON", cv::QT_PUSH_BUTTON);
  constant("QT_CHECKBOX", cv::QT_CHECKBOX);
  constant("QT_RADIOBOX", cv::QT_RADIOBOX);
  constant("QT_NEW_BUTTONBAR", cv::QT_NEW_BUTTONBAR);
  constant("FILTER_SCHARR", cv::FILTER_SCHARR);
  constant("MORPH_ERODE", cv::MORPH_ERODE);
  constant("MORPH_DILATE", cv::MORPH_DILATE);
  constant("MORPH_OPEN", cv::MORPH_OPEN);
  constant("MORPH_CLOSE", cv::MORPH_CLOSE);
  constant("MORPH_GRADIENT", cv::MORPH_GRADIENT);
  constant("MORPH_TOPHAT", cv::MORPH_TOPHAT);
  constant("MORPH_BLACKHAT", cv::MORPH_BLACKHAT);
  constant("MORPH_HITMISS", cv::MORPH_HITMISS);
  constant("MORPH_RECT", cv::MORPH_RECT);
  constant("MORPH_CROSS", cv::MORPH_CROSS);
  constant("MORPH_ELLIPSE", cv::MORPH_ELLIPSE);
  constant("INTER_NEAREST", cv::INTER_NEAREST);
  constant("INTER_LINEAR", cv::INTER_LINEAR);
  constant("INTER_CUBIC", cv::INTER_CUBIC);
  constant("INTER_AREA", cv::INTER_AREA);
  constant("INTER_LANCZOS4", cv::INTER_LANCZOS4);
  constant("INTER_LINEAR_EXACT", cv::INTER_LINEAR_EXACT);
  constant("INTER_NEAREST_EXACT", cv::INTER_NEAREST_EXACT);
  constant("INTER_MAX", cv::INTER_MAX);
  constant("WARP_FILL_OUTLIERS", cv::WARP_FILL_OUTLIERS);
  constant("WARP_INVERSE_MAP", cv::WARP_INVERSE_MAP);
  constant("WARP_POLAR_LINEAR", cv::WARP_POLAR_LINEAR);
  constant("WARP_POLAR_LOG", cv::WARP_POLAR_LOG);
  constant("INTER_BITS", cv::INTER_BITS);
  constant("INTER_BITS2", cv::INTER_BITS2);
  constant("INTER_TAB_SIZE", cv::INTER_TAB_SIZE);
  constant("INTER_TAB_SIZE2", cv::INTER_TAB_SIZE2);
  constant("DIST_USER", cv::DIST_USER);
  constant("DIST_L1", cv::DIST_L1);
  constant("DIST_L2", cv::DIST_L2);
  constant("DIST_C", cv::DIST_C);
  constant("DIST_L12", cv::DIST_L12);
  constant("DIST_FAIR", cv::DIST_FAIR);
  constant("DIST_WELSCH", cv::DIST_WELSCH);
  constant("DIST_HUBER", cv::DIST_HUBER);
  constant("DIST_MASK_3", cv::DIST_MASK_3);
  constant("DIST_MASK_5", cv::DIST_MASK_5);
  constant("DIST_MASK_PRECISE", cv::DIST_MASK_PRECISE);
  constant("THRESH_BINARY", cv::THRESH_BINARY);
  constant("THRESH_BINARY_INV", cv::THRESH_BINARY_INV);
  constant("THRESH_TRUNC", cv::THRESH_TRUNC);
  constant("THRESH_TOZERO", cv::THRESH_TOZERO);
  constant("THRESH_TOZERO_INV", cv::THRESH_TOZERO_INV);
  constant("THRESH_MASK", cv::THRESH_MASK);
  constant("THRESH_OTSU", cv::THRESH_OTSU);
  constant("THRESH_TRIANGLE", cv::THRESH_TRIANGLE);
  constant("ADAPTIVE_THRESH_MEAN_C", cv::ADAPTIVE_THRESH_MEAN_C);
  constant("ADAPTIVE_THRESH_GAUSSIAN_C", cv::ADAPTIVE_THRESH_GAUSSIAN_C);
  constant("GC_BGD", cv::GC_BGD);
  constant("GC_FGD", cv::GC_FGD);
  constant("GC_PR_BGD", cv::GC_PR_BGD);
  constant("GC_PR_FGD", cv::GC_PR_FGD);
  constant("GC_INIT_WITH_RECT", cv::GC_INIT_WITH_RECT);
  constant("GC_INIT_WITH_MASK", cv::GC_INIT_WITH_MASK);
  constant("GC_EVAL", cv::GC_EVAL);
  constant("GC_EVAL_FREEZE_MODEL", cv::GC_EVAL_FREEZE_MODEL);
  constant("DIST_LABEL_CCOMP", cv::DIST_LABEL_CCOMP);
  constant("DIST_LABEL_PIXEL", cv::DIST_LABEL_PIXEL);
  constant("FLOODFILL_FIXED_RANGE", cv::FLOODFILL_FIXED_RANGE);
  constant("FLOODFILL_MASK_ONLY", cv::FLOODFILL_MASK_ONLY);
  constant("CC_STAT_LEFT", cv::CC_STAT_LEFT);
  constant("CC_STAT_TOP", cv::CC_STAT_TOP);
  constant("CC_STAT_WIDTH", cv::CC_STAT_WIDTH);
  constant("CC_STAT_HEIGHT", cv::CC_STAT_HEIGHT);
  constant("CC_STAT_AREA", cv::CC_STAT_AREA);
  constant("CC_STAT_MAX", cv::CC_STAT_MAX);
  constant("CCL_DEFAULT", cv::CCL_DEFAULT);
  constant("CCL_WU", cv::CCL_WU);
  constant("CCL_GRANA", cv::CCL_GRANA);
  constant("CCL_BOLELLI", cv::CCL_BOLELLI);
  constant("CCL_SAUF", cv::CCL_SAUF);
  constant("CCL_BBDT", cv::CCL_BBDT);
  constant("CCL_SPAGHETTI", cv::CCL_SPAGHETTI);
  constant("RETR_EXTERNAL", cv::RETR_EXTERNAL);
  constant("RETR_LIST", cv::RETR_LIST);
  constant("RETR_CCOMP", cv::RETR_CCOMP);
  constant("RETR_TREE", cv::RETR_TREE);
  constant("RETR_FLOODFILL", cv::RETR_FLOODFILL);
  constant("CHAIN_APPROX_NONE", cv::CHAIN_APPROX_NONE);
  constant("CHAIN_APPROX_SIMPLE", cv::CHAIN_APPROX_SIMPLE);
  constant("CHAIN_APPROX_TC89_L1", cv::CHAIN_APPROX_TC89_L1);
  constant("CHAIN_APPROX_TC89_KCOS", cv::CHAIN_APPROX_TC89_KCOS);
  constant("CONTOURS_MATCH_I1", cv::CONTOURS_MATCH_I1);
  constant("CONTOURS_MATCH_I2", cv::CONTOURS_MATCH_I2);
  constant("CONTOURS_MATCH_I3", cv::CONTOURS_MATCH_I3);
  constant("HOUGH_STANDARD", cv::HOUGH_STANDARD);
  constant("HOUGH_PROBABILISTIC", cv::HOUGH_PROBABILISTIC);
  constant("HOUGH_MULTI_SCALE", cv::HOUGH_MULTI_SCALE);
  constant("HOUGH_GRADIENT", cv::HOUGH_GRADIENT);
  constant("HOUGH_GRADIENT_ALT", cv::HOUGH_GRADIENT_ALT);
  constant("LSD_REFINE_NONE", cv::LSD_REFINE_NONE);
  constant("LSD_REFINE_STD", cv::LSD_REFINE_STD);
  constant("LSD_REFINE_ADV", cv::LSD_REFINE_ADV);
  constant("HISTCMP_CORREL", cv::HISTCMP_CORREL);
  constant("HISTCMP_CHISQR", cv::HISTCMP_CHISQR);
  constant("HISTCMP_INTERSECT", cv::HISTCMP_INTERSECT);
  constant("HISTCMP_BHATTACHARYYA", cv::HISTCMP_BHATTACHARYYA);
  constant("HISTCMP_HELLINGER", cv::HISTCMP_HELLINGER);
  constant("HISTCMP_CHISQR_ALT", cv::HISTCMP_CHISQR_ALT);
  constant("HISTCMP_KL_DIV", cv::HISTCMP_KL_DIV);
  constant("COLOR_BGR2BGRA", cv::COLOR_BGR2BGRA);
  constant("COLOR_RGB2RGBA", cv::COLOR_RGB2RGBA);
  constant("COLOR_BGRA2BGR", cv::COLOR_BGRA2BGR);
  constant("COLOR_RGBA2RGB", cv::COLOR_RGBA2RGB);
  constant("COLOR_BGR2RGBA", cv::COLOR_BGR2RGBA);
  constant("COLOR_RGB2BGRA", cv::COLOR_RGB2BGRA);
  constant("COLOR_RGBA2BGR", cv::COLOR_RGBA2BGR);
  constant("COLOR_BGRA2RGB", cv::COLOR_BGRA2RGB);
  constant("COLOR_BGR2RGB", cv::COLOR_BGR2RGB);
  constant("COLOR_RGB2BGR", cv::COLOR_RGB2BGR);
  constant("COLOR_BGRA2RGBA", cv::COLOR_BGRA2RGBA);
  constant("COLOR_RGBA2BGRA", cv::COLOR_RGBA2BGRA);
  constant("COLOR_BGR2GRAY", cv::COLOR_BGR2GRAY);
  constant("COLOR_RGB2GRAY", cv::COLOR_RGB2GRAY);
  constant("COLOR_GRAY2BGR", cv::COLOR_GRAY2BGR);
  constant("COLOR_GRAY2RGB", cv::COLOR_GRAY2RGB);
  constant("COLOR_GRAY2BGRA", cv::COLOR_GRAY2BGRA);
  constant("COLOR_GRAY2RGBA", cv::COLOR_GRAY2RGBA);
  constant("COLOR_BGRA2GRAY", cv::COLOR_BGRA2GRAY);
  constant("COLOR_RGBA2GRAY", cv::COLOR_RGBA2GRAY);
  constant("COLOR_BGR2BGR565", cv::COLOR_BGR2BGR565);
  constant("COLOR_RGB2BGR565", cv::COLOR_RGB2BGR565);
  constant("COLOR_BGR5652BGR", cv::COLOR_BGR5652BGR);
  constant("COLOR_BGR5652RGB", cv::COLOR_BGR5652RGB);
  constant("COLOR_BGRA2BGR565", cv::COLOR_BGRA2BGR565);
  constant("COLOR_RGBA2BGR565", cv::COLOR_RGBA2BGR565);
  constant("COLOR_BGR5652BGRA", cv::COLOR_BGR5652BGRA);
  constant("COLOR_BGR5652RGBA", cv::COLOR_BGR5652RGBA);
  constant("COLOR_GRAY2BGR565", cv::COLOR_GRAY2BGR565);
  constant("COLOR_BGR5652GRAY", cv::COLOR_BGR5652GRAY);
  constant("COLOR_BGR2BGR555", cv::COLOR_BGR2BGR555);
  constant("COLOR_RGB2BGR555", cv::COLOR_RGB2BGR555);
  constant("COLOR_BGR5552BGR", cv::COLOR_BGR5552BGR);
  constant("COLOR_BGR5552RGB", cv::COLOR_BGR5552RGB);
  constant("COLOR_BGRA2BGR555", cv::COLOR_BGRA2BGR555);
  constant("COLOR_RGBA2BGR555", cv::COLOR_RGBA2BGR555);
  constant("COLOR_BGR5552BGRA", cv::COLOR_BGR5552BGRA);
  constant("COLOR_BGR5552RGBA", cv::COLOR_BGR5552RGBA);
  constant("COLOR_GRAY2BGR555", cv::COLOR_GRAY2BGR555);
  constant("COLOR_BGR5552GRAY", cv::COLOR_BGR5552GRAY);
  constant("COLOR_BGR2XYZ", cv::COLOR_BGR2XYZ);
  constant("COLOR_RGB2XYZ", cv::COLOR_RGB2XYZ);
  constant("COLOR_XYZ2BGR", cv::COLOR_XYZ2BGR);
  constant("COLOR_XYZ2RGB", cv::COLOR_XYZ2RGB);
  constant("COLOR_BGR2YCrCb", cv::COLOR_BGR2YCrCb);
  constant("COLOR_RGB2YCrCb", cv::COLOR_RGB2YCrCb);
  constant("COLOR_YCrCb2BGR", cv::COLOR_YCrCb2BGR);
  constant("COLOR_YCrCb2RGB", cv::COLOR_YCrCb2RGB);
  constant("COLOR_BGR2HSV", cv::COLOR_BGR2HSV);
  constant("COLOR_RGB2HSV", cv::COLOR_RGB2HSV);
  constant("COLOR_BGR2Lab", cv::COLOR_BGR2Lab);
  constant("COLOR_RGB2Lab", cv::COLOR_RGB2Lab);
  constant("COLOR_BGR2Luv", cv::COLOR_BGR2Luv);
  constant("COLOR_RGB2Luv", cv::COLOR_RGB2Luv);
  constant("COLOR_BGR2HLS", cv::COLOR_BGR2HLS);
  constant("COLOR_RGB2HLS", cv::COLOR_RGB2HLS);
  constant("COLOR_HSV2BGR", cv::COLOR_HSV2BGR);
  constant("COLOR_HSV2RGB", cv::COLOR_HSV2RGB);
  constant("COLOR_Lab2BGR", cv::COLOR_Lab2BGR);
  constant("COLOR_Lab2RGB", cv::COLOR_Lab2RGB);
  constant("COLOR_Luv2BGR", cv::COLOR_Luv2BGR);
  constant("COLOR_Luv2RGB", cv::COLOR_Luv2RGB);
  constant("COLOR_HLS2BGR", cv::COLOR_HLS2BGR);
  constant("COLOR_HLS2RGB", cv::COLOR_HLS2RGB);
  constant("COLOR_BGR2HSV_FULL", cv::COLOR_BGR2HSV_FULL);
  constant("COLOR_RGB2HSV_FULL", cv::COLOR_RGB2HSV_FULL);
  constant("COLOR_BGR2HLS_FULL", cv::COLOR_BGR2HLS_FULL);
  constant("COLOR_RGB2HLS_FULL", cv::COLOR_RGB2HLS_FULL);
  constant("COLOR_HSV2BGR_FULL", cv::COLOR_HSV2BGR_FULL);
  constant("COLOR_HSV2RGB_FULL", cv::COLOR_HSV2RGB_FULL);
  constant("COLOR_HLS2BGR_FULL", cv::COLOR_HLS2BGR_FULL);
  constant("COLOR_HLS2RGB_FULL", cv::COLOR_HLS2RGB_FULL);
  constant("COLOR_LBGR2Lab", cv::COLOR_LBGR2Lab);
  constant("COLOR_LRGB2Lab", cv::COLOR_LRGB2Lab);
  constant("COLOR_LBGR2Luv", cv::COLOR_LBGR2Luv);
  constant("COLOR_LRGB2Luv", cv::COLOR_LRGB2Luv);
  constant("COLOR_Lab2LBGR", cv::COLOR_Lab2LBGR);
  constant("COLOR_Lab2LRGB", cv::COLOR_Lab2LRGB);
  constant("COLOR_Luv2LBGR", cv::COLOR_Luv2LBGR);
  constant("COLOR_Luv2LRGB", cv::COLOR_Luv2LRGB);
  constant("COLOR_BGR2YUV", cv::COLOR_BGR2YUV);
  constant("COLOR_RGB2YUV", cv::COLOR_RGB2YUV);
  constant("COLOR_YUV2BGR", cv::COLOR_YUV2BGR);
  constant("COLOR_YUV2RGB", cv::COLOR_YUV2RGB);
  constant("COLOR_YUV2RGB_NV12", cv::COLOR_YUV2RGB_NV12);
  constant("COLOR_YUV2BGR_NV12", cv::COLOR_YUV2BGR_NV12);
  constant("COLOR_YUV2RGB_NV21", cv::COLOR_YUV2RGB_NV21);
  constant("COLOR_YUV2BGR_NV21", cv::COLOR_YUV2BGR_NV21);
  constant("COLOR_YUV420sp2RGB", cv::COLOR_YUV420sp2RGB);
  constant("COLOR_YUV420sp2BGR", cv::COLOR_YUV420sp2BGR);
  constant("COLOR_YUV2RGBA_NV12", cv::COLOR_YUV2RGBA_NV12);
  constant("COLOR_YUV2BGRA_NV12", cv::COLOR_YUV2BGRA_NV12);
  constant("COLOR_YUV2RGBA_NV21", cv::COLOR_YUV2RGBA_NV21);
  constant("COLOR_YUV2BGRA_NV21", cv::COLOR_YUV2BGRA_NV21);
  constant("COLOR_YUV420sp2RGBA", cv::COLOR_YUV420sp2RGBA);
  constant("COLOR_YUV420sp2BGRA", cv::COLOR_YUV420sp2BGRA);
  constant("COLOR_YUV2RGB_YV12", cv::COLOR_YUV2RGB_YV12);
  constant("COLOR_YUV2BGR_YV12", cv::COLOR_YUV2BGR_YV12);
  constant("COLOR_YUV2RGB_IYUV", cv::COLOR_YUV2RGB_IYUV);
  constant("COLOR_YUV2BGR_IYUV", cv::COLOR_YUV2BGR_IYUV);
  constant("COLOR_YUV2RGB_I420", cv::COLOR_YUV2RGB_I420);
  constant("COLOR_YUV2BGR_I420", cv::COLOR_YUV2BGR_I420);
  constant("COLOR_YUV420p2RGB", cv::COLOR_YUV420p2RGB);
  constant("COLOR_YUV420p2BGR", cv::COLOR_YUV420p2BGR);
  constant("COLOR_YUV2RGBA_YV12", cv::COLOR_YUV2RGBA_YV12);
  constant("COLOR_YUV2BGRA_YV12", cv::COLOR_YUV2BGRA_YV12);
  constant("COLOR_YUV2RGBA_IYUV", cv::COLOR_YUV2RGBA_IYUV);
  constant("COLOR_YUV2BGRA_IYUV", cv::COLOR_YUV2BGRA_IYUV);
  constant("COLOR_YUV2RGBA_I420", cv::COLOR_YUV2RGBA_I420);
  constant("COLOR_YUV2BGRA_I420", cv::COLOR_YUV2BGRA_I420);
  constant("COLOR_YUV420p2RGBA", cv::COLOR_YUV420p2RGBA);
  constant("COLOR_YUV420p2BGRA", cv::COLOR_YUV420p2BGRA);
  constant("COLOR_YUV2GRAY_420", cv::COLOR_YUV2GRAY_420);
  constant("COLOR_YUV2GRAY_NV21", cv::COLOR_YUV2GRAY_NV21);
  constant("COLOR_YUV2GRAY_NV12", cv::COLOR_YUV2GRAY_NV12);
  constant("COLOR_YUV2GRAY_YV12", cv::COLOR_YUV2GRAY_YV12);
  constant("COLOR_YUV2GRAY_IYUV", cv::COLOR_YUV2GRAY_IYUV);
  constant("COLOR_YUV2GRAY_I420", cv::COLOR_YUV2GRAY_I420);
  constant("COLOR_YUV420sp2GRAY", cv::COLOR_YUV420sp2GRAY);
  constant("COLOR_YUV420p2GRAY", cv::COLOR_YUV420p2GRAY);
  constant("COLOR_YUV2RGB_UYVY", cv::COLOR_YUV2RGB_UYVY);
  constant("COLOR_YUV2BGR_UYVY", cv::COLOR_YUV2BGR_UYVY);
  constant("COLOR_YUV2RGB_Y422", cv::COLOR_YUV2RGB_Y422);
  constant("COLOR_YUV2BGR_Y422", cv::COLOR_YUV2BGR_Y422);
  constant("COLOR_YUV2RGB_UYNV", cv::COLOR_YUV2RGB_UYNV);
  constant("COLOR_YUV2BGR_UYNV", cv::COLOR_YUV2BGR_UYNV);
  constant("COLOR_YUV2RGBA_UYVY", cv::COLOR_YUV2RGBA_UYVY);
  constant("COLOR_YUV2BGRA_UYVY", cv::COLOR_YUV2BGRA_UYVY);
  constant("COLOR_YUV2RGBA_Y422", cv::COLOR_YUV2RGBA_Y422);
  constant("COLOR_YUV2BGRA_Y422", cv::COLOR_YUV2BGRA_Y422);
  constant("COLOR_YUV2RGBA_UYNV", cv::COLOR_YUV2RGBA_UYNV);
  constant("COLOR_YUV2BGRA_UYNV", cv::COLOR_YUV2BGRA_UYNV);
  constant("COLOR_YUV2RGB_YUY2", cv::COLOR_YUV2RGB_YUY2);
  constant("COLOR_YUV2BGR_YUY2", cv::COLOR_YUV2BGR_YUY2);
  constant("COLOR_YUV2RGB_YVYU", cv::COLOR_YUV2RGB_YVYU);
  constant("COLOR_YUV2BGR_YVYU", cv::COLOR_YUV2BGR_YVYU);
  constant("COLOR_YUV2RGB_YUYV", cv::COLOR_YUV2RGB_YUYV);
  constant("COLOR_YUV2BGR_YUYV", cv::COLOR_YUV2BGR_YUYV);
  constant("COLOR_YUV2RGB_YUNV", cv::COLOR_YUV2RGB_YUNV);
  constant("COLOR_YUV2BGR_YUNV", cv::COLOR_YUV2BGR_YUNV);
  constant("COLOR_YUV2RGBA_YUY2", cv::COLOR_YUV2RGBA_YUY2);
  constant("COLOR_YUV2BGRA_YUY2", cv::COLOR_YUV2BGRA_YUY2);
  constant("COLOR_YUV2RGBA_YVYU", cv::COLOR_YUV2RGBA_YVYU);
  constant("COLOR_YUV2BGRA_YVYU", cv::COLOR_YUV2BGRA_YVYU);
  constant("COLOR_YUV2RGBA_YUYV", cv::COLOR_YUV2RGBA_YUYV);
  constant("COLOR_YUV2BGRA_YUYV", cv::COLOR_YUV2BGRA_YUYV);
  constant("COLOR_YUV2RGBA_YUNV", cv::COLOR_YUV2RGBA_YUNV);
  constant("COLOR_YUV2BGRA_YUNV", cv::COLOR_YUV2BGRA_YUNV);
  constant("COLOR_YUV2GRAY_UYVY", cv::COLOR_YUV2GRAY_UYVY);
  constant("COLOR_YUV2GRAY_YUY2", cv::COLOR_YUV2GRAY_YUY2);
  constant("COLOR_YUV2GRAY_Y422", cv::COLOR_YUV2GRAY_Y422);
  constant("COLOR_YUV2GRAY_UYNV", cv::COLOR_YUV2GRAY_UYNV);
  constant("COLOR_YUV2GRAY_YVYU", cv::COLOR_YUV2GRAY_YVYU);
  constant("COLOR_YUV2GRAY_YUYV", cv::COLOR_YUV2GRAY_YUYV);
  constant("COLOR_YUV2GRAY_YUNV", cv::COLOR_YUV2GRAY_YUNV);
  constant("COLOR_RGBA2mRGBA", cv::COLOR_RGBA2mRGBA);
  constant("COLOR_mRGBA2RGBA", cv::COLOR_mRGBA2RGBA);
  constant("COLOR_RGB2YUV_I420", cv::COLOR_RGB2YUV_I420);
  constant("COLOR_BGR2YUV_I420", cv::COLOR_BGR2YUV_I420);
  constant("COLOR_RGB2YUV_IYUV", cv::COLOR_RGB2YUV_IYUV);
  constant("COLOR_BGR2YUV_IYUV", cv::COLOR_BGR2YUV_IYUV);
  constant("COLOR_RGBA2YUV_I420", cv::COLOR_RGBA2YUV_I420);
  constant("COLOR_BGRA2YUV_I420", cv::COLOR_BGRA2YUV_I420);
  constant("COLOR_RGBA2YUV_IYUV", cv::COLOR_RGBA2YUV_IYUV);
  constant("COLOR_BGRA2YUV_IYUV", cv::COLOR_BGRA2YUV_IYUV);
  constant("COLOR_RGB2YUV_YV12", cv::COLOR_RGB2YUV_YV12);
  constant("COLOR_BGR2YUV_YV12", cv::COLOR_BGR2YUV_YV12);
  constant("COLOR_RGBA2YUV_YV12", cv::COLOR_RGBA2YUV_YV12);
  constant("COLOR_BGRA2YUV_YV12", cv::COLOR_BGRA2YUV_YV12);
  constant("COLOR_BayerBG2BGR", cv::COLOR_BayerBG2BGR);
  constant("COLOR_BayerGB2BGR", cv::COLOR_BayerGB2BGR);
  constant("COLOR_BayerRG2BGR", cv::COLOR_BayerRG2BGR);
  constant("COLOR_BayerGR2BGR", cv::COLOR_BayerGR2BGR);
  constant("COLOR_BayerBG2RGB", cv::COLOR_BayerBG2RGB);
  constant("COLOR_BayerGB2RGB", cv::COLOR_BayerGB2RGB);
  constant("COLOR_BayerRG2RGB", cv::COLOR_BayerRG2RGB);
  constant("COLOR_BayerGR2RGB", cv::COLOR_BayerGR2RGB);
  constant("COLOR_BayerBG2GRAY", cv::COLOR_BayerBG2GRAY);
  constant("COLOR_BayerGB2GRAY", cv::COLOR_BayerGB2GRAY);
  constant("COLOR_BayerRG2GRAY", cv::COLOR_BayerRG2GRAY);
  constant("COLOR_BayerGR2GRAY", cv::COLOR_BayerGR2GRAY);
  constant("COLOR_BayerBG2BGR_VNG", cv::COLOR_BayerBG2BGR_VNG);
  constant("COLOR_BayerGB2BGR_VNG", cv::COLOR_BayerGB2BGR_VNG);
  constant("COLOR_BayerRG2BGR_VNG", cv::COLOR_BayerRG2BGR_VNG);
  constant("COLOR_BayerGR2BGR_VNG", cv::COLOR_BayerGR2BGR_VNG);
  constant("COLOR_BayerBG2RGB_VNG", cv::COLOR_BayerBG2RGB_VNG);
  constant("COLOR_BayerGB2RGB_VNG", cv::COLOR_BayerGB2RGB_VNG);
  constant("COLOR_BayerRG2RGB_VNG", cv::COLOR_BayerRG2RGB_VNG);
  constant("COLOR_BayerGR2RGB_VNG", cv::COLOR_BayerGR2RGB_VNG);
  constant("COLOR_BayerBG2BGR_EA", cv::COLOR_BayerBG2BGR_EA);
  constant("COLOR_BayerGB2BGR_EA", cv::COLOR_BayerGB2BGR_EA);
  constant("COLOR_BayerRG2BGR_EA", cv::COLOR_BayerRG2BGR_EA);
  constant("COLOR_BayerGR2BGR_EA", cv::COLOR_BayerGR2BGR_EA);
  constant("COLOR_BayerBG2RGB_EA", cv::COLOR_BayerBG2RGB_EA);
  constant("COLOR_BayerGB2RGB_EA", cv::COLOR_BayerGB2RGB_EA);
  constant("COLOR_BayerRG2RGB_EA", cv::COLOR_BayerRG2RGB_EA);
  constant("COLOR_BayerGR2RGB_EA", cv::COLOR_BayerGR2RGB_EA);
  constant("COLOR_BayerBG2BGRA", cv::COLOR_BayerBG2BGRA);
  constant("COLOR_BayerGB2BGRA", cv::COLOR_BayerGB2BGRA);
  constant("COLOR_BayerRG2BGRA", cv::COLOR_BayerRG2BGRA);
  constant("COLOR_BayerGR2BGRA", cv::COLOR_BayerGR2BGRA);
  constant("COLOR_BayerBG2RGBA", cv::COLOR_BayerBG2RGBA);
  constant("COLOR_BayerGB2RGBA", cv::COLOR_BayerGB2RGBA);
  constant("COLOR_BayerRG2RGBA", cv::COLOR_BayerRG2RGBA);
  constant("COLOR_BayerGR2RGBA", cv::COLOR_BayerGR2RGBA);
  constant("COLOR_COLORCVT_MAX", cv::COLOR_COLORCVT_MAX);
  constant("INTERSECT_NONE", cv::INTERSECT_NONE);
  constant("INTERSECT_PARTIAL", cv::INTERSECT_PARTIAL);
  constant("INTERSECT_FULL", cv::INTERSECT_FULL);
  constant("FILLED", cv::FILLED);
  constant("LINE_4", cv::LINE_4);
  constant("LINE_8", cv::LINE_8);
  constant("LINE_AA", cv::LINE_AA);
  constant("FONT_HERSHEY_SIMPLEX", cv::FONT_HERSHEY_SIMPLEX);
  constant("FONT_HERSHEY_PLAIN", cv::FONT_HERSHEY_PLAIN);
  constant("FONT_HERSHEY_DUPLEX", cv::FONT_HERSHEY_DUPLEX);
  constant("FONT_HERSHEY_COMPLEX", cv::FONT_HERSHEY_COMPLEX);
  constant("FONT_HERSHEY_TRIPLEX", cv::FONT_HERSHEY_TRIPLEX);
  constant("FONT_HERSHEY_COMPLEX_SMALL", cv::FONT_HERSHEY_COMPLEX_SMALL);
  constant("FONT_HERSHEY_SCRIPT_SIMPLEX", cv::FONT_HERSHEY_SCRIPT_SIMPLEX);
  constant("FONT_HERSHEY_SCRIPT_COMPLEX", cv::FONT_HERSHEY_SCRIPT_COMPLEX);
  constant("FONT_ITALIC", cv::FONT_ITALIC);
  constant("MARKER_CROSS", cv::MARKER_CROSS);
  constant("MARKER_TILTED_CROSS", cv::MARKER_TILTED_CROSS);
  constant("MARKER_STAR", cv::MARKER_STAR);
  constant("MARKER_DIAMOND", cv::MARKER_DIAMOND);
  constant("MARKER_SQUARE", cv::MARKER_SQUARE);
  constant("MARKER_TRIANGLE_UP", cv::MARKER_TRIANGLE_UP);
  constant("MARKER_TRIANGLE_DOWN", cv::MARKER_TRIANGLE_DOWN);
  constant("TM_SQDIFF", cv::TM_SQDIFF);
  constant("TM_SQDIFF_NORMED", cv::TM_SQDIFF_NORMED);
  constant("TM_CCORR", cv::TM_CCORR);
  constant("TM_CCORR_NORMED", cv::TM_CCORR_NORMED);
  constant("TM_CCOEFF", cv::TM_CCOEFF);
  constant("TM_CCOEFF_NORMED", cv::TM_CCOEFF_NORMED);
  constant("COLORMAP_AUTUMN", cv::COLORMAP_AUTUMN);
  constant("COLORMAP_BONE", cv::COLORMAP_BONE);
  constant("COLORMAP_JET", cv::COLORMAP_JET);
  constant("COLORMAP_WINTER", cv::COLORMAP_WINTER);
  constant("COLORMAP_RAINBOW", cv::COLORMAP_RAINBOW);
  constant("COLORMAP_OCEAN", cv::COLORMAP_OCEAN);
  constant("COLORMAP_SUMMER", cv::COLORMAP_SUMMER);
  constant("COLORMAP_SPRING", cv::COLORMAP_SPRING);
  constant("COLORMAP_COOL", cv::COLORMAP_COOL);
  constant("COLORMAP_HSV", cv::COLORMAP_HSV);
  constant("COLORMAP_PINK", cv::COLORMAP_PINK);
  constant("COLORMAP_HOT", cv::COLORMAP_HOT);
  constant("COLORMAP_PARULA", cv::COLORMAP_PARULA);
  constant("COLORMAP_MAGMA", cv::COLORMAP_MAGMA);
  constant("COLORMAP_INFERNO", cv::COLORMAP_INFERNO);
  constant("COLORMAP_PLASMA", cv::COLORMAP_PLASMA);
  constant("COLORMAP_VIRIDIS", cv::COLORMAP_VIRIDIS);
  constant("COLORMAP_CIVIDIS", cv::COLORMAP_CIVIDIS);
  constant("COLORMAP_TWILIGHT", cv::COLORMAP_TWILIGHT);
  constant("COLORMAP_TWILIGHT_SHIFTED", cv::COLORMAP_TWILIGHT_SHIFTED);
  constant("COLORMAP_TURBO", cv::COLORMAP_TURBO);
  constant("COLORMAP_DEEPGREEN", cv::COLORMAP_DEEPGREEN);
  constant("CASCADE_DO_CANNY_PRUNING", cv::CASCADE_DO_CANNY_PRUNING);
  constant("CASCADE_SCALE_IMAGE", cv::CASCADE_SCALE_IMAGE);
  constant("CASCADE_FIND_BIGGEST_OBJECT", cv::CASCADE_FIND_BIGGEST_OBJECT);
  constant("CASCADE_DO_ROUGH_SEARCH", cv::CASCADE_DO_ROUGH_SEARCH);
  constant("INPAINT_NS", cv::INPAINT_NS);
  constant("INPAINT_TELEA", cv::INPAINT_TELEA);
  constant("LDR_SIZE", cv::LDR_SIZE);
  constant("NORMAL_CLONE", cv::NORMAL_CLONE);
  constant("MIXED_CLONE", cv::MIXED_CLONE);
  constant("MONOCHROME_TRANSFER", cv::MONOCHROME_TRANSFER);
  constant("RECURS_FILTER", cv::RECURS_FILTER);
  constant("NORMCONV_FILTER", cv::NORMCONV_FILTER);
  constant("OPTFLOW_USE_INITIAL_FLOW", cv::OPTFLOW_USE_INITIAL_FLOW);
  constant("OPTFLOW_LK_GET_MIN_EIGENVALS", cv::OPTFLOW_LK_GET_MIN_EIGENVALS);
  constant("OPTFLOW_FARNEBACK_GAUSSIAN", cv::OPTFLOW_FARNEBACK_GAUSSIAN);
  constant("MOTION_TRANSLATION", cv::MOTION_TRANSLATION);
  constant("MOTION_EUCLIDEAN", cv::MOTION_EUCLIDEAN);
  constant("MOTION_AFFINE", cv::MOTION_AFFINE);
  constant("MOTION_HOMOGRAPHY", cv::MOTION_HOMOGRAPHY);
#include "manual_bind.inc" 
}//end of KAGUYA_BINDINGS(cv) 
