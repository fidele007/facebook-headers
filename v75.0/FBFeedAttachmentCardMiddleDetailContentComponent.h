/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>

@class CKStackLayoutComponent, CKComponent;

@interface FBFeedAttachmentCardMiddleDetailContentComponent : CKComponent {

	CKStackLayoutComponent* _titleContextAndSubcontextDetailComponent;
	CKStackLayoutComponent* _titleSubtitleContextAndSubcontextDetailComponent;
	CKComponent* _titleComponent;
	unsigned long long _heightStyle;

}
+(id)newWithAttributedTitle:(id)arg1 attributedSubtitle:(id)arg2 attributedContext:(id)arg3 attributedSubcontext:(id)arg4 starRating:(double)arg5 heightStyle:(unsigned long long)arg6 fontFoundry:(id)arg7 imageDownloader:(id)arg8 ;
+(id)newWithTitle:(id)arg1 subtitle:(id)arg2 context:(id)arg3 subcontext:(id)arg4 starRating:(double)arg5 heightStyle:(unsigned long long)arg6 fontFoundry:(id)arg7 imageDownloader:(id)arg8 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end

