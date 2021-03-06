/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNPhotoEditingTabProperties : FBValueObject <NSCopying> {

	BOOL _isMutuallyExclusive;
	NSString* _imageName;
	NSString* _selectedImageName;
	NSString* _accessibilityLabel;
	NSString* _accessibilityIdentifier;

}

@property (nonatomic,copy,readonly) NSString * imageName;                            //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedImageName;                    //@synthesize selectedImageName=_selectedImageName - In the implementation block
@property (nonatomic,readonly) BOOL isMutuallyExclusive;                             //@synthesize isMutuallyExclusive=_isMutuallyExclusive - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityLabel;                   //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityIdentifier;              //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
-(id)initWithImageName:(id)arg1 selectedImageName:(id)arg2 isMutuallyExclusive:(BOOL)arg3 accessibilityLabel:(id)arg4 accessibilityIdentifier:(id)arg5 ;
-(NSString *)selectedImageName;
-(BOOL)isMutuallyExclusive;
-(NSString *)accessibilityIdentifier;
-(NSString *)accessibilityLabel;
-(NSString *)imageName;
@end

