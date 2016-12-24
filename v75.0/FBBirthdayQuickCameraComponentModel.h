/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBCameraComponentModel, NSString;

@interface FBBirthdayQuickCameraComponentModel : FBValueObject <NSCopying> {

	FBCameraComponentModel* _baseCameraModel;
	NSString* _targetName;
	NSString* _targetFBID;

}

@property (nonatomic,copy,readonly) FBCameraComponentModel * baseCameraModel;              //@synthesize baseCameraModel=_baseCameraModel - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetName;                                 //@synthesize targetName=_targetName - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetFBID;                                 //@synthesize targetFBID=_targetFBID - In the implementation block
-(NSString *)targetFBID;
-(id)initWithBaseCameraModel:(id)arg1 targetName:(id)arg2 targetFBID:(id)arg3 ;
-(FBCameraComponentModel *)baseCameraModel;
-(NSString *)targetName;
@end
