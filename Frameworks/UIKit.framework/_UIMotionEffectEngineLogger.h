/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIMotionEffectEngineLogger : NSObject {
    double _lastUpdateTimeStamp;
    int _motionLevelSamples;
    int _sampleCount;
    int _updateFreqency;
}

- (void)_dumpToAggregated;
- (id)initWithFastUpdateInterval:(double)arg1 slowUpdateInterval:(double)arg2;
- (void)recordMotionMagnitude:(float)arg1 atTimestamp:(double)arg2;

@end
