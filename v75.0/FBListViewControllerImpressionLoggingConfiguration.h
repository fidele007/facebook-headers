/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBFeedStoryPositionTracker;

@interface FBListViewControllerImpressionLoggingConfiguration : NSObject {

	unsigned long long _layoutIdiom;
	Class _expectedEdgeClass;
	FBFeedStoryPositionTracker* _positionTracker;

}

@property (nonatomic,readonly) unsigned long long layoutIdiom;                            //@synthesize layoutIdiom=_layoutIdiom - In the implementation block
@property (nonatomic,readonly) Class expectedEdgeClass;                                   //@synthesize expectedEdgeClass=_expectedEdgeClass - In the implementation block
@property (nonatomic,readonly) FBFeedStoryPositionTracker * positionTracker;              //@synthesize positionTracker=_positionTracker - In the implementation block
-(unsigned long long)layoutIdiom;
-(id)initWithLayoutIdiom:(unsigned long long)arg1 expectedEdgeClass:(Class)arg2 positionTracker:(id)arg3 ;
-(FBFeedStoryPositionTracker *)positionTracker;
-(Class)expectedEdgeClass;
@end

