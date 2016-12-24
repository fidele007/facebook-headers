/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBPresenceViewDelegate;
@class NSDictionary, UIImageView;

@interface FBPresenceView : UIView {

	unsigned long long _presenceState;
	id<FBPresenceViewDelegate> _delegate;
	NSDictionary* _customPresenceImages;
	UIImageView* _indicatorImageView;

}

@property (nonatomic,retain) UIImageView * indicatorImageView;                 //@synthesize indicatorImageView=_indicatorImageView - In the implementation block
@property (assign,nonatomic) unsigned long long presenceState;                 //@synthesize presenceState=_presenceState - In the implementation block
@property (assign,nonatomic) id<FBPresenceViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * customPresenceImages;              //@synthesize customPresenceImages=_customPresenceImages - In the implementation block
-(void)setPresenceState:(unsigned long long)arg1 ;
-(unsigned long long)presenceState;
-(void)setIndicatorImageView:(UIImageView *)arg1 ;
-(NSDictionary *)customPresenceImages;
-(id)defaultImageNameMap;
-(void)_updateImageIfNecessary;
-(void)setCustomPresenceImages:(NSDictionary *)arg1 ;
-(UIImageView *)indicatorImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<FBPresenceViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBPresenceViewDelegate>)delegate;
@end

