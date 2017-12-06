#pragma once
#include <json.hpp>
#include <optional>
#include "LolReplaysMetadataState.hpp"
namespace leagueapi {
  struct LolReplaysReplayMetadata_t {
    uint32_t downloadProgress;
    uint64_t gameId;
    LolReplaysMetadataState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplayMetadata_t& v) {
    j["downloadProgress"] = v.downloadProgress;
    j["gameId"] = v.gameId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplayMetadata_t& v) {
    v.downloadProgress = j.at("downloadProgress").get<uint32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.state = j.at("state").get<LolReplaysMetadataState_t>();
  }
}
