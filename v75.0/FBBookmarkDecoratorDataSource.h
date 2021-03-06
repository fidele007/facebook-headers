/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating;
#import <Facebook/Facebook-Structs.h>
@class FBUserSession, UIColor;

@interface FBBookmarkDecoratorDataSource : NSObject {

	unsigned long long _tabBarIconSize;
	FBUserSession* _session;
	id<FBServiceTransactionMutating> _token;
	UIColor* _tabBarIconColor;

}
+(unsigned long long)glyphNameForBookmarkID:(id)arg1 typeAttribute:(id)arg2 shouldRedirectToMessenger:(BOOL)arg3 ;
+(unsigned long long)glyphNameForNotifications;
+(void)setCustomIconProvider:(/*^block*/id)arg1 ;
-(id)initWithSession:(id)arg1 tabBarIconColor:(id)arg2 tabBarIconSize:(unsigned long long)arg3 ;
-(id)tabBarIconForMenuItem:(id)arg1 shouldRedirectToMessenger:(BOOL)arg2 ;
-(id)tabBarIconBackgroundBlockColorForBookmarkID:(id)arg1 ;
-(UIEdgeInsets)tabBarIconBackgroundBlockInsetsForBookmarkID:(id)arg1 ;
-(id)tabBarIconUnselectedColorForBookmarkID:(id)arg1 ;
-(void)_applicationFinishedEnteringForegroundAndIsNowIdle:(id)arg1 ;
-(id)_glyphWithName:(unsigned long long)arg1 color:(id)arg2 ;
-(void)_fetchViewerTabNavigationDecorators;
-(void)dealloc;
@end

