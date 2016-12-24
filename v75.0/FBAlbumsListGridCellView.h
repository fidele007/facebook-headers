/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBForceTouchIntentProvider.h>
#import <Facebook/FBAlbumsListGridCellViewProtocol.h>

@protocol FBAlbumsListGridCellViewDelegate;
@class FBUserSession, FBWebPhotoView, FBSquareWithDepthView, UIButton, FBMemAlbum, FBMediaForceTouchIntentTarget, NSString;

@interface FBAlbumsListGridCellView : UIView <FBForceTouchIntentProvider, FBAlbumsListGridCellViewProtocol> {

	FBUserSession* _session;
	FBWebPhotoView* _photoView;
	FBSquareWithDepthView* _albumCoverView;
	BOOL _editing;
	UIButton* _deleteButton;
	BOOL _isViewersAlbum;
	FBMemAlbum* _album;
	id<FBAlbumsListGridCellViewDelegate> _delegate;
	FBMediaForceTouchIntentTarget* _forceTouchIntentTarget;

}

@property (assign,nonatomic,__weak) FBMemAlbum * album;                                           //@synthesize album=_album - In the implementation block
@property (assign,nonatomic,__weak) id<FBAlbumsListGridCellViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isViewersAlbum;                                                 //@synthesize isViewersAlbum=_isViewersAlbum - In the implementation block
@property (nonatomic,retain) FBMediaForceTouchIntentTarget * forceTouchIntentTarget;              //@synthesize forceTouchIntentTarget=_forceTouchIntentTarget - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)forceTouchIntentAtPoint:(CGPoint)arg1 sourceView:(id)arg2 ;
-(id)_placeHolderImageView;
-(void)_deleteAlbum:(id)arg1 ;
-(id)_photoViewWithModule:(id)arg1 ;
-(id)initWithSession:(id)arg1 module:(id)arg2 ;
-(void)setIsViewersAlbum:(BOOL)arg1 ;
-(BOOL)isViewersAlbum;
-(FBMediaForceTouchIntentTarget *)forceTouchIntentTarget;
-(void)setForceTouchIntentTarget:(FBMediaForceTouchIntentTarget *)arg1 ;
-(void)setDelegate:(id<FBAlbumsListGridCellViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBAlbumsListGridCellViewDelegate>)delegate;
-(id)accessibilityLabel;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isAccessibilityElement;
-(id)_deleteButton;
-(FBMemAlbum *)album;
-(void)setAlbum:(FBMemAlbum *)arg1 ;
@end
