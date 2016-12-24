/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBKeyCommandSource.h>

@protocol FBNavigationBarSearchTextFieldDelegate, FBSearchTextFieldProtocol, FBGraphSearchKeyboardShortcutDelegate;
@class UIView, FBKeyCommandHandler, NSArray, NSString;

@interface FBGraphSearchKeyboardShortcut : NSObject <FBKeyCommandSource> {

	id<FBNavigationBarSearchTextFieldDelegate> _searchFieldDelegate;
	UIView*<FBSearchTextFieldProtocol> _searchField;
	FBKeyCommandHandler* _keyCommandHandler;
	NSArray* _keyCommands;
	BOOL _isRegistered;
	id<FBGraphSearchKeyboardShortcutDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<FBGraphSearchKeyboardShortcutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fb_keyCommands;
-(void)_initializeKeyCommands;
-(void)unregisterKeyboardShortcuts;
-(void)_searchQuery;
-(void)_keyCommandPreviousSuggestion;
-(void)_keyCommandNextSuggestion;
-(id)initWithSearchField:(id)arg1 searchFieldDelegate:(id)arg2 delegate:(id)arg3 ;
-(void)registerKeyboardShortcuts;
-(void)dealloc;
-(id<FBGraphSearchKeyboardShortcutDelegate>)delegate;
@end

