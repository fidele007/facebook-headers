/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <Facebook/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBAttachmentsRenderingPermissions : FBValueObject <FBObjectShallowCopyProtocol, NSCopying, NSCoding> {

	long long _placeAttachmentRenderingPermissions;

}

@property (nonatomic,readonly) long long placeAttachmentRenderingPermissions;              //@synthesize placeAttachmentRenderingPermissions=_placeAttachmentRenderingPermissions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlaceAttachmentRenderingPermissions:(long long)arg1 ;
-(long long)placeAttachmentRenderingPermissions;
-(id)shallowCopy;
@end
