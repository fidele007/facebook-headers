/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPageCreationWebsiteUpdateHandler, FBPagesCreatePageNameCheckResultFetcher, FBPagesCreatePageCategoriesHandler, FBPageCreationPictureUploadHandler, FBPageCreationAddressUpdateHandler, NSString;

@interface FBPagesPageCreationContext : NSObject {

	FBPageCreationWebsiteUpdateHandler* _websiteUpdateHandler;
	FBPagesCreatePageNameCheckResultFetcher* _pageNameCheckResultFetcher;
	FBPagesCreatePageCategoriesHandler* _categoriesHandler;
	FBPageCreationPictureUploadHandler* _pictureUploadHandler;
	FBPageCreationAddressUpdateHandler* _addressUpdateHandler;
	NSString* _entryPoint;

}

@property (nonatomic,readonly) FBPageCreationWebsiteUpdateHandler * websiteUpdateHandler;                         //@synthesize websiteUpdateHandler=_websiteUpdateHandler - In the implementation block
@property (nonatomic,readonly) FBPagesCreatePageNameCheckResultFetcher * pageNameCheckResultFetcher;              //@synthesize pageNameCheckResultFetcher=_pageNameCheckResultFetcher - In the implementation block
@property (nonatomic,readonly) FBPagesCreatePageCategoriesHandler * categoriesHandler;                            //@synthesize categoriesHandler=_categoriesHandler - In the implementation block
@property (nonatomic,readonly) FBPageCreationPictureUploadHandler * pictureUploadHandler;                         //@synthesize pictureUploadHandler=_pictureUploadHandler - In the implementation block
@property (nonatomic,readonly) FBPageCreationAddressUpdateHandler * addressUpdateHandler;                         //@synthesize addressUpdateHandler=_addressUpdateHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * entryPoint;                                                        //@synthesize entryPoint=_entryPoint - In the implementation block
-(id)initWithPageNameCheckResultFetcher:(id)arg1 categoriesHandler:(id)arg2 websiteUpdateHandler:(id)arg3 addressUpdateHandler:(id)arg4 entryPoint:(id)arg5 ;
-(void)setPictureUploadHandler:(FBPageCreationPictureUploadHandler *)arg1 ;
-(FBPageCreationWebsiteUpdateHandler *)websiteUpdateHandler;
-(FBPagesCreatePageNameCheckResultFetcher *)pageNameCheckResultFetcher;
-(FBPagesCreatePageCategoriesHandler *)categoriesHandler;
-(FBPageCreationPictureUploadHandler *)pictureUploadHandler;
-(FBPageCreationAddressUpdateHandler *)addressUpdateHandler;
-(NSString *)entryPoint;
@end
