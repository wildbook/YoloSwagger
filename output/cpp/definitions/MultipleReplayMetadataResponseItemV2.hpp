#pragma once
#include <json.hpp>
#include <optional>
#include "ReplayResponseStatus.hpp"
#include "ReplayMetadataV2.hpp"
namespace leagueapi {
  struct MultipleReplayMetadataResponseItemV2_t {
    uint64_t gameId;
    ReplayMetadataV2_t metadata;
    ReplayResponseStatus_t status;
  };

  inline void to_json(nlohmann::json& j, const MultipleReplayMetadataResponseItemV2_t& v) {
    j["gameId"] = v.gameId;
    j["metadata"] = v.metadata;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, MultipleReplayMetadataResponseItemV2_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.metadata = j.at("metadata").get<ReplayMetadataV2_t>();
    v.status = j.at("status").get<ReplayResponseStatus_t>();
  }
}
