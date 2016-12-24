/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBMemFeedStory, FBFeedToolbox, NSArray;

@interface FBVideoHomeUFIComponent : CKCompositeComponent {

	FBMemFeedStory* _story;
	FBFeedToolbox* _feedToolbox;
	NSArray* _trackingCodes;
	NSArray* _trackingNodes;

}

@property (nonatomic,readonly) FBMemFeedStory * story;                    //@synthesize story=_story - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * feedToolbox;               //@synthesize feedToolbox=_feedToolbox - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;              //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingNodes;              //@synthesize trackingNodes=_trackingNodes - In the implementation block
+(id)newWithStory:(id)arg1 feedToolbox:(id)arg2 ;
-(FBFeedToolbox *)feedToolbox;
-(FBMemFeedStory *)story;
-(NSArray *)trackingCodes;
-(NSArray *)trackingNodes;
@end
