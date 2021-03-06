/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <ReactABI34_0_0/components/view/ViewProps.h>
#include <ReactABI34_0_0/graphics/Color.h>
#include <ReactABI34_0_0/imagemanager/primitives.h>

namespace facebook {
namespace ReactABI34_0_0 {

// TODO (T28334063): Consider for codegen.
class SliderProps final : public ViewProps {
 public:
  SliderProps() = default;
  SliderProps(const SliderProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  const float value{0};
  const float minimumValue{0};
  const float maximumValue{1};
  const float step{0};
  const bool disabled{false};
  const SharedColor minimumTrackTintColor{};
  const SharedColor maximumTrackTintColor{};

  // Android only
  const SharedColor thumbTintColor;

  // iOS only
  const ImageSource trackImage{};
  const ImageSource minimumTrackImage{};
  const ImageSource maximumTrackImage{};
  const ImageSource thumbImage{};
};

} // namespace ReactABI34_0_0
} // namespace facebook
