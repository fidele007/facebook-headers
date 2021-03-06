/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class FBVideoHomeLikeButton, FBMemPage, FBUserSession, NSArray;

@interface FBVideoHomeLikeButtonComponentView : UIView {

	FBVideoHomeLikeButton* _button;
	BOOL _viewInvalidated;
	FBMemPage* _page;
	FBUserSession* _session;
	/*^block*/id _stateToggledToBlock;
	NSArray* _trackingCodes;

}

@property (nonatomic,retain) FBMemPage * page;                     //@synthesize page=_page - In the implementation block
@property (nonatomic,retain) FBUserSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) id stateToggledToBlock;                 //@synthesize stateToggledToBlock=_stateToggledToBlock - In the implementation block
@property (nonatomic,copy) NSArray * trackingCodes;                //@synthesize trackingCodes=_trackingCodes - In the implementation block
-(NSArray *)trackingCodes;
-(void)setTrackingCodes:(NSArray *)arg1 ;
-(id)stateToggledToBlock;
-(void)setStateToggledToBlock:(id)arg1 ;
-(void)layoutSubviews;
-(FBMemPage *)page;
-(void)setPage:(FBMemPage *)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

