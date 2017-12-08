#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysRoflFileMetadata_t {
    uint32_t_t gameLength;
    std::string_t gameVersion;
    uint32_t_t lastKeyFrameId;
    uint32_t_t lastGameChunkId;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysRoflFileMetadata_t& v) {
    j["gameLength"] = v.gameLength;
    j["gameVersion"] = v.gameVersion;
    j["lastKeyFrameId"] = v.lastKeyFrameId;
    j["lastGameChunkId"] = v.lastGameChunkId;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysRoflFileMetadata_t& v) {
    v.gameLength = j.at("gameLength").get<uint32_t_t>();
    v.gameVersion = j.at("gameVersion").get<std::string_t>();
    v.lastKeyFrameId = j.at("lastKeyFrameId").get<uint32_t_t>();
    v.lastGameChunkId = j.at("lastGameChunkId").get<uint32_t_t>();
  }
  inline std::string to_string(const LolReplaysRoflFileMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
