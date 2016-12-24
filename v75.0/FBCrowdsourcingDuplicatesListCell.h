/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, FBPlaceSummaryView, FBMemPage;

@interface FBCrowdsourcingDuplicatesListCell : UITableViewCell {

	UIImageView* _selectionImageView;
	FBPlaceSummaryView* _placeSummaryView;
	FBMemPage* _place;

}

@property (nonatomic,retain) FBMemPage * place;              //@synthesize place=_place - In the implementation block
-(id)initWithReuseIdentifier:(id)arg1 session:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(FBMemPage *)place;
-(void)setPlace:(FBMemPage *)arg1 ;
@end

