/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSString;

@interface FBGraphSearchFilterValueDownloader : NSObject {

	FBUserSession* _session;
	BOOL _loading;
	NSString* _filterID;

}

@property (nonatomic,copy) NSString * filterID;              //@synthesize filterID=_filterID - In the implementation block
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithSession:(id)arg1 filterID:(id)arg2 ;
-(void)setFilterID:(NSString *)arg1 ;
-(NSString *)filterID;
@end

