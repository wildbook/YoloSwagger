#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyGameModeDto_t {
    int32_t queueId;
    std::string gameType;
    std::optional<std::string> botDifficulty;
    int32_t maxPartySize;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameModeDto_t& v) {
    j["queueId"] = v.queueId;
    j["gameType"] = v.gameType;
    if(v.botDifficulty)
      j["botDifficulty"] = *v.botDifficulty;
    j["maxPartySize"] = v.maxPartySize;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameModeDto_t& v) {
    v.queueId = j.at("queueId").get<int32_t>();
    v.gameType = j.at("gameType").get<std::string>();
    if(auto it = j.find("botDifficulty"); it != j.end() && !it->is_null())
      v.botDifficulty = it->get<std::string>();
    v.maxPartySize = j.at("maxPartySize").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyGameModeDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
