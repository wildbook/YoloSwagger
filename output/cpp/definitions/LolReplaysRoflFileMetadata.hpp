#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysRoflFileMetadata_t {
    std::string gameVersion;
    uint32_t lastGameChunkId;
    uint32_t lastKeyFrameId;
    uint32_t gameLength;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysRoflFileMetadata_t& v) {
    j["gameVersion"] = v.gameVersion;
    j["lastGameChunkId"] = v.lastGameChunkId;
    j["lastKeyFrameId"] = v.lastKeyFrameId;
    j["gameLength"] = v.gameLength;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysRoflFileMetadata_t& v) {
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.lastGameChunkId = j.at("lastGameChunkId").get<uint32_t>();
    v.lastKeyFrameId = j.at("lastKeyFrameId").get<uint32_t>();
    v.gameLength = j.at("gameLength").get<uint32_t>();
  }
  inline std::string to_string(const LolReplaysRoflFileMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
