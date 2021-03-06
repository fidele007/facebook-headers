/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBContactImporterRevampHeaderView, UIProgressView, NSString;

@interface FBContactImporterProgressView : UIView {

	FBContactImporterRevampHeaderView* _headerView;
	UIProgressView* _progressBar;
	NSString* _loadingText;
	NSString* _progressTextFormat;
	unsigned long long _numberOfMatchedContacts;
	unsigned long long _numberOfImportedContacts;
	unsigned long long _numberOfTotalContacts;

}

@property (assign,nonatomic) unsigned long long numberOfMatchedContacts;               //@synthesize numberOfMatchedContacts=_numberOfMatchedContacts - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfImportedContacts;              //@synthesize numberOfImportedContacts=_numberOfImportedContacts - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTotalContacts;                 //@synthesize numberOfTotalContacts=_numberOfTotalContacts - In the implementation block
-(void)_renderView;
-(unsigned long long)numberOfTotalContacts;
-(void)setNumberOfTotalContacts:(unsigned long long)arg1 ;
-(unsigned long long)numberOfImportedContacts;
-(void)setNumberOfImportedContacts:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMatchedContacts;
-(void)setNumberOfMatchedContacts:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSectionTitle:(id)arg1 ;
@end

