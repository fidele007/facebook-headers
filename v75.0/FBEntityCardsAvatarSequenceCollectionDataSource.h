/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEntityCardsCollectionDataSource.h>
#import <Facebook/FBEntityCardsAvatarSequenceCollectionDataSourceProtocol.h>

@class FBAvatarSequenceCollectionRequestProvider, FBEntityCardsCollectionPageDownloader, NSString;

@interface FBEntityCardsAvatarSequenceCollectionDataSource : FBEntityCardsCollectionDataSource <FBEntityCardsAvatarSequenceCollectionDataSourceProtocol> {

	FBAvatarSequenceCollectionRequestProvider* _requestProvider;
	FBEntityCardsCollectionPageDownloader* _pageDownloader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 location:(id)arg2 ;
-(void)setAvatarSequenceRelation:(unsigned long long)arg1 targetFBID:(id)arg2 initialEntities:(id)arg3 initialDisplayIndex:(unsigned long long)arg4 tailPageInfo:(id)arg5 source:(id)arg6 ;
@end

