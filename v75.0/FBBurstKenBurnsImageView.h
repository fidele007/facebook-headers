/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Facebook/FBKenBurnsAnimatorViewDataSource.h>
#import <Facebook/FBBurstImageView.h>

@class FBKenBurnsAnimatorView, FBBurstAnimationImageViewSpecifier, NSArray, NSString;

@interface FBBurstKenBurnsImageView : UIView <FBKenBurnsAnimatorViewDataSource, FBBurstImageView> {

	FBKenBurnsAnimatorView* _kenBurnsView;
	FBBurstAnimationImageViewSpecifier* _previousViewSpecifier;
	NSArray* _imageSpecifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewSpecifier:(id)arg1 ;
-(void)restorePreviousViewSpecifier;
-(id)kenBurnsAnimatorView:(id)arg1 viewToBeShownAfterView:(id)arg2 ;
-(void)layoutSubviews;
-(void)stopAnimating;
-(void)startAnimating;
@end
