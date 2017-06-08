/***
* Copyright (C) Microsoft. All rights reserved.
* Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
*
* File:PMODObjectNodeProtocol.h
****/

#import "PMODObjectBaseProtocol.h"


@protocol PMODObjectNode <PMODObjectBase>

-(id<PMODObjectNode>)  getParent;

@end

