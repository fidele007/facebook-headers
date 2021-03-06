/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBUserSession, UILabel, UIView, FBWebImageView, FBGraphUILineGraphView;

@interface FBFacecastVideoSummaryStatsView : UIView {

	FBUserSession* _session;
	UILabel* _numPeopleLabel;
	UILabel* _numPeopleSubtitle;
	UIView* _statsBottomBorder;
	UILabel* _feedbackLabel;
	FBWebImageView* _imageView;
	CGSize _imageViewSize;
	FBGraphUILineGraphView* _viewershipGraph;

}
-(id)initWithUserSession:(id)arg1 ;
-(void)setViewershipDataPoints:(id)arg1 ;
-(CGSize)_sizeToFit:(CGSize)arg1 ;
-(void)setImageAsset:(id)arg1 size:(CGSize)arg2 ;
-(void)moveInViewershipGraphAndMarkMaxPointAnimated;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setVideo:(id)arg1 ;
@end

