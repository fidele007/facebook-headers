/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComponentWorkingRangeSnapshot.h>

@class NSArray;

@interface FBMutableComponentWorkingRangeSnapshot : FBComponentWorkingRangeSnapshot {

	NSArray* _itemViewStates;
	double _timestamp;
	/*^block*/id _completionBlock;
	CGRect _visibleBounds;

}

@property (assign,nonatomic) CGRect visibleBounds;                //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (nonatomic,copy) NSArray * itemViewStates;              //@synthesize itemViewStates=_itemViewStates - In the implementation block
@property (assign,nonatomic) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) id completionBlock;                    //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)setItemViewStates:(NSArray *)arg1 ;
-(NSArray *)itemViewStates;
-(double)timestamp;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)visibleBounds;
-(void)setVisibleBounds:(CGRect)arg1 ;
@end
