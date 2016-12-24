/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTarotCardEntityProtocol.h>

@class NSString, FBTarotObservable, NSDate, NSArray;

@interface FBTarotDigestCoverMediaCardEntity : NSObject <FBTarotCardEntityProtocol> {

	NSString* _cardID;
	NSString* _pageName;
	NSString* _digestTitle;
	FBTarotObservable* _observablePublisherImageEntity;
	NSDate* _publishedDate;
	NSArray* _cardMediaCollection;
	FBTarotObservable* _observableFeedbackEntity;
	Signal<FBTarotDigestCoverMediaCardEntitySurface>* _surface;

}

@property (nonatomic,copy,readonly) NSString * pageName;                                               //@synthesize pageName=_pageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * digestTitle;                                            //@synthesize digestTitle=_digestTitle - In the implementation block
@property (nonatomic,readonly) FBTarotObservable * observablePublisherImageEntity;                     //@synthesize observablePublisherImageEntity=_observablePublisherImageEntity - In the implementation block
@property (nonatomic,readonly) NSDate * publishedDate;                                                 //@synthesize publishedDate=_publishedDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * cardMediaCollection;                                     //@synthesize cardMediaCollection=_cardMediaCollection - In the implementation block
@property (nonatomic,readonly) FBTarotObservable * observableFeedbackEntity;                           //@synthesize observableFeedbackEntity=_observableFeedbackEntity - In the implementation block
@property (nonatomic,readonly) Signal<FBTarotDigestCoverMediaCardEntitySurface>* surface;              //@synthesize surface=_surface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBTarotCardMediaProtocol> cardMedia; 
@property (nonatomic,copy,readonly) NSString * cardType; 
@property (nonatomic,copy,readonly) NSString * cardID;                                                 //@synthesize cardID=_cardID - In the implementation block
-(NSString *)pageName;
-(NSString *)digestTitle;
-(id)initWithPageName:(id)arg1 digestTitle:(id)arg2 observablePublisherImageEntity:(id)arg3 publishedDate:(id)arg4 cardID:(id)arg5 cardMediaCollection:(id)arg6 observableFeedbackEntity:(id)arg7 surface:(const Signal<FBTarotDigestCoverMediaCardEntitySurface>*)arg8 ;
-(NSArray *)cardMediaCollection;
-(FBTarotObservable *)observablePublisherImageEntity;
-(NSDate *)publishedDate;
-(FBTarotObservable *)observableFeedbackEntity;
-(id<FBTarotCardMediaProtocol>)cardMedia;
-(NSString *)cardID;
-(NSString *)cardType;
-(Signal<FBTarotDigestCoverMediaCardEntitySurface>*)surface;
@end
