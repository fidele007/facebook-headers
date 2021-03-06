/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComponentScrollEventListener.h>

@class UIScrollView, FBPullToRefreshView, NSString;

@interface FBNativeTemplatePtrAdapter : NSObject <FBComponentScrollEventListener> {

	UIScrollView* _scrollView;
	FBPullToRefreshView* _ptrView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewWillEndDragging:(FBScrollViewState)arg1 withVelocity:(CGPoint)arg2 fixedTargetContentOffset:(CGPoint)arg3 ;
-(id)initWithScrollView:(id)arg1 ptrView:(id)arg2 ;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)scrollViewWillBeginDragging:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndDragging:(FBScrollViewState)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndDecelerating:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(FBScrollViewState)arg1 ;
-(void)scrollViewDidScrollToTop:(FBScrollViewState)arg1 ;
@end

