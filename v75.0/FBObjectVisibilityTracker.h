/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBObjectVisibilityTrackerDelegate;
#import <Facebook/Facebook-Structs.h>
@class NSMapTable, NSMutableDictionary;

@interface FBObjectVisibilityTracker : NSObject {

	NSMapTable* _trackedObjectsToObjectTrackingInfos;
	SCD_Struct_FB1049 _delegateRespondsTo;
	NSMutableDictionary* _objectsToVisibilityKeysThatShouldNotBeTrackedAgain;
	deque<NSValue *, std::__1::allocator<NSValue *> >* _objectsThatShouldNotBeTrackedAgainInOrder;
	id<FBObjectVisibilityTrackerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBObjectVisibilityTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startTrackingObject:(id)arg1 ;
-(void)updateVisibilityStatesForAllTrackedObjects;
-(void)stopTrackingObject:(id)arg1 ;
-(id)_newTrackingInfoForObject:(id)arg1 withPreviousTrackingInfo:(id)arg2 forVisibilityKey:(id)arg3 ;
-(unsigned long long)_maximumSizeOfObjectsThatShouldNotBeTrackedAgain;
-(void)setDelegate:(id<FBObjectVisibilityTrackerDelegate>)arg1 ;
-(id)init;
-(id<FBObjectVisibilityTrackerDelegate>)delegate;
@end

