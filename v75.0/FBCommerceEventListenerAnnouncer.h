/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAnnouncerBase.h>
#import <Facebook/FBCommerceEventListener.h>

@class NSString;

@interface FBCommerceEventListenerAnnouncer : FBAnnouncerBase <FBCommerceEventListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didOpenStoreFrontFromPageHeaderWithContainerType:(id)arg1 ;
-(void)openStoreFrontFromPageWithContainerType:(id)arg1 withProductID:(id)arg2 index:(long long)arg3 refID:(id)arg4 refType:(id)arg5 ;
-(void)openPhoto:(long long)arg1 ;
-(void)openRecommendedProduct:(id)arg1 index:(long long)arg2 containerType:(id)arg3 ;
-(void)recommendedProductDisplayed:(id)arg1 index:(long long)arg2 containerType:(id)arg3 ;
-(void)openStoreFrontProduct:(id)arg1 index:(long long)arg2 ;
-(void)storeFrontProductDisplayed:(id)arg1 index:(long long)arg2 ;
-(void)didOpenCollectionGridView:(id)arg1 index:(long long)arg2 containerType:(id)arg3 ;
-(void)didOpenStoreStoreFrontCollectionProduct:(id)arg1 index:(long long)arg2 collectionID:(id)arg3 ;
-(void)didCheckoutProductWithMessageToBuy:(id)arg1 pageID:(id)arg2 ;
-(void)storeFrontCollectionProductDisplayed:(id)arg1 index:(long long)arg2 collectionID:(id)arg3 ;
-(void)didOpenStoreStoreFrontBannerProduct:(id)arg1 index:(long long)arg2 collectionID:(id)arg3 ;
-(void)storeFrontBannerProductDisplayed:(id)arg1 index:(long long)arg2 collectionID:(id)arg3 ;
-(void)swipePhotoForProduct:(id)arg1 index:(long long)arg2 event:(id)arg3 ;
-(void)didOpenStoreFrontFromProductDetailPage;
-(void)didOpenProductFromMoreFromShopOnProductDetails:(id)arg1 index:(long long)arg2 ;
-(void)presentViewController:(id)arg1 viewControllerType:(unsigned long long)arg2 ;
-(void)performSaveAction:(int)arg1 onItem:(id)arg2 ;
-(void)openStoreFrontFromPageWithContainerType:(id)arg1 index:(long long)arg2 refID:(id)arg3 refType:(id)arg4 ;
-(void)openStoreFrontFromPageWithContainerType:(id)arg1 withProductID:(id)arg2 attachmentID:(id)arg3 index:(long long)arg4 refID:(id)arg5 refType:(id)arg6 ;
-(void)didDisplayPageStoreEntryPoint:(id)arg1 containerType:(id)arg2 ;
-(void)didTapSubscribeToMerchantButton:(id)arg1 ;
-(void)didDisplaySeeMoreForProductLifestyleUnit;
-(void)didTapOnSeeMoreForProductLifestyleUnit;
-(void)didTapLifestyleUnitThumbnailProduct:(id)arg1 index:(long long)arg2 ;
-(void)checkout;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

