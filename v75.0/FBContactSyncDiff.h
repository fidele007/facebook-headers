/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBContactSyncRecord;

@interface FBContactSyncDiff : NSObject {

	FBContactSyncRecord* _insertedRecord;
	FBContactSyncRecord* _removedRecord;

}

@property (nonatomic,readonly) FBContactSyncRecord * insertedRecord;              //@synthesize insertedRecord=_insertedRecord - In the implementation block
@property (nonatomic,readonly) FBContactSyncRecord * removedRecord;               //@synthesize removedRecord=_removedRecord - In the implementation block
-(FBContactSyncRecord *)insertedRecord;
-(FBContactSyncRecord *)removedRecord;
-(id)initWithInsertedRecord:(id)arg1 removedRecord:(id)arg2 ;
-(BOOL)isEmpty;
@end
