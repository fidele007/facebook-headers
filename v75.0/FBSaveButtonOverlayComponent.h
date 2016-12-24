/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBMemFeedStory, CKComponent, FBFeedToolbox, FBAnalyticsInfo;

@interface FBSaveButtonOverlayComponent : CKCompositeComponent {

	FBMemFeedStory* _story;
	CKComponent* _nuxTargetComponent;
	FBFeedToolbox* _toolbox;
	FBAnalyticsInfo* _analyticsInfo;

}

@property (nonatomic,readonly) FBMemFeedStory * story;                        //@synthesize story=_story - In the implementation block
@property (nonatomic,readonly) CKComponent * nuxTargetComponent;              //@synthesize nuxTargetComponent=_nuxTargetComponent - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                       //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBAnalyticsInfo * analyticsInfo;               //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
+(id)newWithComponent:(id)arg1 story:(id)arg2 saveActionLink:(const FBSaveButtonOverlayComponentGraphQL*)arg3 toolbox:(id)arg4 ;
-(FBFeedToolbox *)toolbox;
-(FBMemFeedStory *)story;
-(FBAnalyticsInfo *)analyticsInfo;
-(CKComponent *)nuxTargetComponent;
@end

