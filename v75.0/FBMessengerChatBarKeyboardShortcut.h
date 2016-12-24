/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBKeyCommandSource.h>

@class FBMessengerChatSideBarView, FBKeyCommandHandler, NSArray, NSString;

@interface FBMessengerChatBarKeyboardShortcut : NSObject <FBKeyCommandSource> {

	FBMessengerChatSideBarView* _chatSideBarView;
	FBKeyCommandHandler* _keyCommandHandler;
	NSArray* _keyCommands;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fb_keyCommands;
-(void)_initializeKeyCommands;
-(void)_activateSearchField;
-(id)initWithChatSideBarView:(id)arg1 ;
-(void)dealloc;
@end
