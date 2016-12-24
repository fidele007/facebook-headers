/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>

@class FBRichTextView, UILabel, NSArray, NSMutableArray;

@interface FBPTSetupRequirementsCell : UITableViewCell {

	FBRichTextView* _successHeaderView;
	FBRichTextView* _failureHeaderView;
	UILabel* _instructionsLabel;
	NSArray* _requirementLabels;
	NSMutableArray* _glyphViews;

}
-(id)initWithPageName:(id)arg1 ;
-(void)_configureContentViewsWithPageName:(id)arg1 ;
-(id)_glyphViewAtIndex:(unsigned long long)arg1 ;
-(id)_requirementTitles;
-(id)_newRequirementsLabel;
-(id)_newGlyphView;
-(id)_newHeaderWithPageName:(id)arg1 title:(id)arg2 ;
-(void)setRequirements:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
