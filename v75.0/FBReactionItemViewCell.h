/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>

@class FBItemView, FBItemContentView, FBNetworkImageView;

@interface FBReactionItemViewCell : UITableViewCell {

	FBItemView* _itemView;
	FBItemContentView* _itemContentView;
	FBNetworkImageView* _networkImageView;

}

@property (nonatomic,readonly) FBItemView * itemView;                              //@synthesize itemView=_itemView - In the implementation block
@property (nonatomic,readonly) FBItemContentView * itemContentView;                //@synthesize itemContentView=_itemContentView - In the implementation block
@property (nonatomic,readonly) FBNetworkImageView * networkImageView;              //@synthesize networkImageView=_networkImageView - In the implementation block
-(FBNetworkImageView *)networkImageView;
-(id)initWithNetworkImageView:(id)arg1 reuseIdentifier:(id)arg2 ;
-(FBItemContentView *)itemContentView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBItemView *)itemView;
@end

