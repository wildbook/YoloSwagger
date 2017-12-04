#ifndef SWAGGER_TYPES_SpectateGameInfo_HPP
#define SWAGGER_TYPES_SpectateGameInfo_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SpectateGameInfo {
    // 
    std::string dropInSpectateGameId;
    // 
    std::string allowObserveMode;
    // 
    std::string gameQueueType;
  };

  inline void to_json(nlohmann::json& j, const SpectateGameInfo& v) {
    j["dropInSpectateGameId"] = v.dropInSpectateGameId;
    j["allowObserveMode"] = v.allowObserveMode;
    j["gameQueueType"] = v.gameQueueType;
  }

  inline void from_json(const nlohmann::json& j, SpectateGameInfo& v) {
    v.dropInSpectateGameId = j.at("dropInSpectateGameId").get<std::string>;
    v.allowObserveMode = j.at("allowObserveMode").get<std::string>;
    v.gameQueueType = j.at("gameQueueType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_SpectateGameInfo_HPP