/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBPostingControllerPublicationModel : FBValueObject <NSCopying> {

	unsigned long long _publicationState;
	unsigned long long _serverSideProcessingState;

}

@property (nonatomic,readonly) unsigned long long publicationState;                       //@synthesize publicationState=_publicationState - In the implementation block
@property (nonatomic,readonly) unsigned long long serverSideProcessingState;              //@synthesize serverSideProcessingState=_serverSideProcessingState - In the implementation block
-(unsigned long long)serverSideProcessingState;
-(id)initWithPublicationState:(unsigned long long)arg1 serverSideProcessingState:(unsigned long long)arg2 ;
-(unsigned long long)publicationState;
@end

