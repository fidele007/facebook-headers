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

@class FBSquareWithDepthView, FBNetworkImageView, NSString, FBUserSession, FBMediaForceTouchIntentTarget;

@interface FBAlbumsListGridVideoCellView : UIView <FBForceTouchIntentProvider, FBAlbumsListGridCellViewProtocol> {

	FBSquareWithDepthView* _videoCoverView;
	FBNetworkImageView* _videoImageView;
	NSString* _ownerFBID;
	NSString* _ownerGraphQLTypeName;
	FBUserSession* _session;
	BOOL _editing;
	FBMediaForceTouchIntentTarget* _forceTouchIntentTarget;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)forceTouchIntentAtPoint:(CGPoint)arg1 sourceView:(id)arg2 ;
-(id)_videoImageView;
-(void)_loadVideoCover;
-(id)initWithSession:(id)arg1 ownerFBID:(id)arg2 ownerGraphQLTypeName:(id)arg3 ;
-(id)accessibilityLabel;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isAccessibilityElement;
@end

