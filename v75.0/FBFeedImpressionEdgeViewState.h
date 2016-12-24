/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFeedEdgeProtocol;
#import <Facebook/Facebook-Structs.h>
@class NSString, FBMemModelObject;

@interface FBFeedImpressionEdgeViewState : NSObject {

	NSString* _logicalUniqueID;
	FBMemModelObject*<FBFeedEdgeProtocol> _edge;
	CGRect _frame;

}

@property (nonatomic,readonly) FBMemModelObject*<FBFeedEdgeProtocol> edge;              //@synthesize edge=_edge - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                            //@synthesize frame=_frame - In the implementation block
-(id)initWithEdge:(id)arg1 frame:(CGRect)arg2 ;
-(CGRect)frame;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(FBMemModelObject*<FBFeedEdgeProtocol>)edge;
@end

