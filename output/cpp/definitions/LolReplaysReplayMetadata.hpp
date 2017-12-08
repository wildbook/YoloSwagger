#pragma once
#include <json.hpp>
#include <optional>
#include "LolReplaysMetadataState.hpp"
namespace leagueapi {
  struct LolReplaysReplayMetadata_t {
    uint32_t downloadProgress;
    LolReplaysMetadataState_t state;
    uint64_t gameId;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplayMetadata_t& v) {
    j["downloadProgress"] = v.downloadProgress;
    j["state"] = v.state;
    j["gameId"] = v.gameId;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplayMetadata_t& v) {
    v.downloadProgress = j.at("downloadProgress").get<uint32_t>();
    v.state = j.at("state").get<LolReplaysMetadataState_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
  }
  inline std::string to_string(const LolReplaysReplayMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
