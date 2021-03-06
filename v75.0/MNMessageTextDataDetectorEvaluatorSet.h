/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBDataDetector, NSRegularExpression, NSNumberFormatter;

@interface MNMessageTextDataDetectorEvaluatorSet : NSObject {

	FBDataDetector* _builtInDataDetector;
	NSRegularExpression* _currencyAmountRegularExpression;
	NSNumberFormatter* _currencyAmountNumberFormatter;
	NSRegularExpression* _internalToolCommandExpression;

}

@property (nonatomic,readonly) FBDataDetector * builtInDataDetector;                               //@synthesize builtInDataDetector=_builtInDataDetector - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * currencyAmountRegularExpression;              //@synthesize currencyAmountRegularExpression=_currencyAmountRegularExpression - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * currencyAmountNumberFormatter;                  //@synthesize currencyAmountNumberFormatter=_currencyAmountNumberFormatter - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * internalToolCommandExpression;                //@synthesize internalToolCommandExpression=_internalToolCommandExpression - In the implementation block
-(id)initWithBuiltInDataDetector:(id)arg1 currencyAmountRegularExpression:(id)arg2 currencyAmountNumberFormatter:(id)arg3 internalToolCommandExpression:(id)arg4 ;
-(FBDataDetector *)builtInDataDetector;
-(NSRegularExpression *)currencyAmountRegularExpression;
-(NSNumberFormatter *)currencyAmountNumberFormatter;
-(NSRegularExpression *)internalToolCommandExpression;
@end

