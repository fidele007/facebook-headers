/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>

@protocol FBProfileTileSectionComponentToolbox;
@class FBProfileModelItem, FBIntentTarget, CKComponent, NSArray;

@interface FBProfileItemComponent : CKCompositeComponent <FBHScrollImpressionLogging> {

	FBProfileModelItem* _model;
	id<FBProfileTileSectionComponentToolbox> _toolbox;
	CKTypedComponentAction<> _tapAction;
	CKTypedComponentAction<> _tapButtonIconAction;
	FBIntentTarget* _forceTouchIntentTarget;
	CKComponent* _imageComponent;
	NSArray* _swipeableVideos;

}
+(id)newWithModel:(id)arg1 tapAction:(CKTypedComponentAction<>)arg2 tapButtonIconAction:(CKTypedComponentAction<>)arg3 imageSideLength:(double)arg4 forceTouchIntentTarget:(id)arg5 shouldUseFIGForFriendsProtile:(BOOL)arg6 shouldUseChainAutoplay:(BOOL)arg7 shouldUseSlimProtiles:(BOOL)arg8 swipeableVideos:(id)arg9 toolbox:(id)arg10 ;
@end

