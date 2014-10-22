/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface OITSUPerformanceTest : NSObject {
    struct TSUOpstat_s { 
        boolrunning; 
        unsigned long long count; 
        struct timeval { 
            long long tv_sec; 
            int tv_usec; 
        } min_time; 
        struct timeval { 
            long long tv_sec; 
            int tv_usec; 
        } max_time; 
        struct timeval { 
            long long tv_sec; 
            int tv_usec; 
        } total_time; 
        struct timeval { 
            long long tv_sec; 
            int tv_usec; 
        } last_time; 
    boolmPassed;
    boolmQuiet;
    double mGoalTime;
    NSString *mName;
    double mPrecision;
    SEL mSelector;
    id mTarget;
    } mTiming;
}

@property double goalTime;
@property(readonly) NSString * name;
@property(readonly) bool passed;
@property double precision;
@property bool quiet;
@property struct TSUOpstat_s { boolx1; unsigned long long x2; struct timeval { long long x_3_1_1; int x_3_1_2; } x3; struct timeval { long long x_4_1_1; int x_4_1_2; } x4; struct timeval { long long x_5_1_1; int x_5_1_2; } x5; struct timeval { long long x_6_1_1; int x_6_1_2; } x6; } timing;

+ (id)csvHeader;

- (id)csvString;
- (void)dealloc;
- (double)goalTime;
- (id)initWithName:(id)arg1 selector:(SEL)arg2 target:(id)arg3 goalTime:(double)arg4;
- (id)name;
- (bool)passed;
- (double)precision;
- (bool)quiet;
- (void)report;
- (void)run;
- (void)setGoalTime:(double)arg1;
- (void)setPrecision:(double)arg1;
- (void)setQuiet:(bool)arg1;
- (void)setTiming:(struct TSUOpstat_s { boolx1; unsigned long long x2; struct timeval { long long x_3_1_1; int x_3_1_2; } x3; struct timeval { long long x_4_1_1; int x_4_1_2; } x4; struct timeval { long long x_5_1_1; int x_5_1_2; } x5; struct timeval { long long x_6_1_1; int x_6_1_2; } x6; })arg1;
- (struct TSUOpstat_s { boolx1; unsigned long long x2; struct timeval { long long x_3_1_1; int x_3_1_2; } x3; struct timeval { long long x_4_1_1; int x_4_1_2; } x4; struct timeval { long long x_5_1_1; int x_5_1_2; } x5; struct timeval { long long x_6_1_1; int x_6_1_2; } x6; })timing;

@end
