/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBFeedToolbox, FBMemTopicCustomizationStory;

@interface FBTopicCustomizationComponent : CKCompositeComponent {

	FBFeedToolbox* _toolbox;
	FBMemTopicCustomizationStory* _model;

}

@property (nonatomic,readonly) FBFeedToolbox * toolbox;                           //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBMemTopicCustomizationStory * model;              //@synthesize model=_model - In the implementation block
+(id)newWithUnit:(id)arg1 toolbox:(id)arg2 ;
-(FBFeedToolbox *)toolbox;
-(CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1 ;
-(FBMemTopicCustomizationStory *)model;
@end
