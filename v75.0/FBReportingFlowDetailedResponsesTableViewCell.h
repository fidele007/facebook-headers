/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIColor, NSArray;

@interface FBReportingFlowDetailedResponsesTableViewCell : UITableViewCell {

	int _presentationStyle;
	unsigned long long _location;
	UIColor* _cornerColor;
	NSArray* _actionButtons;

}

@property (assign,nonatomic) unsigned long long location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) int presentationStyle;                    //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,retain) UIColor * cornerColor;                    //@synthesize cornerColor=_cornerColor - In the implementation block
@property (nonatomic,copy) NSArray * actionButtons;                    //@synthesize actionButtons=_actionButtons - In the implementation block
+(double)heightOfCellWithTitle:(id)arg1 subtitle:(id)arg2 showingActionButtons:(BOOL)arg3 availableTextWidth:(double)arg4 presentationStyle:(int)arg5 ;
-(void)setCornerColor:(UIColor *)arg1 ;
-(UIColor *)cornerColor;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(int)presentationStyle;
-(unsigned long long)location;
-(void)setLocation:(unsigned long long)arg1 ;
-(void)setPresentationStyle:(int)arg1 ;
-(void)setActionButtons:(NSArray *)arg1 ;
-(NSArray *)actionButtons;
@end

