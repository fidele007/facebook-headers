/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBMSyncedThreadKey;

@interface MNWatchAppContext : FBValueObject <NSCopying, NSCoding> {

	FBMSyncedThreadKey* _activeThreadKey;

}

@property (nonatomic,copy,readonly) FBMSyncedThreadKey * activeThreadKey;              //@synthesize activeThreadKey=_activeThreadKey - In the implementation block
-(id)initWithActiveThreadKey:(id)arg1 ;
-(FBMSyncedThreadKey *)activeThreadKey;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
