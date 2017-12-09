#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyGameModeDto_t {
    std::optional<std::string> botDifficulty;
    std::string gameType;
    int32_t queueId;
    int32_t maxPartySize;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameModeDto_t& v) {
    if(v.botDifficulty)
      j["botDifficulty"] = *v.botDifficulty;
    j["gameType"] = v.gameType;
    j["queueId"] = v.queueId;
    j["maxPartySize"] = v.maxPartySize;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameModeDto_t& v) {
    if(auto it = j.find("botDifficulty"); it != j.end() && !it->is_null())
      v.botDifficulty = it->get<std::string>();
    v.gameType = j.at("gameType").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.maxPartySize = j.at("maxPartySize").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyGameModeDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
