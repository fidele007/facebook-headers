/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAuthCheckpointControlling
@property (assign,nonatomic,__weak) id<FBAuthCheckpointControllingDelegate> authDelegate; 
@required
-(void)setAuthDelegate:(id)arg1;
-(id<FBAuthCheckpointControllingDelegate>)authDelegate;
-(void)presentCheckpointPresenter:(id)arg1 withCheckpointError:(id)arg2;

@end
