/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBHScrollComponent;

@interface FBSearchResultsTabModuleTabBarComponent : CKCompositeComponent {

	FBHScrollComponent* _hScrollComponent;
	CKTypedComponentAction<> _action;

}

@property (nonatomic,readonly) FBHScrollComponent * hScrollComponent;              //@synthesize hScrollComponent=_hScrollComponent - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> action;                    //@synthesize action=_action - In the implementation block
+(id)newWithTabTitles:(id)arg1 action:(CKTypedComponentAction<>)arg2 flipTabHighlightColor:(BOOL)arg3 ;
-(FBHScrollComponent *)hScrollComponent;
-(CKTypedComponentAction<>)action;
@end

