/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSString, NSObject;

@interface FBPaymentsReceiptExtensionDescriptor : FBValueObject <NSCopying> {

	NSString* _extensionType;
	NSObject*<NSCopying> _extensionViewModel;

}

@property (nonatomic,copy,readonly) NSString * extensionType;                             //@synthesize extensionType=_extensionType - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<NSCopying> extensionViewModel;              //@synthesize extensionViewModel=_extensionViewModel - In the implementation block
-(id)initWithExtensionType:(id)arg1 extensionViewModel:(id)arg2 ;
-(NSString *)extensionType;
-(NSObject*<NSCopying>)extensionViewModel;
@end

