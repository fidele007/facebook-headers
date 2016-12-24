/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView, UIView, NSString;

@interface FBEventsDiscoverListFiltersTableViewCell : UITableViewCell {

	UILabel* _titleLabel;
	UIImageView* _iconImageView;
	UIView* _separatorLine;
	BOOL _filterSelected;
	NSString* _glyphToken;

}

@property (assign,nonatomic) BOOL filterSelected;              //@synthesize filterSelected=_filterSelected - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * glyphToken;              //@synthesize glyphToken=_glyphToken - In the implementation block
-(void)setGlyphToken:(NSString *)arg1 ;
-(void)setFilterSelected:(BOOL)arg1 ;
-(BOOL)filterSelected;
-(NSString *)glyphToken;
-(id)init;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)_setupContentView;
@end

