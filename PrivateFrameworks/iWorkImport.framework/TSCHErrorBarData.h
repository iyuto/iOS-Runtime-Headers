/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHChartSeries;

@interface TSCHErrorBarData : NSObject <TSCHUnretainedParent> {
    BOOL mErrorBarsInvalid;
    double mMaxValue;
    int mMaxValueGroupIndex;
    double mMaxValueScatterX;
    double mMinValue;
    int mMinValueGroupIndex;
    double mMinValueScatterX;
    TSCHChartSeries *mSeries;
    double mStandardDeviation;
    double mStandardDeviationMean;
    double mStandardDeviationMeanScatterX;
    double mStandardDeviationScatterX;
    double mStandardError;
    double mStandardErrorScatterX;
    BOOL mSupportsXAxisBars;
}

@property(readonly) int maxValueGroupIndex;
@property(readonly) int minValueGroupIndex;

+ (BOOL)hasErrorBarsForSeries:(id)arg1;
+ (int)p_errorBarSettingForSeries:(id)arg1 useXAxis:(BOOL)arg2 axisID:(id)arg3;

- (void)clearParent;
- (BOOL)hasErrorDataForAxisID:(id)arg1 valueIndex:(unsigned int)arg2 chartVertical:(BOOL)arg3 barVertical:(BOOL*)arg4 unitValue:(struct CGPoint { float x1; float x2; }*)arg5 unitPositive:(struct CGPoint { float x1; float x2; }*)arg6 unitNegative:(struct CGPoint { float x1; float x2; }*)arg7;
- (id)initWithSeries:(id)arg1;
- (void)invalidateData;
- (id)lineEndForAxisID:(id)arg1;
- (double)maxValueForAxisID:(id)arg1;
- (int)maxValueGroupIndex;
- (double)minValueForAxisID:(id)arg1;
- (int)minValueGroupIndex;
- (float)opacityForAxisID:(id)arg1;
- (void)p_clearData;
- (double*)p_createArrayOfSeriesOffsetsForAxisID:(id)arg1 count:(unsigned int)arg2;
- (double*)p_createArrayOfSeriesValuesForAxisID:(id)arg1 count:(unsigned int)arg2;
- (double)p_customErrorForAxisID:(id)arg1 groupIndex:(unsigned int)arg2 positive:(BOOL)arg3;
- (BOOL)p_errorBarIsVerticalForAxisID:(id)arg1 chartVertical:(BOOL)arg2;
- (int)p_errorBarSettingForAxisID:(id)arg1 value:(double)arg2 barType:(int)arg3;
- (int)p_errorBarTypeForAxisID:(id)arg1;
- (double)p_errorForValue:(double*)arg1 onAxisID:(id)arg2 groupIndex:(unsigned int)arg3 positive:(BOOL)arg4;
- (double)p_fixedErrorForAxisID:(id)arg1;
- (struct CGPoint { float x1; float x2; })p_getValuePointForGroup:(unsigned int)arg1 inputAxisID:(id)arg2 outputAxisID:(id)arg3 barVertical:(BOOL)arg4;
- (double)p_negativeErrorForValue:(double*)arg1 onAxisID:(id)arg2 groupIndex:(unsigned int)arg3;
- (double)p_percentageErrorForAxisID:(id)arg1;
- (double)p_positiveErrorForValue:(double*)arg1 onAxisID:(id)arg2 groupIndex:(unsigned int)arg3;
- (double)p_stdDevErrorForAxisID:(id)arg1;
- (double)p_stdDevFactorForAxisID:(id)arg1;
- (double)p_stdDevMeanForAxisID:(id)arg1;
- (double)p_stdErrorErrorForAxisID:(id)arg1;
- (unsigned int)p_stripBadValuesInArray:(double*)arg1 numValues:(unsigned int)arg2;
- (void)p_updateDataForAxisID:(id)arg1;
- (void)p_updateMinMaxForAxisID:(id)arg1 forValues:(double*)arg2 withOffsets:(double*)arg3 numValues:(unsigned int)arg4;
- (void)p_updateMinMaxForStackedPercentageAxis:(id)arg1 forValues:(double*)arg2 withOffsets:(double*)arg3 numValues:(unsigned int)arg4;
- (void)p_updateStdDeviationForAxisID:(id)arg1 forValues:(double*)arg2 withOffsets:(double*)arg3 numValues:(unsigned int)arg4;
- (void)p_updateStdErrorForAxisID:(id)arg1 forValues:(double*)arg2 withOffsets:(double*)arg3 numValues:(unsigned int)arg4;
- (id)shadowForAxisID:(id)arg1;
- (BOOL)showErrorBarsForAxisID:(id)arg1;
- (id)strokeForAxisID:(id)arg1;
- (void)updateIfNeeded;

@end