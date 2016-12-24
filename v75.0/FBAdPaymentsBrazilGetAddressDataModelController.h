/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAdPaymentsBrazilGetAddressDataModelControllerDelegate;
@class FBUserSession, FBAdPaymentsBrazilTaxIDRequestsCoordinator, FBAdPaymentsBrazilGetAddressDataModel;

@interface FBAdPaymentsBrazilGetAddressDataModelController : NSObject {

	FBUserSession* _session;
	FBAdPaymentsBrazilTaxIDRequestsCoordinator* _requestsCoordinator;
	FBAdPaymentsBrazilGetAddressDataModel* _dataModel;
	id<FBAdPaymentsBrazilGetAddressDataModelControllerDelegate> _delegate;

}

@property (nonatomic,readonly) FBAdPaymentsBrazilGetAddressDataModel * dataModel;                                      //@synthesize dataModel=_dataModel - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdPaymentsBrazilGetAddressDataModelControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(FBAdPaymentsBrazilGetAddressDataModel *)dataModel;
-(void)setDataModel:(FBAdPaymentsBrazilGetAddressDataModel *)arg1 ;
-(void)_triggerGetAddressFromPostalCode:(id)arg1 ;
-(void)getAddressFromPostalCode:(id)arg1 ;
-(void)setDelegate:(id<FBAdPaymentsBrazilGetAddressDataModelControllerDelegate>)arg1 ;
-(id<FBAdPaymentsBrazilGetAddressDataModelControllerDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end
