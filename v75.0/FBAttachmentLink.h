/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, FBAttachmentExternalLinkData;

@interface FBAttachmentLink : FBGraphQLInput {

	NSString* _shareScrapeData;
	NSString* _internalLinkableId;
	FBAttachmentExternalLinkData* _external;
	NSString* _quote;
	NSString* _warnCanHandle;
	NSString* _warnAcknowledged;

}

@property (nonatomic,copy) NSString * shareScrapeData;                           //@synthesize shareScrapeData=_shareScrapeData - In the implementation block
@property (nonatomic,copy) NSString * internalLinkableId;                        //@synthesize internalLinkableId=_internalLinkableId - In the implementation block
@property (nonatomic,copy) FBAttachmentExternalLinkData * external;              //@synthesize external=_external - In the implementation block
@property (nonatomic,copy) NSString * quote;                                     //@synthesize quote=_quote - In the implementation block
@property (nonatomic,copy) NSString * warnCanHandle;                             //@synthesize warnCanHandle=_warnCanHandle - In the implementation block
@property (nonatomic,copy) NSString * warnAcknowledged;                          //@synthesize warnAcknowledged=_warnAcknowledged - In the implementation block
-(void)setExternal:(FBAttachmentExternalLinkData *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)shareScrapeData;
-(void)setShareScrapeData:(NSString *)arg1 ;
-(NSString *)internalLinkableId;
-(void)setInternalLinkableId:(NSString *)arg1 ;
-(void)setQuote:(NSString *)arg1 ;
-(NSString *)warnCanHandle;
-(void)setWarnCanHandle:(NSString *)arg1 ;
-(NSString *)warnAcknowledged;
-(void)setWarnAcknowledged:(NSString *)arg1 ;
-(FBAttachmentExternalLinkData *)external;
-(NSString *)quote;
@end
