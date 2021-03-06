/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAbstractAlbumGridCell.h>
#import <Facebook/FBWebImageViewListener.h>

@protocol FBAlbumGridCellDelegate;
@class FBMemPhoto, FBWebPhotoView, UIButton, FBUserSession, NSString;

@interface FBAlbumGridCell : FBAbstractAlbumGridCell <FBWebImageViewListener> {

	FBMemPhoto* _coverPhoto;
	FBWebPhotoView* _coverPhotoView;
	UIButton* _deleteButton;
	id<FBAlbumGridCellDelegate> _delegate;
	FBUserSession* _session;

}

@property (assign,nonatomic,__weak) id<FBAlbumGridCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBMemPhoto * coverPhoto;                                  //@synthesize coverPhoto=_coverPhoto - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                  //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBMemPhoto *)coverPhoto;
-(void)webImageViewDidSetImage:(id)arg1 fromCache:(BOOL)arg2 ;
-(void)setCoverPhoto:(FBMemPhoto *)arg1 ;
-(void)_deleteAlbum:(id)arg1 ;
-(unsigned long long)_getPhotoImageFlagForPhoto:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBAlbumGridCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBAlbumGridCellDelegate>)delegate;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

