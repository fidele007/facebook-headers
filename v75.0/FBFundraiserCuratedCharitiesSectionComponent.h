/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCompositeSectionComponent.h>

@class FBFundraiserHidableComponentsListenerAnnouncer;

@interface FBFundraiserCuratedCharitiesSectionComponent : FBCompositeSectionComponent {

	FBFundraiserHidableComponentsListenerAnnouncer* _hidableComponentAnnouncer;

}

@property (nonatomic,readonly) FBFundraiserHidableComponentsListenerAnnouncer * hidableComponentAnnouncer;              //@synthesize hidableComponentAnnouncer=_hidableComponentAnnouncer - In the implementation block
+(id)newWithTriggerID:(id)arg1 hidableComponentAnnouncer:(id)arg2 tapSeeMoreAction:(CKTypedComponentAction<>)arg3 showNFGText:(BOOL)arg4 toolbox:(id)arg5 ;
+(id)initialState;
-(FBFundraiserHidableComponentsListenerAnnouncer *)hidableComponentAnnouncer;
@end

