/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPageActionItemProviding.h>

@protocol FBEntityCardPagesActionBarTapResponder;
@class FBMemPage, FBUserSession, NSString;

@interface FBPageGetDirectionActionItemProvider : NSObject <FBPageActionItemProviding> {

	FBMemPage* _page;
	FBUserSession* _session;
	id<FBEntityCardPagesActionBarTapResponder> _actionResponder;
	unsigned long long _iconSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionItemPreview;
-(id)initWithAction:(id)arg1 session:(id)arg2 actionResponder:(id)arg3 size:(unsigned long long)arg4 ;
-(BOOL)canProvideActionItem;
-(id)actionItem;
@end

