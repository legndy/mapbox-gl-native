#import "MGLCircle.h"

#import <mbgl/annotation/annotation.hpp>

NS_ASSUME_NONNULL_BEGIN

@protocol MGLMultiPointDelegate;

@interface MGLCircle (Private)

/** Constructs a circle annotation object, asking the delegate for style values. */
- (mbgl::Annotation)annotationObjectWithDelegate:(id <MGLMultiPointDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
