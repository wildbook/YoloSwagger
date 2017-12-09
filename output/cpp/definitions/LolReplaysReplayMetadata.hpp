#pragma once
#include <json.hpp>
#include <optional>
#include "LolReplaysMetadataState.hpp"
namespace leagueapi {
  struct LolReplaysReplayMetadata_t {
    uint64_t gameId;
    LolReplaysMetadataState_t state;
    uint32_t downloadProgress;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplayMetadata_t& v) {
    j["gameId"] = v.gameId;
    j["state"] = v.state;
    j["downloadProgress"] = v.downloadProgress;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplayMetadata_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.state = j.at("state").get<LolReplaysMetadataState_t>();
    v.downloadProgress = j.at("downloadProgress").get<uint32_t>();
  }
  inline std::string to_string(const LolReplaysReplayMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
