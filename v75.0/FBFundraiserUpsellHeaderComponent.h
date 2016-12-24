/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBStoryHeaderRenderingComponent.h>

@class FBFeedToolbox, FBMemFundraiserUpsellStoryActionLink;

@interface FBFundraiserUpsellHeaderComponent : CKCompositeComponent <FBStoryHeaderRenderingComponent> {

	FBFeedToolbox* _toolbox;
	FBMemFundraiserUpsellStoryActionLink* _actionLink;

}

@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                        //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBMemFundraiserUpsellStoryActionLink * actionLink;              //@synthesize actionLink=_actionLink - In the implementation block
+(id)newWithHeader:(id)arg1 secondaryActionComponent:(id)arg2 insets:(UIEdgeInsets)arg3 toolbox:(id)arg4 ;
+(id)supportedStyles;
+(BOOL)rendersBottomBorder;
+(BOOL)rendersSecondaryActionComponent;
+(id)initialState;
-(FBFeedToolbox *)toolbox;
-(FBMemFundraiserUpsellStoryActionLink *)actionLink;
@end

