/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBFeedSideFeedItemViewBase.h>
#import <Facebook/FBFeedSideFeedDetailViewBaseDelegate.h>

@class NSString;

@interface FBSideFeedItemView : FBFeedSideFeedItemViewBase <FBFeedSideFeedDetailViewBaseDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightConstrainedToSize:(CGSize)arg1 title:(id)arg2 subtitle:(id)arg3 description:(id)arg4 starRatingValue:(id)arg5 withButton:(BOOL)arg6 ;
-(void)sideFeedItemDetailViewDidTapRightButton:(id)arg1 ;
-(void)_rightButtonViewTapped:(id)arg1 ;
-(id)createDetailViewForBaseClass;
-(id)createCtaButtonForBaseClass;
-(void)layoutSubviews;
@end

