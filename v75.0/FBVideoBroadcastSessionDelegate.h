/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoBroadcastSessionDelegate <NSObject>
@required
-(void)broadcastSessionDidFail:(id)arg1 withLoggingInfo:(FBVideoBroadcastSessionLoggingInfo)arg2;
-(void)broadcastSession:(id)arg1 completedSpeedTestWithStatus:(FBNetworkSpeedTestStatus)arg2;
-(void)broadcastSessionDidStart:(id)arg1 withSpeedTestStatus:(FBNetworkSpeedTestStatus)arg2;
-(void)broadcastSessionDidFinish:(id)arg1 withResult:(id)arg2;
-(void)broadcastSessionDidLoseConnection:(id)arg1 withReason:(id)arg2 error:(id)arg3;
-(void)broadcastSessionDidReconnect:(id)arg1 withReason:(id)arg2;
-(void)broadcastSessionSendDidTimeout:(id)arg1;
-(void)broadcastSession:(id)arg1 didDropPackets:(shared_ptr<std::__1::vector<FBDroppedFrame, std::__1::allocator<FBDroppedFrame> > >*)arg2 dropReason:(id)arg3;
-(void)broadcastSession:(id)arg1 didUpdateStreamingInfo:(compressed_pair<NSString *__strong *, std::__1::allocator<NSString *> >)arg2;
-(void)broadcastSessionDidChangeBitrate:(shared_ptr<FBVideoBroadcastSessionStats>*)arg1;

@end

