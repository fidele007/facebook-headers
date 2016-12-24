/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView;

@interface FBReactionSingleDateView : UIView {

	FBRichTextView* _dateLabel;
	FBRichTextView* _monthLabel;
	double _dateAscenderAdjust;
	double _dateDescenderAdjust;
	double _monthAscenderAdjust;

}
-(id)initWithFrame:(CGRect)arg1 monthText:(id)arg2 dateText:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 monthText:(id)arg2 fontForMonthText:(id)arg3 colorForMonthText:(id)arg4 dateText:(id)arg5 fontForDateText:(id)arg6 colorForDateText:(id)arg7 ;
-(id)initWithFrame:(CGRect)arg1 monthText:(id)arg2 fontForMonthText:(id)arg3 dateText:(id)arg4 fontForDateText:(id)arg5 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
