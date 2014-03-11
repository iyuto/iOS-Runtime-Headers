/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <TSWPFootnoteHeightMeasurer>, <TSWPFootnoteMarkProvider>, <TSWPOffscreenColumn>, NSMutableArray, TPFootnoteHeightMeasurer, TPFootnoteMarkProvider, TSDCanvas, TSDLayout, TSPObject<TSDHint>;

@interface TPBodyLayout : TSDLayout <TSWPLayoutTarget, TPAttachmentLayoutParent> {
    NSMutableArray *_anchoredDrawablesForRelayout;
    NSMutableArray *_columns;
    TPFootnoteHeightMeasurer *_footnoteHeightMeasurer;
    TPFootnoteMarkProvider *_footnoteMarkProvider;
}

@property(readonly) const /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *' */ struct * previousTargetTopicNumbers; /* unknown property attribute:  true> >=L}}}II} */
@property(readonly) const struct * nextTargetTopicNumbers; /* unknown property attribute:  true> >=L}}}II} */
@property(readonly) struct CGPoint { float x1; float x2; } anchorPoint;
@property(retain) NSMutableArray * anchoredDrawablesForRelayout;
@property(readonly) unsigned int autosizeFlags;
@property(readonly) TSDCanvas * canvas;
@property(readonly) NSMutableArray * columns;
@property(readonly) struct CGSize { float x1; float x2; } currentSize;
@property(readonly) <TSWPFootnoteHeightMeasurer> * footnoteHeightMeasurer;
@property(readonly) <TSWPFootnoteMarkProvider> * footnoteMarkProvider;
@property(readonly) struct __CFLocale { }* hyphenationLocale;
@property(readonly) BOOL layoutIsValid;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } maskRect;
@property(readonly) float maxAnchorY;
@property(readonly) struct CGSize { float x1; float x2; } maxSize;
@property(readonly) struct CGSize { float x1; float x2; } minSize;
@property(readonly) int naturalAlignment;
@property(readonly) int naturalDirection;
@property(readonly) TSPObject<TSDHint> * nextTargetFirstChildHint;
@property(readonly) <TSWPOffscreenColumn> * nextTargetFirstColumn;
@property(readonly) unsigned int pageCount;
@property(readonly) unsigned int pageNumber;
@property(readonly) TSDLayout * parentLayoutForInlineAttachments;
@property(readonly) struct CGPoint { float x1; float x2; } position;
@property(readonly) <TSWPOffscreenColumn> * previousTargetLastColumn;
@property(readonly) BOOL shouldHyphenate;
@property(readonly) BOOL textIsVertical;
@property(readonly) int verticalAlignment;
@property(readonly) BOOL wantsLineFragments;

+ (struct CGSize { float x1; float x2; })minimumBodySize;

- (void)addAttachmentLayout:(id)arg1;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (struct CGPoint { float x1; float x2; })anchoredAttachmentPositionFromLayoutPosition:(struct CGPoint { float x1; float x2; })arg1;
- (id)anchoredDrawablesForRelayout;
- (unsigned int)autosizeFlags;
- (struct CGPoint { float x1; float x2; })calculatePointFromSearchReference:(id)arg1;
- (id)canvas;
- (struct CGPoint { float x1; float x2; })capturedInfoPositionForAttachment;
- (id)columnMetricsForCharIndex:(unsigned int)arg1 outRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)columns;
- (id)computeLayoutGeometry;
- (float)contentHeight;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (struct CGSize { float x1; float x2; })currentSize;
- (void)dealloc;
- (id)existingAttachmentLayoutForInfo:(id)arg1;
- (id)footnoteHeightMeasurer;
- (id)footnoteMarkProvider;
- (BOOL)invalidateForPageCountChange;
- (void)invalidateSize;
- (BOOL)isLastTarget;
- (BOOL)isLayoutOffscreen;
- (void)killColumns;
- (BOOL)layoutIsValid;
- (struct CGPoint { float x1; float x2; })layoutPositionFromAnchoredAttachmentPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)layoutSearchForAnnotationWithHitBlock:(id)arg1;
- (void)layoutSearchForString:(id)arg1 options:(unsigned int)arg2 hitBlock:(id)arg3;
- (float)maxAnchorY;
- (struct CGSize { float x1; float x2; })maxSize;
- (struct CGSize { float x1; float x2; })maximumFrameSizeForChild:(id)arg1;
- (struct CGSize { float x1; float x2; })maximumSizeForChildLayout:(id)arg1;
- (struct CGSize { float x1; float x2; })minSize;
- (int)naturalAlignment;
- (int)naturalDirection;
- (BOOL)needsInflation;
- (id)nextTargetFirstChildHint;
- (id)nextTargetFirstColumn;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::pair<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::pair<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::pair<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; }*)nextTargetTopicNumbers;
- (id)p_attachedLayoutsInLayout:(id)arg1;
- (void)p_killDrawableLayouts:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_rectForSelection:(id)arg1 useParagraphModeRects:(BOOL)arg2;
- (id)p_validatedLayoutForDrawable:(id)arg1 inContainingLayout:(id)arg2;
- (unsigned int)pageCount;
- (unsigned int)pageNumber;
- (id)parentLayoutForInlineAttachments;
- (struct CGPoint { float x1; float x2; })position;
- (id)previousTargetLastColumn;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::pair<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::pair<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::pair<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; }*)previousTargetTopicNumbers;
- (BOOL)processWidowAndInflation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection:(id)arg1;
- (void)setAnchoredDrawablesForRelayout:(id)arg1;
- (void)setNeedsDisplayInTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)shouldProvideSizingGuides;
- (BOOL)siblingTargetIsManipulatingDrawable:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetRectForCanvasRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)textIsVertical;
- (void)updateStartCharIndex;
- (void)validate;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)validatedLayoutForInlineDrawable:(id)arg1;
- (int)verticalAlignment;
- (BOOL)wantsLineFragments;

@end