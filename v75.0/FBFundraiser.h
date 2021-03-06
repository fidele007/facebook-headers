/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBFundraiserCreateFlowBeneficiaryModel, FBFundraiserCoverPhoto, NSString, NSDate, FBMemCurrencyAmount;

@interface FBFundraiser : FBValueObject <NSCopying> {

	BOOL _hasEndDate;
	BOOL _canChangeCurrency;
	FBFundraiserCreateFlowBeneficiaryModel* _beneficiary;
	FBFundraiserCoverPhoto* _coverPhoto;
	NSString* _title;
	NSString* _descriptionText;
	NSDate* _endDate;
	FBMemCurrencyAmount* _goalAmount;
	NSString* _promoID;
	NSString* _promotionalSource;
	NSString* _category;

}

@property (nonatomic,copy,readonly) FBFundraiserCreateFlowBeneficiaryModel * beneficiary;              //@synthesize beneficiary=_beneficiary - In the implementation block
@property (nonatomic,copy,readonly) FBFundraiserCoverPhoto * coverPhoto;                               //@synthesize coverPhoto=_coverPhoto - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionText;                                        //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                                                  //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) BOOL hasEndDate;                                                        //@synthesize hasEndDate=_hasEndDate - In the implementation block
@property (nonatomic,readonly) BOOL canChangeCurrency;                                                 //@synthesize canChangeCurrency=_canChangeCurrency - In the implementation block
@property (nonatomic,copy,readonly) FBMemCurrencyAmount * goalAmount;                                  //@synthesize goalAmount=_goalAmount - In the implementation block
@property (nonatomic,copy,readonly) NSString * promoID;                                                //@synthesize promoID=_promoID - In the implementation block
@property (nonatomic,copy,readonly) NSString * promotionalSource;                                      //@synthesize promotionalSource=_promotionalSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * category;                                               //@synthesize category=_category - In the implementation block
+(id)fundraiserFromGraphQL:(const FBEditFundraiserInfo*)arg1 ;
-(FBFundraiserCoverPhoto *)coverPhoto;
-(id)coverPhotoFocus;
-(id)endTimestamp;
-(FBFundraiserCreateFlowBeneficiaryModel *)beneficiary;
-(FBMemCurrencyAmount *)goalAmount;
-(BOOL)canChangeCurrency;
-(NSString *)promoID;
-(NSString *)promotionalSource;
-(id)editDataForSession:(id)arg1 sourceFundraiser:(id)arg2 logger:(id)arg3 ;
-(id)createDataForSession:(id)arg1 logger:(id)arg2 ;
-(id)initWithBeneficiary:(id)arg1 coverPhoto:(id)arg2 title:(id)arg3 descriptionText:(id)arg4 endDate:(id)arg5 hasEndDate:(BOOL)arg6 canChangeCurrency:(BOOL)arg7 goalAmount:(id)arg8 promoID:(id)arg9 promotionalSource:(id)arg10 category:(id)arg11 ;
-(id)goalAmountString;
-(id)coverPhotoID;
-(id)coverPhotoUpload;
-(NSString *)category;
-(NSString *)title;
-(NSString *)descriptionText;
-(BOOL)hasEndDate;
-(NSDate *)endDate;
@end

