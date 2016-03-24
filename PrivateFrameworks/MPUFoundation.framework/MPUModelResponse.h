/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUModelResponse : NSObject {
    MPUChangeDetails *_changeDetails;
    MPUPropertySet *_deferredItemProperties;
    MPUPropertySet *_deferredSectionProperties;
    MPUPropertySet *_requestedItemProperties;
    MPUPropertySet *_requestedSectionProperties;
    MPUSectionedCollection *_results;
    BOOL _valid;
}

@property (nonatomic, retain) MPUChangeDetails *changeDetails;
@property (nonatomic, retain) MPUPropertySet *deferredItemProperties;
@property (nonatomic, retain) MPUPropertySet *deferredSectionProperties;
@property (nonatomic, retain) MPUPropertySet *requestedItemProperties;
@property (nonatomic, retain) MPUPropertySet *requestedSectionProperties;
@property (nonatomic, copy) MPUSectionedCollection *results;
@property (getter=isValid, nonatomic, readonly) BOOL valid;

- (void).cxx_destruct;
- (void)_invalidate;
- (id)changeDetails;
- (id)debugDescription;
- (id)deferredItemProperties;
- (id)deferredSectionProperties;
- (id)description;
- (id)init;
- (BOOL)isValid;
- (id)requestedItemProperties;
- (id)requestedSectionProperties;
- (id)results;
- (void)setChangeDetails:(id)arg1;
- (void)setDeferredItemProperties:(id)arg1;
- (void)setDeferredSectionProperties:(id)arg1;
- (void)setRequestedItemProperties:(id)arg1;
- (void)setRequestedSectionProperties:(id)arg1;
- (void)setResults:(id)arg1;

@end