#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SpectateGameInfo_t {
    std::string allowObserveMode;
    std::string dropInSpectateGameId;
    std::string gameQueueType;
  };

  inline void to_json(nlohmann::json& j, const SpectateGameInfo_t& v) {
    j["allowObserveMode"] = v.allowObserveMode;
    j["dropInSpectateGameId"] = v.dropInSpectateGameId;
    j["gameQueueType"] = v.gameQueueType;
  }

  inline void from_json(const nlohmann::json& j, SpectateGameInfo_t& v) {
    v.allowObserveMode = j.at("allowObserveMode").get<std::string>();
    v.dropInSpectateGameId = j.at("dropInSpectateGameId").get<std::string>();
    v.gameQueueType = j.at("gameQueueType").get<std::string>();
  }
}
