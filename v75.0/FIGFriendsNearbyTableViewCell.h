/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Facebook/CKComponentHostingViewDelegate.h>
#import <Facebook/FBFriendsNearbyTableViewCell.h>
#import <Facebook/FIGFriendsNearbyCellComponentActionHandler.h>

@protocol FBAvatarProtocol, FBFriendsNearbyTableViewCellDelegate;
@class FBMemModelObject, FBMemPerson, NSAttributedString, CKComponentHostingView, FBUserSession, FBScenePath, FBFriendsNearbyPerson, NSString, UIButton;

@interface FIGFriendsNearbyTableViewCell : UITableViewCell <CKComponentHostingViewDelegate, FBFriendsNearbyTableViewCell, FIGFriendsNearbyCellComponentActionHandler> {

	FBMemModelObject*<FBAvatarProtocol> _avatar;
	FBMemPerson* _person;
	NSAttributedString* _nearbyContext;
	NSAttributedString* _metaContext;
	BOOL _isLoading;
	BOOL _isInPing;
	BOOL _isOutPing;
	BOOL _isFirstRowInSection;
	BOOL _isHighlighted;
	unsigned long long _style;
	unsigned long long _actionButtonType;
	CKComponentHostingView* _componentHostingView;
	FBUserSession* _session;
	unsigned long long _profilePictureSize;
	FBScenePath* _scenePath;
	FBFriendsNearbyPerson* _friendsNearbyPerson;
	id<FBFriendsNearbyTableViewCellDelegate> _delegate;

}

@property (nonatomic,copy) NSAttributedString * nearbyContext;                                      //@synthesize nearbyContext=_nearbyContext - In the implementation block
@property (nonatomic,copy) NSAttributedString * metaContext;                                        //@synthesize metaContext=_metaContext - In the implementation block
@property (nonatomic,readonly) FBMemPerson * person; 
@property (assign,nonatomic,__weak) id<FBFriendsNearbyTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFirstRowInSection;                                              //@synthesize isFirstRowInSection=_isFirstRowInSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBFriendsNearbyPerson * friendsNearbyPerson;                         //@synthesize friendsNearbyPerson=_friendsNearbyPerson - In the implementation block
@property (nonatomic,readonly) UIButton * waveButton; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
+(double)heightForCellStyle:(unsigned long long)arg1 ;
-(NSAttributedString *)nearbyContext;
-(NSAttributedString *)metaContext;
-(void)setMetaContext:(NSAttributedString *)arg1 ;
-(void)configureDashboardCell:(id)arg1 showInlineInvite:(BOOL)arg2 ;
-(void)configureCell:(id)arg1 isInvited:(BOOL)arg2 ;
-(void)configureSelfViewCell:(id)arg1 withNearbyContext:(id)arg2 ;
-(void)configureCellWithPerson:(id)arg1 ;
-(void)updateWaveStatus:(BOOL)arg1 ;
-(FBFriendsNearbyPerson *)friendsNearbyPerson;
-(UIButton *)waveButton;
-(BOOL)isFirstRowInSection;
-(void)setIsFirstRowInSection:(BOOL)arg1 ;
-(void)setNearbyContext:(NSAttributedString *)arg1 ;
-(void)refreshFIGTableViewCell;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(void)didTapActionButton:(id)arg1 ;
-(void)didTapMessageButton:(id)arg1 ;
-(void)didTapUndoButton:(id)arg1 ;
-(void)didTapMoreButton:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 style:(unsigned long long)arg2 session:(id)arg3 scenePath:(id)arg4 ;
-(void)setDelegate:(id<FBFriendsNearbyTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBFriendsNearbyTableViewCellDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(FBMemPerson *)person;
@end
