/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAdInterfacesBaseEditViewController.h>

@protocol FBAdInterfacesSelectDurationViewControllerDelegate;
@class NSArray;

@interface FBAdInterfacesSelectDurationViewController : FBAdInterfacesBaseEditViewController {

	id<FBAdInterfacesSelectDurationViewControllerDelegate> _delegate;
	unsigned long long _selectedDuration;
	NSArray* _suggestions;

}

@property (assign,nonatomic,__weak) id<FBAdInterfacesSelectDurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long selectedDuration;                                                 //@synthesize selectedDuration=_selectedDuration - In the implementation block
@property (nonatomic,copy) NSArray * suggestions;                                                                 //@synthesize suggestions=_suggestions - In the implementation block
+(id)componentWithModel:(id)arg1 context:(id)arg2 ;
-(BOOL)shouldShowFooter;
-(void)didTapSave;
-(id)initWithSuggestions:(id)arg1 delegate:(id)arg2 ;
-(unsigned long long)selectedDuration;
-(BOOL)wereChangesMade;
-(BOOL)isCommitButtonEnabled;
-(id)_validSuggestions:(id)arg1 ;
-(void)scheduleComponent:(id)arg1 didSelectDuration:(id)arg2 ;
-(void)setSelectedDuration:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBAdInterfacesSelectDurationViewControllerDelegate>)arg1 ;
-(id<FBAdInterfacesSelectDurationViewControllerDelegate>)delegate;
-(void)setSuggestions:(NSArray *)arg1 ;
-(NSArray *)suggestions;
-(unsigned long long)sectionCount;
@end

