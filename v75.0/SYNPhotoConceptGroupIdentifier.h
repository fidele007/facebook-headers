/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SRUser, NSString, SYNFolder, SYNPhotoConceptGroupIdentifierDate, SYNPhotoConceptGroupIdentifierLocation, SYNFaceCluster;

@interface SYNPhotoConceptGroupIdentifier : NSObject <NSCopying> {

	SRUser* _sessionUser;
	shared_ptr<Sync::PhotoConceptGroupIdentifier>* _nativeIdentifier;
	NSString* _displayString;
	long long _displayStringOnceToken;
	BOOL _isSessionUser;
	unsigned long long _type;
	unsigned long long _specialType;
	SRUser* _user;
	SYNFolder* _folder;
	SYNPhotoConceptGroupIdentifierDate* _date;
	SYNPhotoConceptGroupIdentifierLocation* _location;
	NSString* _xrayTag;
	SYNFaceCluster* _faceCluster;

}

@property (nonatomic,readonly) unsigned long long type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long specialType;                                 //@synthesize specialType=_specialType - In the implementation block
@property (nonatomic,readonly) SRUser * user;                                                  //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) BOOL isSessionUser;                                             //@synthesize isSessionUser=_isSessionUser - In the implementation block
@property (nonatomic,readonly) SYNFolder * folder;                                             //@synthesize folder=_folder - In the implementation block
@property (nonatomic,readonly) SYNPhotoConceptGroupIdentifierDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) SYNPhotoConceptGroupIdentifierLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSString * xrayTag;                                        //@synthesize xrayTag=_xrayTag - In the implementation block
@property (nonatomic,readonly) SYNFaceCluster * faceCluster;                                   //@synthesize faceCluster=_faceCluster - In the implementation block
-(shared_ptr<Sync::PhotoConceptGroupIdentifier>*)getNativeIdentifier;
-(id)initWithNativePhotoConceptGroupIdentifier:(shared_ptr<Sync::PhotoConceptGroupIdentifier>*)arg1 sessionUser:(id)arg2 ;
-(unsigned long long)specialType;
-(BOOL)isSessionUser;
-(NSString *)xrayTag;
-(SYNFaceCluster *)faceCluster;
-(SRUser *)user;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)type;
-(SYNPhotoConceptGroupIdentifierDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SYNPhotoConceptGroupIdentifierLocation *)location;
-(SYNFolder *)folder;
@end

