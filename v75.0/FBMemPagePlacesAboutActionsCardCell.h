/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMemPageCardCell.h>
#import <Facebook/FBPageCardProtocol.h>

@protocol FBMemPagePlacesAboutActionsCardCellDelegate;
@class FBActionBar, FBMemPage, NSString;

@interface FBMemPagePlacesAboutActionsCardCell : FBMemPageCardCell <FBPageCardProtocol> {

	FBActionBar* _actionBar;
	BOOL _hasEmailAction;
	BOOL _hasWebsiteAction;
	FBMemPage* _page;
	id<FBMemPagePlacesAboutActionsCardCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMemPagePlacesAboutActionsCardCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithViewModel:(id)arg1 ;
-(void)_setupActionBar;
-(BOOL)_hasEmailAction;
-(BOOL)_hasWebsiteAction;
-(void)_createActionBar;
-(void)_sendEmailTapped:(id)arg1 ;
-(void)_copyEmailTapped:(id)arg1 ;
-(void)_visitWebsiteTapped:(id)arg1 ;
-(void)setDelegate:(id<FBMemPagePlacesAboutActionsCardCellDelegate>)arg1 ;
-(id<FBMemPagePlacesAboutActionsCardCellDelegate>)delegate;
@end

