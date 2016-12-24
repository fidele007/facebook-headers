/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBWebImageSpecifier.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBMediaAttachmentProtocol;
@class NSString;

@interface FBWebImageMediaAttachmentSpecifier : NSObject <FBWebImageSpecifier, NSCopying> {

	NSString* _logicalIdentifier;
	id<FBMediaAttachmentProtocol> _mediaAttachment;

}

@property (nonatomic,readonly) id<FBMediaAttachmentProtocol> mediaAttachment;              //@synthesize mediaAttachment=_mediaAttachment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)type;
-(id<FBMediaAttachmentProtocol>)mediaAttachment;
-(id)logicalIdentifier;
-(id)initWithMediaAttachment:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

