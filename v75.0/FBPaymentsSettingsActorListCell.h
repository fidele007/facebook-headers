/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <Facebook/FBPaymentsHorizontalActorListViewDelegate.h>

@protocol FBPaymentsMessageWithLinkView, FBPaymentsLoadingIndicatorControlling, FBPaymentsSettingsActorListCellDelegate;
@class FBUserSession, FBPaymentsHorizontalActorListView, UIView, NSArray, NSString;

@interface FBPaymentsSettingsActorListCell : UITableViewCell <FBPaymentsHorizontalActorListViewDelegate> {

	FBUserSession* _session;
	FBPaymentsHorizontalActorListView* _actorListView;
	UIView*<FBPaymentsMessageWithLinkView> _securityMessageView;
	id<FBPaymentsLoadingIndicatorControlling> _loadingIndicatorController;
	BOOL _shouldDisplayLoadingIndicator;
	NSArray* _actors;
	id<FBPaymentsSettingsActorListCellDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * actors;                                                           //@synthesize actors=_actors - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayLoadingIndicator;                                       //@synthesize shouldDisplayLoadingIndicator=_shouldDisplayLoadingIndicator - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsSettingsActorListCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)height;
-(id)initWithReuseIdentifier:(id)arg1 session:(id)arg2 ;
-(void)actorListView:(id)arg1 didSelectActor:(id)arg2 ;
-(BOOL)shouldDisplayLoadingIndicator;
-(void)setShouldDisplayLoadingIndicator:(BOOL)arg1 ;
-(void)setDelegate:(id<FBPaymentsSettingsActorListCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBPaymentsSettingsActorListCellDelegate>)delegate;
-(NSArray *)actors;
-(void)setActors:(NSArray *)arg1 ;
@end

