/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>

@class NSArray;

@interface FBPageAdminPreviewActionBarComponent : CKComponent {

	BOOL _showTopSeparator;
	BOOL _showBottomSeparator;
	NSArray* _buttons;

}
+(id)newWithPrimaryItems:(id)arg1 secondaryItems:(id)arg2 moreTapAction:(CKTypedComponentAction<>)arg3 options:(const FIGActionBarComponentOptions*)arg4 ;
-(BOOL)isOneLineSubtitleForSizeRange:(CKSizeRange)arg1 parentSize:(CGSize)arg2 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end

