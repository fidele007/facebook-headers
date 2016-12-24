/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBTarotPublisherEntity, FBTarotToolbox;

@interface FBTarotManageScreenPublisherRowComponent : CKCompositeComponent {

	FBTarotPublisherEntity* _entity;
	FBTarotToolbox* _toolbox;

}

@property (nonatomic,readonly) FBTarotPublisherEntity * entity;              //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) FBTarotToolbox * toolbox;                     //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithEntity:(id)arg1 toolbox:(id)arg2 ;
-(FBTarotToolbox *)toolbox;
-(void)_didTapOnSubscriptionToggle;
-(FBTarotPublisherEntity *)entity;
@end

