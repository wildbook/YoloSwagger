#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysReplayCreateMetadata_t {
    int32_t queueId;
    uint64_t gameEnd;
    std::string gameType;
    std::string gameVersion;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplayCreateMetadata_t& v) {
    j["queueId"] = v.queueId;
    j["gameEnd"] = v.gameEnd;
    j["gameType"] = v.gameType;
    j["gameVersion"] = v.gameVersion;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplayCreateMetadata_t& v) {
    v.queueId = j.at("queueId").get<int32_t>();
    v.gameEnd = j.at("gameEnd").get<uint64_t>();
    v.gameType = j.at("gameType").get<std::string>();
    v.gameVersion = j.at("gameVersion").get<std::string>();
  }
  inline std::string to_string(const LolReplaysReplayCreateMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
