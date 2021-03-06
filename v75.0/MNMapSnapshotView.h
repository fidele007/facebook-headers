/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBUserSession, UIImageView, MNMapSnapshotViewModel, MNMapSnapshotCacheKey, FBMapSnapshotRequest;

@interface MNMapSnapshotView : UIView {

	FBUserSession* _session;
	UIImageView* _mapImageView;
	MNMapSnapshotViewModel* _viewModel;
	MNMapSnapshotCacheKey* _snapshotKey;
	FBMapSnapshotRequest* _snapshotRequest;

}
-(void)_updateMapSnapshot;
-(void)_setMapImage:(id)arg1 ;
-(void)_requestMapImageForKey:(id)arg1 ;
-(void)_didCompleteMapImageRequestWithImage:(CGImageRef)arg1 snapshotKey:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithSession:(id)arg1 ;
-(void)setViewModel:(id)arg1 ;
@end

