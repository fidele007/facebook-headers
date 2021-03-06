/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollComponentRelayouting.h>
#import <Facebook/FBHScrollComponentScrolling.h>

@protocol FBHScrollComponentScrollingFBHScrollComponentRelayouting;
@class CKComponent;

@interface FBFeedHScrollComponent : CKCompositeComponent <FBHScrollComponentRelayouting, FBHScrollComponentScrolling> {

	Class _targetComponentClass;
	CKTypedComponentAction<> _endDraggingScrollViewAction;
	CKComponent*<FBHScrollComponentScrolling>*<FBHScrollComponentRelayouting> _hscrollComponent;

}

@property (nonatomic,readonly) CKComponent*<FBHScrollComponentScrolling>*<FBHScrollComponentRelayouting> hscrollComponent;              //@synthesize hscrollComponent=_hscrollComponent - In the implementation block
+(id)newWithChildren:(vector<FBHScrollComponentChild, std::__1::allocator<FBHScrollComponentChild> >*)arg1 options:(FBFeedHScrollOptions)arg2 style:(FBHScrollComponentStyle)arg3 session:(id)arg4 ;
+(id)newWithFIGChildren:(vector<CKComponent<FIGCardContentHScrollChildCompliant> *, std::__1::allocator<CKComponent<FIGCardContentHScrollChildCompliant> *> >*)arg1 options:(FBFeedHScrollOptions)arg2 style:(FBHScrollComponentStyle)arg3 session:(id)arg4 ;
+(void)setWrapperComponentBlock:(/*^block*/id)arg1 ;
-(CKComponent*<FBHScrollComponentScrolling>*<FBHScrollComponentRelayouting>)hscrollComponent;
-(void)scrollToComponentAtIndex:(unsigned long long)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)scrollToNextFromContainedComponent:(id)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)relayoutIfNeeded;
-(BOOL)scrollInDirection:(unsigned long long)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)scrollToPreviewNextComponentWithDelay:(double)arg1 andBackWithDelay:(double)arg2 ;
-(void)endDraggingScrollView:(id)arg1 withContext:(id)arg2 ;
-(void)_scrollVerticallyToCenterHScrollViewWithContext:(id)arg1 fromView:(id)arg2 ;
@end

