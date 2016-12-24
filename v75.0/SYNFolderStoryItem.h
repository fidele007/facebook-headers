/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class SRUser, NSArray, NSDate, NSSet;

@interface SYNFolderStoryItem : NSObject {

	BOOL _highlight;
	unsigned long long _type;
	SRUser* _actor;
	NSArray* _notificationUUIDs;
	NSDate* _date;
	NSArray* _photos;

}

@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) SRUser * actor;                                //@synthesize actor=_actor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * notificationUUIDs;              //@synthesize notificationUUIDs=_notificationUUIDs - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                            //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL highlight;                                //@synthesize highlight=_highlight - In the implementation block
@property (nonatomic,copy,readonly) NSArray * photos;                         //@synthesize photos=_photos - In the implementation block
@property (nonatomic,copy,readonly) NSSet * photoUUIDs; 
-(NSArray *)notificationUUIDs;
-(NSSet *)photoUUIDs;
-(id)initWithNativeFolderStoryItem:(const FolderStoryItem*)arg1 sessionUser:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)type;
-(NSDate *)date;
-(BOOL)highlight;
-(NSArray *)photos;
-(SRUser *)actor;
@end
