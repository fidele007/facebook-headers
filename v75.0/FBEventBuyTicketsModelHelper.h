/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBEventBuyTicketsModelHelper : NSObject
+(id)updateQuantity:(int)arg1 forTicketTier:(id)arg2 inModel:(id)arg3 ;
+(int)totalQuantityFromModel:(id)arg1 ;
+(int)quantityForTier:(id)arg1 fromModel:(id)arg2 ;
+(id)additionalChargesFromMemModels:(id)arg1 ;
+(long long)minimumQuantityWithAvailableTicketsFromModel:(id)arg1 ;
+(long long)maximumQuantityWithAvailableTicketsFromModel:(id)arg1 ;
+(id)buildPartnerModelWithEvent:(id)arg1 session:(id)arg2 renderingOptions:(const FBEventTicketingFlowRenderingOptions*)arg3 ;
+(id)totalAmountFromModel:(id)arg1 ;
@end

