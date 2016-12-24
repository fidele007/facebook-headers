/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBSponsorableFBAppFeedAdvertisable;
@class FBAppFeedComponentToolbox;

@interface FBFeaturedStoryComponent : CKCompositeComponent {

	id<FBSponsorable><FBAppFeedAdvertisable> _sponsorable;
	FBAppFeedComponentToolbox* _toolbox;

}

@property (nonatomic,readonly) id<FBSponsorable><FBAppFeedAdvertisable> sponsorable;              //@synthesize sponsorable=_sponsorable - In the implementation block
@property (nonatomic,readonly) FBAppFeedComponentToolbox * toolbox;                               //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithStory:(id)arg1 parentUnit:(id)arg2 toolbox:(id)arg3 ;
-(FBAppFeedComponentToolbox *)toolbox;
-(id<FBSponsorable><FBAppFeedAdvertisable>)sponsorable;
-(void)openAppStore;
@end

