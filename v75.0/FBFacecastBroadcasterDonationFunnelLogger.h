/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBFacecastBroadcasterDonationFunnelLogger : NSObject
-(void)endFunnel;
-(void)logAction:(id)arg1 ;
-(void)startFunnelWithBroadcasterID:(id)arg1 publishTargetID:(id)arg2 ;
-(void)endFunnelWithNoFundraiserAndBroadcastID:(id)arg1 videoID:(id)arg2 ;
-(void)endFunnelWithFundraiserAdded:(id)arg1 fundraiserType:(id)arg2 broadcastID:(id)arg3 videoID:(id)arg4 ;
-(void)endFunnelWithFundraiserErrorAndBroadcastID:(id)arg1 videoID:(id)arg2 ;
-(void)logAction:(id)arg1 withPayload:(id)arg2 ;
-(id)_payloadWithBroadcastID:(id)arg1 videoID:(id)arg2 ;
-(void)logSelectFundraiser:(id)arg1 source:(id)arg2 ;
@end

