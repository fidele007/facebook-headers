/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBFacecastViewerTipJarFunnelLogger : NSObject {

	NSString* _videoID;
	NSString* _broadcasterID;
	BOOL _useOverlayDesign;
	BOOL _isAbleToTip;

}
-(void)logAction:(id)arg1 extras:(id)arg2 ;
-(void)endFunnel;
-(id)_defaultPayload;
-(void)startFunnelWithVideoID:(id)arg1 broadcasterID:(id)arg2 useOverlayDesign:(BOOL)arg3 isAbleToTip:(BOOL)arg4 ;
@end

