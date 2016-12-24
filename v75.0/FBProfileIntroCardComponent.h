/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBProfileIntroCardComponentToolbox;
@class FBProfileModelIntroCardItem, FBProfileSingleEditStatusListenerAnnouncer;

@interface FBProfileIntroCardComponent : CKCompositeComponent {

	id<FBProfileIntroCardComponentToolbox> _toolbox;
	FBProfileModelIntroCardItem* _introCardItem;
	FBProfileSingleEditStatusListenerAnnouncer* _singleEditStatusAnnouncer;

}

@property (nonatomic,readonly) FBProfileSingleEditStatusListenerAnnouncer * singleEditStatusAnnouncer;              //@synthesize singleEditStatusAnnouncer=_singleEditStatusAnnouncer - In the implementation block
+(id)newWithModel:(id)arg1 toolbox:(id)arg2 ;
+(id)initialState;
-(FBProfileSingleEditStatusListenerAnnouncer *)singleEditStatusAnnouncer;
-(void)didTapSingleEntryEditButton:(id)arg1 ;
-(void)didTapUpdateInfoFooterButton;
@end

