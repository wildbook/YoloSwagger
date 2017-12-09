#pragma once
#include <json.hpp>
#include <optional>
#include "ReplayResponseStatus.hpp"
#include "ReplayMetadataV2.hpp"
namespace leagueapi {
  struct MultipleReplayMetadataResponseItemV2_t {
    uint64_t gameId;
    ReplayResponseStatus_t status;
    ReplayMetadataV2_t metadata;
  };

  inline void to_json(nlohmann::json& j, const MultipleReplayMetadataResponseItemV2_t& v) {
    j["gameId"] = v.gameId;
    j["status"] = v.status;
    j["metadata"] = v.metadata;
  }

  inline void from_json(const nlohmann::json& j, MultipleReplayMetadataResponseItemV2_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.status = j.at("status").get<ReplayResponseStatus_t>();
    v.metadata = j.at("metadata").get<ReplayMetadataV2_t>();
  }
  inline std::string to_string(const MultipleReplayMetadataResponseItemV2_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
