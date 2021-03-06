/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>

@class UITraitCollection, CKComponent, FBUFISeenByCountComponent, FBUFICountComponent, FBUFIInlineVoiceSwitcherComponent;

@interface FBUFICountsComponent : CKComponent {

	FBUFICountsComponentOptions _options;
	UITraitCollection* _traitCollection;
	CKComponent* _backgroundTapComponent;
	FBUFISeenByCountComponent* _seenByComponent;
	FBUFICountComponent* _commentCountComponent;
	FBUFICountComponent* _shareCountComponent;
	FBUFICountComponent* _fallbackComponent;
	FBUFIInlineVoiceSwitcherComponent* _inlineVoiceSwitcherComponent;
	vector<FBUFICountComponent *, std::__1::allocator<FBUFICountComponent *> >* _additionalCountComponents;
	BOOL _blinglineJumpFixEnabled;

}
+(id)newWithFeedback:(id)arg1 additionalCounts:(const vector<FBUFIAdditionalCount, std::__1::allocator<FBUFIAdditionalCount> >*)arg2 toolbox:(id)arg3 theme:(id)arg4 layoutIdiom:(unsigned long long)arg5 options:(const FBUFICountsComponentOptions*)arg6 inlineVoiceSwitcherComponent:(id)arg7 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(void)handleActionTap;
-(unsigned long long)renderedCounts;
@end

