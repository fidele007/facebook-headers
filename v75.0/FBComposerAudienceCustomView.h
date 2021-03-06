/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UITableView, FBComposerAudienceTokenizerView, NSString;

@interface FBComposerAudienceCustomView : UIView {

	BOOL _showPrimaryTokenizer;
	BOOL _showSecondaryTokenizer;
	UITableView* _tableView;
	FBComposerAudienceTokenizerView* _primaryTokenizerView;
	FBComposerAudienceTokenizerView* _secondaryTokenizerView;
	NSString* _secondaryTokenizerTitle;

}

@property (nonatomic,readonly) UITableView * tableView;                                               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) FBComposerAudienceTokenizerView * primaryTokenizerView;                //@synthesize primaryTokenizerView=_primaryTokenizerView - In the implementation block
@property (nonatomic,readonly) FBComposerAudienceTokenizerView * secondaryTokenizerView;              //@synthesize secondaryTokenizerView=_secondaryTokenizerView - In the implementation block
@property (nonatomic,copy) NSString * secondaryTokenizerTitle;                                        //@synthesize secondaryTokenizerTitle=_secondaryTokenizerTitle - In the implementation block
-(id)initWithFrame:(CGRect)arg1 showPrimaryTokenizer:(BOOL)arg2 showSecondaryTokenizer:(BOOL)arg3 ;
-(FBComposerAudienceTokenizerView *)secondaryTokenizerView;
-(FBComposerAudienceTokenizerView *)primaryTokenizerView;
-(void)setSecondaryTokenizerTitle:(NSString *)arg1 ;
-(void)removePrimaryTokenizer;
-(NSString *)secondaryTokenizerTitle;
-(void)layoutSubviews;
-(UITableView *)tableView;
@end

