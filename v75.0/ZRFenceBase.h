/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/ZRTariffedUxSessionFence.h>

@class ZRTariffedUxSessionCookie, NSString;

@interface ZRFenceBase : NSObject <ZRTariffedUxSessionFence> {

	ZRTariffedUxSessionCookie* _session;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                                      //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) ZRTariffedUxSessionCookie * session;              //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)zeroRatingStatus;
-(BOOL)willImmediatelyCompleteSuccessfully;
-(void)showAndCompleteWith:(/*^block*/id)arg1 ;
-(void)complete:(BOOL)arg1 ;
-(void)show;
-(void)dealloc;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(ZRTariffedUxSessionCookie *)session;
-(void)setSession:(ZRTariffedUxSessionCookie *)arg1 ;
@end
