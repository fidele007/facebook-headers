/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBContactSyncBatchInfo : NSObject {

	NSArray* _contacts;
	long long _batchIndex;
	long long _availableRetriesCount;

}

@property (nonatomic,copy,readonly) NSArray * contacts;                      //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,readonly) long long batchIndex;                         //@synthesize batchIndex=_batchIndex - In the implementation block
@property (nonatomic,readonly) long long availableRetriesCount;              //@synthesize availableRetriesCount=_availableRetriesCount - In the implementation block
-(id)initWithContacts:(id)arg1 batchIndex:(long long)arg2 availableRetriesCount:(long long)arg3 ;
-(long long)batchIndex;
-(long long)availableRetriesCount;
-(NSArray *)contacts;
@end

