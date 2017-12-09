#pragma once
#include <json.hpp>
#include <optional>
#include "ReplayMetadataV2.hpp"
#include "ReplayResponseStatus.hpp"
namespace leagueapi {
  struct MultipleReplayMetadataResponseItemV2_t {
    ReplayMetadataV2_t metadata;
    ReplayResponseStatus_t status;
    uint64_t gameId;
  };

  inline void to_json(nlohmann::json& j, const MultipleReplayMetadataResponseItemV2_t& v) {
    j["metadata"] = v.metadata;
    j["status"] = v.status;
    j["gameId"] = v.gameId;
  }

  inline void from_json(const nlohmann::json& j, MultipleReplayMetadataResponseItemV2_t& v) {
    v.metadata = j.at("metadata").get<ReplayMetadataV2_t>();
    v.status = j.at("status").get<ReplayResponseStatus_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
  }
  inline std::string to_string(const MultipleReplayMetadataResponseItemV2_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
