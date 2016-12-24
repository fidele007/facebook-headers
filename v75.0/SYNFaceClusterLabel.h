/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSString, NSArray;

@interface SYNFaceClusterLabel : NSObject {

	NSString* _userUUID;
	NSString* _customLabel;
	NSArray* _customUserUUIDs;

}

@property (nonatomic,copy,readonly) NSString * userUUID;                    //@synthesize userUUID=_userUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * customLabel;                 //@synthesize customLabel=_customLabel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * customUserUUIDs;              //@synthesize customUserUUIDs=_customUserUUIDs - In the implementation block
-(id)initWithNativeFaceClusterLabel:(const FaceClusterLabel*)arg1 ;
-(NSArray *)customUserUUIDs;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)userUUID;
-(NSString *)customLabel;
@end
