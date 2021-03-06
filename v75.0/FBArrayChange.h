/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBArrayChange : NSObject {

	id _oldObject;
	id _updatedObject;
	long long _oldIndex;
	long long _updatedIndex;
	unsigned long long _changeType;

}

@property (nonatomic,readonly) id oldObject;                               //@synthesize oldObject=_oldObject - In the implementation block
@property (nonatomic,readonly) id updatedObject;                           //@synthesize updatedObject=_updatedObject - In the implementation block
@property (nonatomic,readonly) long long oldIndex;                         //@synthesize oldIndex=_oldIndex - In the implementation block
@property (nonatomic,readonly) long long updatedIndex;                     //@synthesize updatedIndex=_updatedIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long changeType;              //@synthesize changeType=_changeType - In the implementation block
-(id)initWithOldObject:(id)arg1 oldIndex:(long long)arg2 updatedObject:(id)arg3 updatedIndex:(long long)arg4 changeType:(unsigned long long)arg5 ;
-(long long)oldIndex;
-(long long)updatedIndex;
-(id)oldObject;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)changeType;
-(id)updatedObject;
@end

