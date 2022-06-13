/*
 * Copyright (C) 2022 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#ifndef EVENTEMITTERPLUGIN_HH_
#define EVENTEMITTERPLUGIN_HH_

#include <gz/common/Event.hh>
#include <gz/common/events/Export.hh>

using TestEvent =
    gz::common::EventT<void(), class TestEventTag>;
#endif 
