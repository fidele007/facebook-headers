/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEntityCardsPageDownloadQueryProvider.h>

@class FBUserSession, NSString;

@interface FBEventNetworkedGuestlistEntityCardDataSourceAdapter : NSObject <FBEntityCardsPageDownloadQueryProvider> {

	FBUserSession* _session;
	long long _queryType;
	NSString* _eventID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityCardDataSourceForPersons:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 queryType:(long long)arg3 eventID:(id)arg4 session:(id)arg5 tailPageInfo:(id)arg6 ;
-(id)pageInfoKeyPath;
-(id)entityKeyPath;
-(id)queryToDownloadEntityIDs:(id)arg1 contextItemCount:(unsigned long long)arg2 displaySurface:(id)arg3 displaySurfaceSourceId:(id)arg4 location:(id)arg5 ;
-(id)queryToDownloadPageInScrollDirection:(unsigned long long)arg1 pageInfo:(id)arg2 pageSize:(unsigned long long)arg3 contextItemCount:(unsigned long long)arg4 displaySurface:(id)arg5 displaySurfaceSourceId:(id)arg6 location:(id)arg7 ;
-(id)initWithSession:(id)arg1 queryType:(long long)arg2 eventID:(id)arg3 ;
@end

