#ifndef SWAGGER_TYPES_LolChatSpectateGameInfoResource_HPP
#define SWAGGER_TYPES_LolChatSpectateGameInfoResource_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolChatSpectateGameInfoResource {
'    // 
    std::string allowObserveMode;
    // 
    std::string dropInSpectateGameId;
    // 
    std::string gameQueueType;
  };

  void to_json(nlohmann::json& j, const LolChatSpectateGameInfoResource& v) {
    j["allowObserveMode"] = v.allowObserveMode;
    j["dropInSpectateGameId"] = v.dropInSpectateGameId;
    j["gameQueueType"] = v.gameQueueType;
  }

  void from_json(const nlohmann::json& j, LolChatSpectateGameInfoResource& v) {
    v.allowObserveMode = j.at("allowObserveMode").get<std::string>;
    v.dropInSpectateGameId = j.at("dropInSpectateGameId").get<std::string>;
    v.gameQueueType = j.at("gameQueueType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatSpectateGameInfoResource_HPP
