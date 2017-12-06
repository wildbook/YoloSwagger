#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource_t {
    std::vector<std::string> enabledFeatures;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource_t& v) {
    j["enabledFeatures"] = v.enabledFeatures;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource_t& v) {
    v.enabledFeatures = j.at("enabledFeatures").get<std::vector<std::string>>();
  }
}
