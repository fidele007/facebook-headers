/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollComponentScrolling.h>

@class FBHScrollComponent;

@interface FBWatchAndShopCardContentHScrollComponent : CKCompositeComponent <FBHScrollComponentScrolling> {

	FBHScrollComponent* _hscrollComponent;

}
+(id)newWithWidth:(CKRelativeDimension)arg1 children:(vector<CKComponent<FIGCardContentHScrollChildCompliant> *, std::__1::allocator<CKComponent<FIGCardContentHScrollChildCompliant> *> >*)arg2 endDraggingScrollViewAction:(CKTypedComponentAction<>)arg3 ;
-(void)scrollToComponentAtIndex:(unsigned long long)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)scrollToNextFromContainedComponent:(id)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)relayoutIfNeeded;
-(BOOL)scrollInDirection:(unsigned long long)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)scrollToPreviewNextComponentWithDelay:(double)arg1 andBackWithDelay:(double)arg2 ;
@end

