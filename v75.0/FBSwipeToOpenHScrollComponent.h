/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBFeedToolbox, FBMemStoryAttachment, FBMultiShareBoltAnimationCardComponent, FBAnalyticsInfo, NSArray;

@interface FBSwipeToOpenHScrollComponent : CKCompositeComponent {

	FBFeedToolbox* _toolbox;
	FBMemStoryAttachment* _attachment;
	FBMultiShareBoltAnimationCardComponent* _boltComponent;
	FBMemStoryAttachment* _subattachmentForSwipeToOpen;
	FBAnalyticsInfo* _analyticsInfo;
	unsigned long long _numberOfElements;
	NSArray* _trackingCodes;
	CKTypedComponentAction<> _tapAction;

}

@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                             //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBMemStoryAttachment * attachment;                                   //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) FBMultiShareBoltAnimationCardComponent * boltComponent;              //@synthesize boltComponent=_boltComponent - In the implementation block
@property (nonatomic,readonly) FBMemStoryAttachment * subattachmentForSwipeToOpen;                  //@synthesize subattachmentForSwipeToOpen=_subattachmentForSwipeToOpen - In the implementation block
@property (nonatomic,readonly) FBAnalyticsInfo * analyticsInfo;                                     //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> tapAction;                                  //@synthesize tapAction=_tapAction - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfElements;                                 //@synthesize numberOfElements=_numberOfElements - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                                        //@synthesize trackingCodes=_trackingCodes - In the implementation block
+(id)newWithAttachment:(id)arg1 toolbox:(id)arg2 becameFullyVisibleAction:(CKTypedComponentAction<>)arg3 tapAttachmentAction:(CKTypedComponentAction<>)arg4 scrollOptions:(FBFeedHScrollOptions)arg5 renderingOptions:(const FBStoryAttachmentRenderingComponentOptions*)arg6 ;
-(CKTypedComponentAction<>)tapAction;
-(FBFeedToolbox *)toolbox;
-(FBAnalyticsInfo *)analyticsInfo;
-(NSArray *)trackingCodes;
-(void)tapHandler:(id)arg1 info:(id)arg2 ;
-(FBMultiShareBoltAnimationCardComponent *)boltComponent;
-(FBMemStoryAttachment *)subattachmentForSwipeToOpen;
-(FBMemStoryAttachment *)attachment;
-(unsigned long long)numberOfElements;
@end

