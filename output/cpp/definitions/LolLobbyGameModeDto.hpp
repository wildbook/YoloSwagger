#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyGameModeDto_t {
    int32_t_t queueId;
    std::optional<std::string_t> botDifficulty;
    std::string_t gameType;
    int32_t_t maxPartySize;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameModeDto_t& v) {
    j["queueId"] = v.queueId;
    if(v.botDifficulty)
      j["botDifficulty"] = *v.botDifficulty;
    j["gameType"] = v.gameType;
    j["maxPartySize"] = v.maxPartySize;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameModeDto_t& v) {
    v.queueId = j.at("queueId").get<int32_t_t>();
    if(auto it = j.find("botDifficulty"); it != j.end() && !it->is_null())
      v.botDifficulty = it->get<std::string_t>();
    v.gameType = j.at("gameType").get<std::string_t>();
    v.maxPartySize = j.at("maxPartySize").get<int32_t_t>();
  }
  inline std::string to_string(const LolLobbyGameModeDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
