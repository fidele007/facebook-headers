/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTimelineSectionButtonViewDelegate.h>
#import <Facebook/FBTableViewSectionDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBTableViewMutating, FBTimelineButtonDataSourceDelegate;
@class FBUserSession, NSString, UIFont;

@interface FBTimelineButtonDataSource : NSObject <FBTimelineSectionButtonViewDelegate, FBTableViewSectionDataSource, UITableViewDelegate> {

	double _cellHeight;
	FBUserSession* _session;
	BOOL _isFIGUIEnabled;
	BOOL _active;
	BOOL _showBottomSeparator;
	BOOL _disableUserInteraction;
	BOOL _useNarrowSeparators;
	id<FBTableViewMutating> _tableViewMutator;
	id<FBTimelineButtonDataSourceDelegate> _delegate;
	NSString* _buttonText;
	UIFont* _buttonFont;
	SEL _actionOverride;
	UIEdgeInsets _insets;

}

@property (assign,nonatomic,__weak) id<FBTimelineButtonDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                                                 //@synthesize insets=_insets - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                                                 //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,retain) UIFont * buttonFont;                                                 //@synthesize buttonFont=_buttonFont - In the implementation block
@property (assign,nonatomic) BOOL showBottomSeparator;                                            //@synthesize showBottomSeparator=_showBottomSeparator - In the implementation block
@property (assign,nonatomic) SEL actionOverride;                                                  //@synthesize actionOverride=_actionOverride - In the implementation block
@property (assign,nonatomic) BOOL disableUserInteraction;                                         //@synthesize disableUserInteraction=_disableUserInteraction - In the implementation block
@property (assign,nonatomic) BOOL useNarrowSeparators;                                            //@synthesize useNarrowSeparators=_useNarrowSeparators - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBTableViewMutating> tableViewMutator;                            //@synthesize tableViewMutator=_tableViewMutator - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                         //@synthesize active=_active - In the implementation block
-(void)setTableViewMutator:(id<FBTableViewMutating>)arg1 ;
-(BOOL)showBottomSeparator;
-(id<FBTableViewMutating>)tableViewMutator;
-(void)_calculateHeight;
-(id)_retrieveCell;
-(SEL)actionOverride;
-(BOOL)disableUserInteraction;
-(void)_updateCell:(id)arg1 ;
-(void)sectionLabelTapped:(id)arg1 ;
-(BOOL)useNarrowSeparators;
-(void)setDisableUserInteraction:(BOOL)arg1 ;
-(void)setActionOverride:(SEL)arg1 ;
-(void)setUseNarrowSeparators:(BOOL)arg1 ;
-(void)setShowBottomSeparator:(BOOL)arg1 ;
-(void)setDelegate:(id<FBTimelineButtonDataSourceDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBTimelineButtonDataSourceDelegate>)delegate;
-(BOOL)isActive;
-(void)_update;
-(void)setActive:(BOOL)arg1 ;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)_updateIfNecessary;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(UIFont *)buttonFont;
-(void)setButtonFont:(UIFont *)arg1 ;
@end
