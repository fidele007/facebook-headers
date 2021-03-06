/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAdInterfacesBaseEditViewController.h>
#import <Facebook/FBAICallToActionComponentValidationControllerDelegate.h>
#import <Facebook/FBAICallToActionComponentValidationControllerDataSource.h>

@protocol FBQueriedFeedUnitFieldsProtocol, FBAdInterfacesAdPreviewRequestsProviderProtocol, FBAdInterfacesEditActionButtonViewControllerDelegate;
@class FBMemModelObject, FBAdInterfacesPromotionDataModel, FBNetworkerRequest, NSString, FBAICallToActionComponentValidationController, FBAdInterfacesCallToActions, NSArray, FBAdInterfacesSelectorOption, NSError;

@interface FBAdInterfacesEditActionButtonViewController : FBAdInterfacesBaseEditViewController <FBAICallToActionComponentValidationControllerDelegate, FBAICallToActionComponentValidationControllerDataSource> {

	unsigned long long _originalSelected;
	BOOL _loading;
	BOOL _callToActionValidating;
	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _feedUnit;
	FBAdInterfacesPromotionDataModel* _dataModel;
	id<FBAdInterfacesAdPreviewRequestsProviderProtocol> _requestProvider;
	FBNetworkerRequest* _adPreviewRequest;
	id<FBAdInterfacesEditActionButtonViewControllerDelegate> _delegate;
	NSString* _postAttachmentType;
	FBAICallToActionComponentValidationController* _callToActionComponentValidationController;
	FBAdInterfacesCallToActions* _callToActions;
	NSArray* _ctaOptions;
	FBAdInterfacesSelectorOption* _selectedCTAOption;
	NSError* _callToActionValidationError;

}

@property (nonatomic,retain) FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> feedUnit;                                            //@synthesize feedUnit=_feedUnit - In the implementation block
@property (nonatomic,copy) FBAdInterfacesPromotionDataModel * dataModel;                                                             //@synthesize dataModel=_dataModel - In the implementation block
@property (assign,nonatomic) BOOL loading;                                                                                           //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) id<FBAdInterfacesAdPreviewRequestsProviderProtocol> requestProvider;                                    //@synthesize requestProvider=_requestProvider - In the implementation block
@property (nonatomic,retain) FBNetworkerRequest * adPreviewRequest;                                                                  //@synthesize adPreviewRequest=_adPreviewRequest - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdInterfacesEditActionButtonViewControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * postAttachmentType;                                                                            //@synthesize postAttachmentType=_postAttachmentType - In the implementation block
@property (nonatomic,retain) FBAICallToActionComponentValidationController * callToActionComponentValidationController;              //@synthesize callToActionComponentValidationController=_callToActionComponentValidationController - In the implementation block
@property (nonatomic,retain) FBAdInterfacesCallToActions * callToActions;                                                            //@synthesize callToActions=_callToActions - In the implementation block
@property (nonatomic,copy) NSArray * ctaOptions;                                                                                     //@synthesize ctaOptions=_ctaOptions - In the implementation block
@property (nonatomic,copy) FBAdInterfacesSelectorOption * selectedCTAOption;                                                         //@synthesize selectedCTAOption=_selectedCTAOption - In the implementation block
@property (assign,nonatomic) BOOL callToActionValidating;                                                                            //@synthesize callToActionValidating=_callToActionValidating - In the implementation block
@property (nonatomic,retain) NSError * callToActionValidationError;                                                                  //@synthesize callToActionValidationError=_callToActionValidationError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasValidIWCTAs:(id)arg1 ;
+(id)actionTypesFromCode:(id)arg1 ;
+(BOOL)isTwoTapActionButton:(unsigned long long)arg1 ;
+(BOOL)isSupportedCTATypes:(id)arg1 ;
+(id)componentWithModel:(id)arg1 context:(id)arg2 ;
-(FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol>)feedUnit;
-(void)setFeedUnit:(FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol>)arg1 ;
-(BOOL)shouldShowFooter;
-(void)didTapSave;
-(FBAdInterfacesCallToActions *)callToActions;
-(FBAdInterfacesPromotionDataModel *)dataModel;
-(id<FBAdInterfacesAdPreviewRequestsProviderProtocol>)requestProvider;
-(id)initWithSession:(id)arg1 feedUnit:(id)arg2 logger:(id)arg3 dataModel:(id)arg4 promotionActionType:(unsigned long long)arg5 requestProvider:(id)arg6 postAttachmentType:(id)arg7 allowedCallToActionTypes:(id)arg8 instantWorkflowCallToActions:(id)arg9 pageLocation:(id)arg10 delegate:(id)arg11 ;
-(BOOL)callToActionValidating;
-(NSError *)callToActionValidationError;
-(void)setCallToActionValidating:(BOOL)arg1 ;
-(void)setCallToActionValidationError:(NSError *)arg1 ;
-(void)validationController:(id)arg1 setCallToActions:(id)arg2 ;
-(void)validationController:(id)arg1 setCallToActionValidating:(BOOL)arg2 ;
-(void)validationController:(id)arg1 setCallToActionValidationError:(id)arg2 ;
-(id)callToActionsForValidationController:(id)arg1 ;
-(id)selectedAudienceForValidationController:(id)arg1 ;
-(FBAICallToActionComponentValidationController *)callToActionComponentValidationController;
-(NSString *)postAttachmentType;
-(void)setCallToAction:(id)arg1 ;
-(void)setCallToActions:(FBAdInterfacesCallToActions *)arg1 ;
-(FBNetworkerRequest *)adPreviewRequest;
-(void)setAdPreviewRequest:(FBNetworkerRequest *)arg1 ;
-(BOOL)wereChangesMade;
-(void)ctaOptionSelector:(id)arg1 didSelectOption:(id)arg2 ;
-(unsigned long long)sectionForAutoScroll;
-(BOOL)isCommitButtonEnabled;
-(void)setDataModel:(FBAdInterfacesPromotionDataModel *)arg1 ;
-(void)setRequestProvider:(id<FBAdInterfacesAdPreviewRequestsProviderProtocol>)arg1 ;
-(void)setPostAttachmentType:(NSString *)arg1 ;
-(void)setCallToActionComponentValidationController:(FBAICallToActionComponentValidationController *)arg1 ;
-(NSArray *)ctaOptions;
-(void)setCtaOptions:(NSArray *)arg1 ;
-(FBAdInterfacesSelectorOption *)selectedCTAOption;
-(void)setSelectedCTAOption:(FBAdInterfacesSelectorOption *)arg1 ;
-(void)setDelegate:(id<FBAdInterfacesEditActionButtonViewControllerDelegate>)arg1 ;
-(id<FBAdInterfacesEditActionButtonViewControllerDelegate>)delegate;
-(unsigned long long)sectionCount;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)shouldShowDoneButton;
@end

