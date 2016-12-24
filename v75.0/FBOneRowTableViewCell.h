/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <Facebook/FBOneRowCellProtocol.h>

@class UIView, NSString;

@interface FBOneRowTableViewCell : UITableViewCell <FBOneRowCellProtocol> {

	UIView* _rowView;

}

@property (nonatomic,retain) UIView * rowView;                      //@synthesize rowView=_rowView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRowView:(UIView *)arg1 ;
-(UIView *)rowView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end
