#pragma once
#include <json.hpp>
#include <optional>
#include "MultipleReplayMetadataResponseItemV2.hpp"
namespace leagueapi {
  struct MultipleReplayMetadataResponseV2_t {
    std::vector<MultipleReplayMetadataResponseItemV2_t> metadataResponses;
  };

  inline void to_json(nlohmann::json& j, const MultipleReplayMetadataResponseV2_t& v) {
    j["metadataResponses"] = v.metadataResponses;
  }

  inline void from_json(const nlohmann::json& j, MultipleReplayMetadataResponseV2_t& v) {
    v.metadataResponses = j.at("metadataResponses").get<std::vector<MultipleReplayMetadataResponseItemV2_t>>();
  }
}
