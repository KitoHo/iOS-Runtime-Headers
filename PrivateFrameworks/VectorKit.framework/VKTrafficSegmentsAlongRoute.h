/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficSegmentsAlongRoute : NSObject {
    struct vector<TrafficSegment, std::__1::allocator<TrafficSegment> > { 
        struct TrafficSegment {} *__begin_; 
        struct TrafficSegment {} *__end_; 
        struct __compressed_pair<TrafficSegment *, std::__1::allocator<TrafficSegment> > { 
            struct TrafficSegment {} *__first_; 
        } __end_cap_; 
    } _segments;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addSegmentAt:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 forColor:(BOOL)arg2;
- (void)reset;
- (const struct TrafficSegment { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; BOOL x2; }*)segmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)segmentCount;
- (BOOL)segmentSpeedAtIndex:(unsigned long long)arg1;

@end
