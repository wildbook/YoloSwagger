#pragma once
#include <json.hpp>
#include <optional>
#include "LolReplaysMetadataState.hpp"
namespace leagueapi {
  struct LolReplaysReplayMetadata_t {
    LolReplaysMetadataState_t state;
    uint64_t gameId;
    uint32_t downloadProgress;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplayMetadata_t& v) {
    j["state"] = v.state;
    j["gameId"] = v.gameId;
    j["downloadProgress"] = v.downloadProgress;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplayMetadata_t& v) {
    v.state = j.at("state").get<LolReplaysMetadataState_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.downloadProgress = j.at("downloadProgress").get<uint32_t>();
  }
  inline std::string to_string(const LolReplaysReplayMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
