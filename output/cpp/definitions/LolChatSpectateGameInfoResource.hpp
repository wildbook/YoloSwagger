#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatSpectateGameInfoResource_t {
    std::string dropInSpectateGameId;
    std::string allowObserveMode;
    std::string gameQueueType;
  };

  inline void to_json(nlohmann::json& j, const LolChatSpectateGameInfoResource_t& v) {
    j["dropInSpectateGameId"] = v.dropInSpectateGameId;
    j["allowObserveMode"] = v.allowObserveMode;
    j["gameQueueType"] = v.gameQueueType;
  }

  inline void from_json(const nlohmann::json& j, LolChatSpectateGameInfoResource_t& v) {
    v.dropInSpectateGameId = j.at("dropInSpectateGameId").get<std::string>();
    v.allowObserveMode = j.at("allowObserveMode").get<std::string>();
    v.gameQueueType = j.at("gameQueueType").get<std::string>();
  }
  inline std::string to_string(const LolChatSpectateGameInfoResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
