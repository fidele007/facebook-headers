/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAdditionalSection.h>

@class FBUserSession;

@interface FBFacecastRecentlyInvitedPeopleSection : FBAdditionalSection {

	BOOL _startedLoad;
	FBUserSession* _session;

}

@property (nonatomic,retain) FBUserSession * session;              //@synthesize session=_session - In the implementation block
-(void)loadSectionData;
-(void)updateResults:(id)arg1 ;
-(void)_handleRecentlyInvitedPeopleResponse:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(FBUserSession *)session;
-(BOOL)showLoading;
-(void)setSession:(FBUserSession *)arg1 ;
@end
