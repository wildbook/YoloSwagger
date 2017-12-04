#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource {
    // 
    std::vector<std::string> enabledFeatures;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource& v) {
    j["enabledFeatures"] = v.enabledFeatures;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource& v) {
    v.enabledFeatures = j.at("enabledFeatures").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource_HPP
