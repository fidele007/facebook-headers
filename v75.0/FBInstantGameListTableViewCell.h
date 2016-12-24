/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <Facebook/FBInstantGameItemViewDelegate.h>

@protocol FBInstantGameListTableViewCellDelegate;
@class FBInstantGameItemView, NSString;

@interface FBInstantGameListTableViewCell : UITableViewCell <FBInstantGameItemViewDelegate> {

	id<FBInstantGameListTableViewCellDelegate> _delegate;
	FBInstantGameItemView* _gameItemView;

}

@property (assign,nonatomic,__weak) id<FBInstantGameListTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBInstantGameItemView * gameItemView;                                  //@synthesize gameItemView=_gameItemView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 reuseIdentifier:(id)arg2 ;
-(FBInstantGameItemView *)gameItemView;
-(void)gameItemViewDidTapPlayButton:(id)arg1 ;
-(void)_gameListTableCellDidTapPlayButton;
-(void)setDelegate:(id<FBInstantGameListTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBInstantGameListTableViewCellDelegate>)delegate;
@end

