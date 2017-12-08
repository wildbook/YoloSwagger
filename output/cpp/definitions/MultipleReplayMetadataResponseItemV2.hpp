#pragma once
#include <json.hpp>
#include <optional>
#include "ReplayMetadataV2.hpp"
#include "ReplayResponseStatus.hpp"
namespace leagueapi {
  struct MultipleReplayMetadataResponseItemV2_t {
    ReplayResponseStatus_t status;
    uint64_t_t gameId;
    ReplayMetadataV2_t metadata;
  };

  inline void to_json(nlohmann::json& j, const MultipleReplayMetadataResponseItemV2_t& v) {
    j["status"] = v.status;
    j["gameId"] = v.gameId;
    j["metadata"] = v.metadata;
  }

  inline void from_json(const nlohmann::json& j, MultipleReplayMetadataResponseItemV2_t& v) {
    v.status = j.at("status").get<ReplayResponseStatus_t>();
    v.gameId = j.at("gameId").get<uint64_t_t>();
    v.metadata = j.at("metadata").get<ReplayMetadataV2_t>();
  }
  inline std::string to_string(const MultipleReplayMetadataResponseItemV2_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
