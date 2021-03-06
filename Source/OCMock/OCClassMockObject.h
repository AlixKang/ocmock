//---------------------------------------------------------------------------------------
//  $Id$
//  Copyright (c) 2005-2013 by Mulle Kybernetik. See License file for details.
//---------------------------------------------------------------------------------------

#import <OCMock/OCMockObject.h>

@interface OCClassMockObject : OCMockObject 
{
	Class               mockedClass;
    Class               originalMetaClass;
}

- (id)initWithClass:(Class)aClass;

- (Class)mockedClass;
- (Class)mockObjectClass;  // since -class returns the mockedClass

@end
