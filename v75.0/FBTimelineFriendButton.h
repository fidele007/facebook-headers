/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTimelineActionButton.h>

@class NSString;

@interface FBTimelineFriendButton : FBTimelineActionButton {

	NSString* _friendshipStatus;

}

@property (nonatomic,copy) NSString * friendshipStatus;              //@synthesize friendshipStatus=_friendshipStatus - In the implementation block
-(NSString *)friendshipStatus;
-(void)_configureButton;
-(void)setFriendshipStatus:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 friendshipStatus:(id)arg2 ;
@end
