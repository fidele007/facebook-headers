/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNAuthenticationManager.h>
#import <Facebook/FBUserSessionClassProvidable.h>

@class FBAPISessionStore, FBFacebookCredentials, NSString;

@interface MNAuthenticationManagerImpl : NSObject <MNAuthenticationManager, FBUserSessionClassProvidable> {

	FBAPISessionStore* _apiSessionStore;
	FBFacebookCredentials* _pageCredentials;

}

@property (retain) FBFacebookCredentials * pageCredentials;              //@synthesize pageCredentials=_pageCredentials - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)hasFacebookCredentials;
-(id)facebookCredentials;
-(BOOL)hasMailboxViewer;
-(id)mailboxViewerFbId;
-(void)setMailboxViewerPageCredentialsOverride:(id)arg1 ;
-(id)mailboxViewerCredentials;
-(id)initWithApiSessionStore:(id)arg1 ;
-(FBFacebookCredentials *)pageCredentials;
-(void)setPageCredentials:(FBFacebookCredentials *)arg1 ;
@end
