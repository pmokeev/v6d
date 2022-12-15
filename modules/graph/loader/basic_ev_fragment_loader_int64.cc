/** Copyright 2020-2022 Alibaba Group Holding Limited.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "graph/loader/basic_ev_fragment_loader_impl.h"
#include "graph/utils/partitioner.h"

namespace vineyard {

template class BasicEVFragmentLoader<int64_t, uint32_t,
                                     HashPartitioner<int64_t>, ArrowVertexMap>;

template class BasicEVFragmentLoader<int64_t, uint64_t,
                                     HashPartitioner<int64_t>, ArrowVertexMap>;

template class BasicEVFragmentLoader<
    int64_t, uint32_t, HashPartitioner<int64_t>, ArrowLocalVertexMap>;

template class BasicEVFragmentLoader<
    int64_t, uint64_t, HashPartitioner<int64_t>, ArrowLocalVertexMap>;

}  // namespace vineyard
