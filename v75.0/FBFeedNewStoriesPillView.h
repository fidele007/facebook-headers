/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPillView.h>

@class UIImageView;

@interface FBFeedNewStoriesPillView : FBPillView {

	UIImageView* _leftImageView;
	unsigned long long _unreadCount;

}

@property (assign,nonatomic) unsigned long long unreadCount;              //@synthesize unreadCount=_unreadCount - In the implementation block
-(id)messageToDisplay;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUnreadCount:(unsigned long long)arg1 ;
-(unsigned long long)unreadCount;
@end

