/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBFriendActionViewing <NSObject>
@property (assign,nonatomic) unsigned long long friendButtonDisplayedAction; 
@property (nonatomic,copy) NSString * friendshipStatus; 
@property (assign,nonatomic,__weak) id<FBFriendActionViewingDelegate> friendActionDelegate; 
@property (assign,nonatomic) int subtext; 
@optional
-(void)setSubtext:(int)arg1;
-(int)subtext;

@required
-(NSString *)friendshipStatus;
-(void)setFriendshipStatus:(id)arg1;
-(void)setFriendActionDelegate:(id)arg1;
-(id)friendingPerson;
-(void)addCustomImageToFriendButton:(id)arg1 forAction:(unsigned long long)arg2;
-(void)clearCustomImagesFromFriendButton;
-(unsigned long long)friendButtonDisplayedAction;
-(void)setFriendButtonDisplayedAction:(unsigned long long)arg1;
-(id<FBFriendActionViewingDelegate>)friendActionDelegate;

@end

