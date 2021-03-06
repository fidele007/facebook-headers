/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebViewAnalytics, FBWebViewAlertHandler;
#import <Facebook/Facebook-Structs.h>
@interface FBWebViewProvider : NSObject {

	id<FBWebViewAnalytics> _analytics;
	id<FBWebViewAlertHandler> _alertHandler;

}

@property (nonatomic,retain) id<FBWebViewAnalytics> analytics;                    //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,retain) id<FBWebViewAlertHandler> alertHandler;              //@synthesize alertHandler=_alertHandler - In the implementation block
-(void)setAnalytics:(id<FBWebViewAnalytics>)arg1 ;
-(id)webViewWithFrame:(CGRect)arg1 processPoolContainer:(id)arg2 ;
-(id<FBWebViewAnalytics>)analytics;
-(id)webViewForBackgroundProcessingWithEmptyFrameAndProcessPoolContainer:(id)arg1 ;
-(id)webViewWithFrame:(CGRect)arg1 processPoolContainer:(id)arg2 implementation:(int)arg3 ;
-(void)setAlertHandler:(id<FBWebViewAlertHandler>)arg1 ;
-(id<FBWebViewAlertHandler>)alertHandler;
@end

