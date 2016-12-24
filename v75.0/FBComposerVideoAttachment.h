/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol FBVideoAttachmentProtocol;
@class FBComposerVideoAttachmentTaggingState;

@interface FBComposerVideoAttachment : NSObject <NSCopying, NSCoding> {

	id<FBVideoAttachmentProtocol> _attachment;
	FBComposerVideoAttachmentTaggingState* _taggingState;

}

@property (nonatomic,readonly) id<FBVideoAttachmentProtocol> attachment;                          //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) FBComposerVideoAttachmentTaggingState * taggingState;              //@synthesize taggingState=_taggingState - In the implementation block
-(id)initWithAttachment:(id)arg1 taggingState:(id)arg2 ;
-(FBComposerVideoAttachmentTaggingState *)taggingState;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<FBVideoAttachmentProtocol>)attachment;
@end

